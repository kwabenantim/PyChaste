#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "wrapper_header_collection.hpp"
#include "Hello.pypp.hpp"

namespace py = pybind11;
typedef Hello Hello;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_Hello_class(py::module &m){
py::class_<Hello  , boost::shared_ptr<Hello >   >(m, "Hello")
        .def(py::init<::std::string const & >())
        .def(
            "GetMessage", 
            (::std::string(Hello::*)()) &Hello::GetMessage, 
            " " )
        .def(
            "Complain", 
            (void(Hello::*)(::std::string const &)) &Hello::Complain, 
            " " , py::arg("rComplaint"))
        .def(
            "SetVector", 
            (void(Hello::*)(::std::vector<double, std::allocator<double> >)) &Hello::SetVector, 
            " " , py::arg("vectorInput"))
        .def(
            "GetVector", 
            (::std::vector<double, std::allocator<double> >(Hello::*)()) &Hello::GetVector, 
            " " )
    ;
}
