#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "wrapper_header_collection.hpp"
#include "CellwiseSourceParabolicPde3.pypp.hpp"

namespace py = pybind11;
typedef CellwiseSourceParabolicPde<3 > CellwiseSourceParabolicPde3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::boost::numeric::ublas::c_matrix<double, 3, 3> _boost_numeric_ublas_c_matrixdouble_3_3;

class CellwiseSourceParabolicPde3_Overloads : public CellwiseSourceParabolicPde3{
    public:
    using CellwiseSourceParabolicPde3::CellwiseSourceParabolicPde;
    double ComputeDuDtCoefficientFunction(::ChastePoint<3> const & rX) override {
        PYBIND11_OVERLOAD(
            double,
            CellwiseSourceParabolicPde3,
            ComputeDuDtCoefficientFunction,
            rX);
    }
    double ComputeSourceTerm(::ChastePoint<3> const & rX, double u, ::Element<3, 3> * pElement) override {
        PYBIND11_OVERLOAD(
            double,
            CellwiseSourceParabolicPde3,
            ComputeSourceTerm,
            rX, 
u, 
pElement);
    }
    double ComputeSourceTermAtNode(::Node<3> const & rNode, double u) override {
        PYBIND11_OVERLOAD(
            double,
            CellwiseSourceParabolicPde3,
            ComputeSourceTermAtNode,
            rNode, 
u);
    }
    ::boost::numeric::ublas::c_matrix<double, 3, 3> ComputeDiffusionTerm(::ChastePoint<3> const & rX, ::Element<3, 3> * pElement) override {
        PYBIND11_OVERLOAD(
            _boost_numeric_ublas_c_matrixdouble_3_3,
            CellwiseSourceParabolicPde3,
            ComputeDiffusionTerm,
            rX, 
pElement);
    }

};
void register_CellwiseSourceParabolicPde3_class(py::module &m){
py::class_<CellwiseSourceParabolicPde3 , CellwiseSourceParabolicPde3_Overloads , boost::shared_ptr<CellwiseSourceParabolicPde3 >   >(m, "CellwiseSourceParabolicPde3")
        .def(py::init<::AbstractCellPopulation<3, 3> &, double, double, double >())
        .def(
            "rGetCellPopulation", 
            (::AbstractCellPopulation<3, 3> const &(CellwiseSourceParabolicPde3::*)() const ) &CellwiseSourceParabolicPde3::rGetCellPopulation, 
            " " )
        .def(
            "ComputeDuDtCoefficientFunction", 
            (double(CellwiseSourceParabolicPde3::*)(::ChastePoint<3> const &)) &CellwiseSourceParabolicPde3::ComputeDuDtCoefficientFunction, 
            " " , py::arg("rX"))
        .def(
            "ComputeSourceTerm", 
            (double(CellwiseSourceParabolicPde3::*)(::ChastePoint<3> const &, double, ::Element<3, 3> *)) &CellwiseSourceParabolicPde3::ComputeSourceTerm, 
            " " , py::arg("rX"), py::arg("u"), py::arg("pElement") = __null)
        .def(
            "ComputeSourceTermAtNode", 
            (double(CellwiseSourceParabolicPde3::*)(::Node<3> const &, double)) &CellwiseSourceParabolicPde3::ComputeSourceTermAtNode, 
            " " , py::arg("rNode"), py::arg("u"))
        .def(
            "ComputeDiffusionTerm", 
            (::boost::numeric::ublas::c_matrix<double, 3, 3>(CellwiseSourceParabolicPde3::*)(::ChastePoint<3> const &, ::Element<3, 3> *)) &CellwiseSourceParabolicPde3::ComputeDiffusionTerm, 
            " " , py::arg("rX"), py::arg("pElement") = __null)
    ;
}
