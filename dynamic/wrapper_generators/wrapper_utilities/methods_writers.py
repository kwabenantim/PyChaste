import collections


class CppMethodWrapperWriter():

    """
    Manage addition of method wrapper code
    """

    def __init__(self, class_decl, method_decl,
                 wrapper_templates,
                 class_short_name=None,
                 exclusion_args=None):

        self.class_decl = class_decl
        self.method_decl = method_decl
        self.wrapper_templates = wrapper_templates

        self.class_short_name = class_short_name
        if self.class_short_name is None:
            self.class_short_name = self.class_decl.name

        self.exclusion_args = exclusion_args
        if self.exclusion_args is None:
            self.exclusion_args = []

        self.tidy_replacements = collections.OrderedDict([(", ", "_"), ("<", ""), 
                                                          (">", ""), ("::", "_"), 
                                                          ("*", "Ptr"), ("&", "Ref"),
                                                          ("const", "")])

    def tidy_name(self, name):

        for key, value in self.tidy_replacements.items():
            name = name.replace(key, value)
        return name.replace(" ", "")

    def exclusion_critera(self):

        # Are any return types not wrappable
        return_type = self.method_decl.return_type.decl_string.replace(" ", "")
        if return_type in self.exclusion_args:
            return True

        # Don't include sub class (e.g. iterator) methods
        if self.method_decl.parent != self.class_decl:
            return True

        # No private methods
        if self.method_decl.access_type == "private":
            return True

        # Are any arguements not wrappable
        for eachArg in self.method_decl.argument_types:
            arg_type = eachArg.decl_string.split()[0].replace(" ", "")
            if arg_type in self.exclusion_args:
                return True
        return False

    def default_arg_exclusion_criteria(self):

        # Problem with boost::shared_ptr in default args
        for eachArg in self.method_decl.arguments:
            if eachArg.default_value is not None:
                has_boost_ptr_defaults = "boost::shared_ptr" in eachArg.default_value
                has_cell_ptr_defaults = "CellPtr" in eachArg.default_value
                if has_boost_ptr_defaults or has_cell_ptr_defaults:
                    return True
        return False

    def add_self(self, output_string):

        # Check for exclusions
        if self.exclusion_critera():
            return output_string

        # Which definition type
        def_adorn = ""
        if self.method_decl.has_static:
            def_adorn += "_static"

        # How to point to class
        if not self.method_decl.has_static:
            self_ptr = self.class_short_name + "::*"
        else:
            self_ptr = "*"

        # Get the arg signature
        arg_signature = ""
        num_arg_types = len(self.method_decl.argument_types)
        for idx, eachArg in enumerate(self.method_decl.argument_types):
            arg_signature += eachArg.decl_string
            if idx < num_arg_types-1:
                arg_signature += ", "

        # Const-ness
        const_adorn = ""
        if self.method_decl.has_const:
            const_adorn = ' const '

        # Default args
        default_args = ""
        if not self.default_arg_exclusion_criteria():
            for eachArg in self.method_decl.arguments:
                default_args += ', py::arg("{}")'.format(eachArg.name)
                if eachArg.default_value is not None:
                    default_args += ' = ' + eachArg.default_value

        method_dict = {'def_adorn': def_adorn,
                       'method_name': self.method_decl.name,
                       'return_type': self.method_decl.return_type.decl_string,
                       'self_ptr': self_ptr,
                       'arg_signature': arg_signature,
                       'const_adorn': const_adorn,
                       'class_short_name': self.class_short_name,
                       'method_docs': '" "',
                       'default_args': default_args}
        output_string += self.wrapper_templates["class_method"].format(**method_dict)
        return output_string

    def add_override(self, output_string):

        if self.method_decl.access_type == "private":
            return output_string

        arg_string = ""
        num_arg_types = len(self.method_decl.argument_types)
        args = self.method_decl.arguments
        for idx, eachArg in enumerate(self.method_decl.argument_types):
            arg_string += eachArg.decl_string + " " + args[idx].name
            if idx < num_arg_types-1:
                arg_string += ", "

        const_adorn = ""
        if self.method_decl.has_const:
            const_adorn = " const "

        overload_adorn = ""
        if self.method_decl.virtuality == "pure virtual":
                overload_adorn = "_PURE"

        all_args_string = ""
        for idx, eachArg in enumerate(self.method_decl.argument_types):
            all_args_string += ""*8 + args[idx].name
            if idx < num_arg_types-1:
                all_args_string += ", \n"

        return_string = self.method_decl.return_type.decl_string
        override_dict = {'return_type': return_string,
                         'method_name': self.method_decl.name,
                         'arg_string': arg_string,
                         'const_adorn': const_adorn,
                         'overload_adorn': overload_adorn,
                         'tidy_method_name': self.tidy_name(return_string),
                         'short_class_name': self.class_short_name,
                         'args_string': all_args_string,
                         }
        output_string += self.wrapper_templates["method_virtual_override"].format(**override_dict)
        return output_string
