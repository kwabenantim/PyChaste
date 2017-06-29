#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "wrapper_header_collection.hpp"
#include "AbstractBoundaryCondition2.pypp.hpp"

namespace py = pybind11;
typedef AbstractBoundaryCondition<2 > AbstractBoundaryCondition2;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class AbstractBoundaryCondition2_Overloads : public AbstractBoundaryCondition2{
    public:
    using AbstractBoundaryCondition2::AbstractBoundaryCondition;
    double GetValue(::ChastePoint<2> const & rX) const  override {
        PYBIND11_OVERLOAD_PURE(
            double,
            AbstractBoundaryCondition2,
            GetValue,
            rX);
    }

};
void register_AbstractBoundaryCondition2_class(py::module &m){
py::class_<AbstractBoundaryCondition2 , AbstractBoundaryCondition2_Overloads , boost::shared_ptr<AbstractBoundaryCondition2 >   >(m, "AbstractBoundaryCondition2")
        .def(
            "GetValue", 
            (double(AbstractBoundaryCondition2::*)(::ChastePoint<2> const &) const ) &AbstractBoundaryCondition2::GetValue, 
            " " , py::arg("rX"))
    ;
}
