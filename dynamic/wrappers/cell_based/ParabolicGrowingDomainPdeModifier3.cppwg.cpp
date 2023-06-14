#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <petsc/private/vecimpl.h>
#include <petsc/private/matimpl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "ParabolicGrowingDomainPdeModifier.hpp"

#include "ParabolicGrowingDomainPdeModifier3.cppwg.hpp"

namespace py = pybind11;
typedef ParabolicGrowingDomainPdeModifier<3 > ParabolicGrowingDomainPdeModifier3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
PYBIND11_MAKE_OPAQUE(Vec);
PYBIND11_MAKE_OPAQUE(Mat);
typedef ::std::shared_ptr<BoundaryConditionsContainer<3, 3, 1>> _std_shared_ptr_lt_BoundaryConditionsContainer_lt_3_3_1_gt__gt_;

class ParabolicGrowingDomainPdeModifier3_Overloads : public ParabolicGrowingDomainPdeModifier3{
    public:
    using ParabolicGrowingDomainPdeModifier3::ParabolicGrowingDomainPdeModifier;
    void UpdateAtEndOfTimeStep(::AbstractCellPopulation<3> & rCellPopulation) override {
        PYBIND11_OVERRIDE(
            void,
            ParabolicGrowingDomainPdeModifier3,
            UpdateAtEndOfTimeStep,
            rCellPopulation);
    }
    void SetupSolve(::AbstractCellPopulation<3> & rCellPopulation, ::std::string outputDirectory) override {
        PYBIND11_OVERRIDE(
            void,
            ParabolicGrowingDomainPdeModifier3,
            SetupSolve,
            rCellPopulation, 
outputDirectory);
    }
    ::std::shared_ptr<BoundaryConditionsContainer<3, 3, 1>> ConstructBoundaryConditionsContainer() override {
        PYBIND11_OVERRIDE(
            _std_shared_ptr_lt_BoundaryConditionsContainer_lt_3_3_1_gt__gt_,
            ParabolicGrowingDomainPdeModifier3,
            ConstructBoundaryConditionsContainer,
            );
    }
    void OutputSimulationModifierParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            ParabolicGrowingDomainPdeModifier3,
            OutputSimulationModifierParameters,
            rParamsFile);
    }

};
void register_ParabolicGrowingDomainPdeModifier3_class(py::module &m){
py::class_<ParabolicGrowingDomainPdeModifier3 , ParabolicGrowingDomainPdeModifier3_Overloads , boost::shared_ptr<ParabolicGrowingDomainPdeModifier3 >  , AbstractGrowingDomainPdeModifier<3>  >(m, "ParabolicGrowingDomainPdeModifier3")
        .def(py::init<::boost::shared_ptr<AbstractLinearPde<3>>, ::boost::shared_ptr<AbstractBoundaryCondition<3>>, bool, ::Vec >(), py::arg("pPde") = boost::shared_ptr<AbstractLinearPde<DIM, DIM>>(), py::arg("pBoundaryCondition") = boost::shared_ptr<AbstractBoundaryCondition<DIM>>(), py::arg("isNeumannBoundaryCondition") = true, py::arg("solution") = nullptr)
        .def(
            "UpdateAtEndOfTimeStep", 
            (void(ParabolicGrowingDomainPdeModifier3::*)(::AbstractCellPopulation<3> &)) &ParabolicGrowingDomainPdeModifier3::UpdateAtEndOfTimeStep, 
            " " , py::arg("rCellPopulation") )
        .def(
            "SetupSolve", 
            (void(ParabolicGrowingDomainPdeModifier3::*)(::AbstractCellPopulation<3> &, ::std::string)) &ParabolicGrowingDomainPdeModifier3::SetupSolve, 
            " " , py::arg("rCellPopulation"), py::arg("outputDirectory") )
        .def(
            "UpdateSolutionVector", 
            (void(ParabolicGrowingDomainPdeModifier3::*)(::AbstractCellPopulation<3> &)) &ParabolicGrowingDomainPdeModifier3::UpdateSolutionVector, 
            " " , py::arg("rCellPopulation") )
        .def(
            "OutputSimulationModifierParameters", 
            (void(ParabolicGrowingDomainPdeModifier3::*)(::out_stream &)) &ParabolicGrowingDomainPdeModifier3::OutputSimulationModifierParameters, 
            " " , py::arg("rParamsFile") )
    ;
}
