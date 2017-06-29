#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "wrapper_header_collection.hpp"
#include "Identifiable.pypp.hpp"

namespace py = pybind11;
typedef Identifiable Identifiable;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_Identifiable_class(py::module &m){
py::class_<Identifiable  , boost::shared_ptr<Identifiable >   >(m, "Identifiable")
        .def(
            "GetIdentifier", 
            (::std::string(Identifiable::*)() const ) &Identifiable::GetIdentifier, 
            " " )
    ;
}
