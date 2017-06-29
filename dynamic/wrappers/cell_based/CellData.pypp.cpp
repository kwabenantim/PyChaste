#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "wrapper_header_collection.hpp"
#include "CellData.pypp.hpp"

namespace py = pybind11;
typedef CellData CellData;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

void register_CellData_class(py::module &m){
py::class_<CellData  , boost::shared_ptr<CellData >  , AbstractCellProperty  >(m, "CellData")
        .def(
            "SetItem", 
            (void(CellData::*)(::std::string const &, double)) &CellData::SetItem, 
            " " , py::arg("rVariableName"), py::arg("data"))
        .def(
            "GetItem", 
            (double(CellData::*)(::std::string const &) const ) &CellData::GetItem, 
            " " , py::arg("rVariableName"))
        .def(
            "GetNumItems", 
            (unsigned int(CellData::*)() const ) &CellData::GetNumItems, 
            " " )
        .def(
            "GetKeys", 
            (::std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >(CellData::*)() const ) &CellData::GetKeys, 
            " " )
    ;
}
