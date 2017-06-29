#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "wrapper_header_collection.hpp"
#include "AbstractVertexBasedDivisionRule3.pypp.hpp"

namespace py = pybind11;
typedef AbstractVertexBasedDivisionRule<3 > AbstractVertexBasedDivisionRule3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef ::boost::numeric::ublas::c_vector<double, 3> _boost_numeric_ublas_c_vectordouble_3;

class AbstractVertexBasedDivisionRule3_Overloads : public AbstractVertexBasedDivisionRule3{
    public:
    using AbstractVertexBasedDivisionRule3::AbstractVertexBasedDivisionRule;
    ::boost::numeric::ublas::c_vector<double, 3> CalculateCellDivisionVector(::CellPtr pParentCell, ::VertexBasedCellPopulation<3> & rCellPopulation) override {
        PYBIND11_OVERLOAD_PURE(
            _boost_numeric_ublas_c_vectordouble_3,
            AbstractVertexBasedDivisionRule3,
            CalculateCellDivisionVector,
            pParentCell, 
rCellPopulation);
    }
    void OutputCellVertexBasedDivisionRuleParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERLOAD(
            void,
            AbstractVertexBasedDivisionRule3,
            OutputCellVertexBasedDivisionRuleParameters,
            rParamsFile);
    }

};
void register_AbstractVertexBasedDivisionRule3_class(py::module &m){
py::class_<AbstractVertexBasedDivisionRule3 , AbstractVertexBasedDivisionRule3_Overloads , boost::shared_ptr<AbstractVertexBasedDivisionRule3 >  , Identifiable  >(m, "AbstractVertexBasedDivisionRule3")
        .def(
            "CalculateCellDivisionVector", 
            (::boost::numeric::ublas::c_vector<double, 3>(AbstractVertexBasedDivisionRule3::*)(::CellPtr, ::VertexBasedCellPopulation<3> &)) &AbstractVertexBasedDivisionRule3::CalculateCellDivisionVector, 
            " " , py::arg("pParentCell"), py::arg("rCellPopulation"))
        .def(
            "OutputCellVertexBasedDivisionRuleInfo", 
            (void(AbstractVertexBasedDivisionRule3::*)(::out_stream &)) &AbstractVertexBasedDivisionRule3::OutputCellVertexBasedDivisionRuleInfo, 
            " " , py::arg("rParamsFile"))
    ;
}
