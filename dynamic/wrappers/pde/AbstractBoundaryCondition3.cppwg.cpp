#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AbstractBoundaryCondition.hpp"

#include "PythonObjectConverters.hpp"
#include "AbstractBoundaryCondition3.cppwg.hpp"

namespace py = pybind11;
PYBIND11_CVECTOR_TYPECASTER2();
PYBIND11_CVECTOR_TYPECASTER3();
//PYBIND11_VTK_TYPECASTER(vtkRenderer);
//PYBIND11_VTK_TYPECASTER(vtkUnsignedCharArray);   
typedef AbstractBoundaryCondition<3 > AbstractBoundaryCondition3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class AbstractBoundaryCondition3_Overloads : public AbstractBoundaryCondition3{
    public:
    using AbstractBoundaryCondition3::AbstractBoundaryCondition;
    double GetValue(::ChastePoint<3> const & rX) const  override {
        PYBIND11_OVERLOAD_PURE(
            double,
            AbstractBoundaryCondition3,
            GetValue,
            rX);
    }

};
void register_AbstractBoundaryCondition3_class(py::module &m){
py::class_<AbstractBoundaryCondition3 , AbstractBoundaryCondition3_Overloads , boost::shared_ptr<AbstractBoundaryCondition3 >   >(m, "AbstractBoundaryCondition3")
        .def(py::init< >())
        .def(
            "GetValue", 
            (double(AbstractBoundaryCondition3::*)(::ChastePoint<3> const &) const ) &AbstractBoundaryCondition3::GetValue, 
            " " , py::arg("rX") )
    ;
}
