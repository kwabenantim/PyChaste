#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "wrapper_header_collection.hpp"
#include "ApoptoticCellProperty.pypp.hpp"

namespace py = pybind11;
typedef ApoptoticCellProperty ApoptoticCellProperty;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_ApoptoticCellProperty_class(py::module &m){
py::class_<ApoptoticCellProperty  , boost::shared_ptr<ApoptoticCellProperty >  , AbstractCellProperty  >(m, "ApoptoticCellProperty")
        .def(py::init<unsigned int >())
        .def(
            "GetColour", 
            (unsigned int(ApoptoticCellProperty::*)() const ) &ApoptoticCellProperty::GetColour, 
            " " )
    ;
}
