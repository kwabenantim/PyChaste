#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "wrapper_header_collection.hpp"
#include "CellLabel.pypp.hpp"

namespace py = pybind11;
typedef CellLabel CellLabel;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_CellLabel_class(py::module &m){
py::class_<CellLabel  , boost::shared_ptr<CellLabel >  , AbstractCellProperty  >(m, "CellLabel")
        .def(py::init<unsigned int >())
        .def(
            "GetColour", 
            (unsigned int(CellLabel::*)() const ) &CellLabel::GetColour, 
            " " )
    ;
}
