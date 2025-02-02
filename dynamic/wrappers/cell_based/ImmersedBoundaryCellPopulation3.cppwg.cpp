#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "AbstractImmersedBoundaryDivisionRule.hpp"
#include "CellAgesWriter.hpp"
#include "CellAncestorWriter.hpp"
#include "CellAppliedForceWriter.hpp"
#include "CellCycleModelProteinConcentrationsWriter.hpp"
#include "CellDataItemWriter.hpp"
#include "CellDeltaNotchWriter.hpp"
#include "CellDivisionLocationsWriter.hpp"
#include "CellIdWriter.hpp"
#include "CellLabelWriter.hpp"
#include "CellLocationIndexWriter.hpp"
#include "CellMutationStatesCountWriter.hpp"
#include "CellMutationStatesWriter.hpp"
#include "CellPopulationAdjacencyMatrixWriter.hpp"
#include "CellPopulationAreaWriter.hpp"
#include "CellPopulationElementWriter.hpp"
#include "CellProliferativePhasesCountWriter.hpp"
#include "CellProliferativePhasesWriter.hpp"
#include "CellProliferativeTypesCountWriter.hpp"
#include "CellProliferativeTypesWriter.hpp"
#include "CellRadiusWriter.hpp"
#include "CellRemovalLocationsWriter.hpp"
#include "CellRosetteRankWriter.hpp"
#include "CellVolumesWriter.hpp"
#include "HeterotypicBoundaryLengthWriter.hpp"
#include "LegacyCellProliferativeTypesWriter.hpp"
#include "NodeLocationWriter.hpp"
#include "NodeVelocityWriter.hpp"
#include "PottsMeshWriter.hpp"
#include "RadialCellDataDistributionWriter.hpp"
#include "VertexIntersectionSwapLocationsWriter.hpp"
#include "VertexT1SwapLocationsWriter.hpp"
#include "VertexT2SwapLocationsWriter.hpp"
#include "VertexT3SwapLocationsWriter.hpp"
#include "VoronoiDataWriter.hpp"
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "ImmersedBoundaryCellPopulation.hpp"

#include "ImmersedBoundaryCellPopulation3.cppwg.hpp"

namespace py = pybind11;
typedef ImmersedBoundaryCellPopulation<3 > ImmersedBoundaryCellPopulation3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef unsigned int unsignedint;
typedef ::boost::numeric::ublas::c_vector<double, 3> _boost_numeric_ublas_c_vector_lt_double_3_gt_;
typedef ::Node<3> * _Node_lt_3_gt_Ptr;
typedef ::std::set<unsigned int> _std_set_lt_unsignedint_gt_;
typedef unsigned int unsignedint;
typedef ::CellPtr _CellPtr;
typedef unsigned int unsignedint;
typedef ::std::set<unsigned int> _std_set_lt_unsignedint_gt_;
typedef ::TetrahedralMesh<3, 3> * _TetrahedralMesh_lt_3_3_gt_Ptr;

class ImmersedBoundaryCellPopulation3_Overloads : public ImmersedBoundaryCellPopulation3{
    public:
    using ImmersedBoundaryCellPopulation3::ImmersedBoundaryCellPopulation;
    double GetDampingConstant(unsigned int nodeIndex) override {
        PYBIND11_OVERRIDE(
            double,
            ImmersedBoundaryCellPopulation3,
            GetDampingConstant,
            nodeIndex);
    }
    unsigned int GetNumNodes() override {
        PYBIND11_OVERRIDE(
            unsignedint,
            ImmersedBoundaryCellPopulation3,
            GetNumNodes,
            );
    }
    ::boost::numeric::ublas::c_vector<double, 3> GetLocationOfCellCentre(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            _boost_numeric_ublas_c_vector_lt_double_3_gt_,
            ImmersedBoundaryCellPopulation3,
            GetLocationOfCellCentre,
            pCell);
    }
    ::Node<3> * GetNode(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _Node_lt_3_gt_Ptr,
            ImmersedBoundaryCellPopulation3,
            GetNode,
            index);
    }
    ::std::set<unsigned int> GetNeighbouringLocationIndices(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            _std_set_lt_unsignedint_gt_,
            ImmersedBoundaryCellPopulation3,
            GetNeighbouringLocationIndices,
            pCell);
    }
    unsigned int AddNode(::Node<3> * pNewNode) override {
        PYBIND11_OVERRIDE(
            unsignedint,
            ImmersedBoundaryCellPopulation3,
            AddNode,
            pNewNode);
    }
    void UpdateNodeLocations(double dt) override {
        PYBIND11_OVERRIDE(
            void,
            ImmersedBoundaryCellPopulation3,
            UpdateNodeLocations,
            dt);
    }
    void SetNode(unsigned int index, ::ChastePoint<3> & rNewLocation) override {
        PYBIND11_OVERRIDE(
            void,
            ImmersedBoundaryCellPopulation3,
            SetNode,
            index, 
rNewLocation);
    }
    ::CellPtr AddCell(::CellPtr pNewCell, ::CellPtr pParentCell) override {
        PYBIND11_OVERRIDE(
            _CellPtr,
            ImmersedBoundaryCellPopulation3,
            AddCell,
            pNewCell, 
pParentCell);
    }
    unsigned int RemoveDeadCells() override {
        PYBIND11_OVERRIDE(
            unsignedint,
            ImmersedBoundaryCellPopulation3,
            RemoveDeadCells,
            );
    }
    bool IsCellAssociatedWithADeletedLocation(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            bool,
            ImmersedBoundaryCellPopulation3,
            IsCellAssociatedWithADeletedLocation,
            pCell);
    }
    void Update(bool hasHadBirthsOrDeaths) override {
        PYBIND11_OVERRIDE(
            void,
            ImmersedBoundaryCellPopulation3,
            Update,
            hasHadBirthsOrDeaths);
    }
    void OpenWritersFiles(::OutputFileHandler & rOutputFileHandler) override {
        PYBIND11_OVERRIDE(
            void,
            ImmersedBoundaryCellPopulation3,
            OpenWritersFiles,
            rOutputFileHandler);
    }
    void AcceptPopulationWriter(::boost::shared_ptr<AbstractCellPopulationWriter<3, 3>> pPopulationWriter) override {
        PYBIND11_OVERRIDE(
            void,
            ImmersedBoundaryCellPopulation3,
            AcceptPopulationWriter,
            pPopulationWriter);
    }
    void AcceptPopulationEventWriter(::boost::shared_ptr<AbstractCellPopulationEventWriter<3, 3>> pPopulationEventWriter) override {
        PYBIND11_OVERRIDE(
            void,
            ImmersedBoundaryCellPopulation3,
            AcceptPopulationEventWriter,
            pPopulationEventWriter);
    }
    void AcceptPopulationCountWriter(::boost::shared_ptr<AbstractCellPopulationCountWriter<3, 3>> pPopulationCountWriter) override {
        PYBIND11_OVERRIDE(
            void,
            ImmersedBoundaryCellPopulation3,
            AcceptPopulationCountWriter,
            pPopulationCountWriter);
    }
    void AcceptCellWriter(::boost::shared_ptr<AbstractCellWriter<3, 3>> pCellWriter, ::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            void,
            ImmersedBoundaryCellPopulation3,
            AcceptCellWriter,
            pCellWriter, 
pCell);
    }
    double GetVolumeOfCell(::CellPtr pCell) override {
        PYBIND11_OVERRIDE(
            double,
            ImmersedBoundaryCellPopulation3,
            GetVolumeOfCell,
            pCell);
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERRIDE(
            void,
            ImmersedBoundaryCellPopulation3,
            OutputCellPopulationParameters,
            rParamsFile);
    }
    double GetWidth(unsigned int const & rDimension) override {
        PYBIND11_OVERRIDE(
            double,
            ImmersedBoundaryCellPopulation3,
            GetWidth,
            rDimension);
    }
    ::std::set<unsigned int> GetNeighbouringNodeIndices(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _std_set_lt_unsignedint_gt_,
            ImmersedBoundaryCellPopulation3,
            GetNeighbouringNodeIndices,
            index);
    }
    ::TetrahedralMesh<3, 3> * GetTetrahedralMeshForPdeModifier() override {
        PYBIND11_OVERRIDE(
            _TetrahedralMesh_lt_3_3_gt_Ptr,
            ImmersedBoundaryCellPopulation3,
            GetTetrahedralMeshForPdeModifier,
            );
    }
    bool IsPdeNodeAssociatedWithNonApoptoticCell(unsigned int pdeNodeIndex) override {
        PYBIND11_OVERRIDE(
            bool,
            ImmersedBoundaryCellPopulation3,
            IsPdeNodeAssociatedWithNonApoptoticCell,
            pdeNodeIndex);
    }
    double GetCellDataItemAtPdeNode(unsigned int pdeNodeIndex, ::std::string & rVariableName, bool dirichletBoundaryConditionApplies, double dirichletBoundaryValue) override {
        PYBIND11_OVERRIDE(
            double,
            ImmersedBoundaryCellPopulation3,
            GetCellDataItemAtPdeNode,
            pdeNodeIndex, 
rVariableName, 
dirichletBoundaryConditionApplies, 
dirichletBoundaryValue);
    }
    void CheckForStepSizeException(unsigned int nodeIndex, ::boost::numeric::ublas::c_vector<double, 3> & rDisplacement, double dt) override {
        PYBIND11_OVERRIDE(
            void,
            ImmersedBoundaryCellPopulation3,
            CheckForStepSizeException,
            nodeIndex, 
rDisplacement, 
dt);
    }
    double GetDefaultTimeStep() override {
        PYBIND11_OVERRIDE(
            double,
            ImmersedBoundaryCellPopulation3,
            GetDefaultTimeStep,
            );
    }

};
void register_ImmersedBoundaryCellPopulation3_class(py::module &m){
py::class_<ImmersedBoundaryCellPopulation3 , ImmersedBoundaryCellPopulation3_Overloads , boost::shared_ptr<ImmersedBoundaryCellPopulation3 >  , AbstractOffLatticeCellPopulation<3>  >(m, "ImmersedBoundaryCellPopulation3")
        .def(py::init<::ImmersedBoundaryMesh<3, 3> &, ::std::vector<boost::shared_ptr<Cell>> &, bool, bool, ::std::vector<unsigned int> const >(), py::arg("rMesh"), py::arg("rCells"), py::arg("deleteMesh") = false, py::arg("validate") = true, py::arg("locationIndices") = std::vector<unsigned int>())
        .def(py::init<::ImmersedBoundaryMesh<3, 3> & >(), py::arg("rMesh"))
        .def(
            "GetDampingConstant", 
            (double(ImmersedBoundaryCellPopulation3::*)(unsigned int)) &ImmersedBoundaryCellPopulation3::GetDampingConstant, 
            " " , py::arg("nodeIndex") )
        .def(
            "GetElement", 
            (::ImmersedBoundaryElement<3, 3> *(ImmersedBoundaryCellPopulation3::*)(unsigned int)) &ImmersedBoundaryCellPopulation3::GetElement, 
            " " , py::arg("elementIndex") , py::return_value_policy::reference)
        .def(
            "GetLamina", 
            (::ImmersedBoundaryElement<2, 3> *(ImmersedBoundaryCellPopulation3::*)(unsigned int)) &ImmersedBoundaryCellPopulation3::GetLamina, 
            " " , py::arg("laminaIndex") , py::return_value_policy::reference)
        .def(
            "GetNumElements", 
            (unsigned int(ImmersedBoundaryCellPopulation3::*)()) &ImmersedBoundaryCellPopulation3::GetNumElements, 
            " "  )
        .def(
            "GetNumLaminas", 
            (unsigned int(ImmersedBoundaryCellPopulation3::*)()) &ImmersedBoundaryCellPopulation3::GetNumLaminas, 
            " "  )
        .def(
            "GetNumNodes", 
            (unsigned int(ImmersedBoundaryCellPopulation3::*)()) &ImmersedBoundaryCellPopulation3::GetNumNodes, 
            " "  )
        .def(
            "SetInteractionDistance", 
            (void(ImmersedBoundaryCellPopulation3::*)(double)) &ImmersedBoundaryCellPopulation3::SetInteractionDistance, 
            " " , py::arg("newDistance") )
        .def(
            "GetInteractionDistance", 
            (double(ImmersedBoundaryCellPopulation3::*)() const ) &ImmersedBoundaryCellPopulation3::GetInteractionDistance, 
            " "  )
        .def(
            "SetReMeshFrequency", 
            (void(ImmersedBoundaryCellPopulation3::*)(unsigned int)) &ImmersedBoundaryCellPopulation3::SetReMeshFrequency, 
            " " , py::arg("newFrequency") )
        .def(
            "GetReMeshFrequency", 
            (unsigned int(ImmersedBoundaryCellPopulation3::*)() const ) &ImmersedBoundaryCellPopulation3::GetReMeshFrequency, 
            " "  )
        .def(
            "SetThrowsStepSizeException", 
            (void(ImmersedBoundaryCellPopulation3::*)(bool)) &ImmersedBoundaryCellPopulation3::SetThrowsStepSizeException, 
            " " , py::arg("throws") )
        .def(
            "ThrowsStepSizeException", 
            (bool(ImmersedBoundaryCellPopulation3::*)() const ) &ImmersedBoundaryCellPopulation3::ThrowsStepSizeException, 
            " "  )
        .def(
            "GetIntrinsicSpacing", 
            (double(ImmersedBoundaryCellPopulation3::*)() const ) &ImmersedBoundaryCellPopulation3::GetIntrinsicSpacing, 
            " "  )
        .def(
            "SetCellRearrangementThreshold", 
            (void(ImmersedBoundaryCellPopulation3::*)(double)) &ImmersedBoundaryCellPopulation3::SetCellRearrangementThreshold, 
            " " , py::arg("newThreshold") )
        .def(
            "GetCellRearrangementThreshold", 
            (double(ImmersedBoundaryCellPopulation3::*)() const ) &ImmersedBoundaryCellPopulation3::GetCellRearrangementThreshold, 
            " "  )
        .def(
            "GetLocationOfCellCentre", 
            (::boost::numeric::ublas::c_vector<double, 3>(ImmersedBoundaryCellPopulation3::*)(::CellPtr)) &ImmersedBoundaryCellPopulation3::GetLocationOfCellCentre, 
            " " , py::arg("pCell") )
        .def(
            "GetNode", 
            (::Node<3> *(ImmersedBoundaryCellPopulation3::*)(unsigned int)) &ImmersedBoundaryCellPopulation3::GetNode, 
            " " , py::arg("index") , py::return_value_policy::reference)
        .def(
            "GetNeighbouringLocationIndices", 
            (::std::set<unsigned int>(ImmersedBoundaryCellPopulation3::*)(::CellPtr)) &ImmersedBoundaryCellPopulation3::GetNeighbouringLocationIndices, 
            " " , py::arg("pCell") )
        .def(
            "AddNode", 
            (unsigned int(ImmersedBoundaryCellPopulation3::*)(::Node<3> *)) &ImmersedBoundaryCellPopulation3::AddNode, 
            " " , py::arg("pNewNode") )
        .def(
            "UpdateNodeLocations", 
            (void(ImmersedBoundaryCellPopulation3::*)(double)) &ImmersedBoundaryCellPopulation3::UpdateNodeLocations, 
            " " , py::arg("dt") )
        .def(
            "SetNode", 
            (void(ImmersedBoundaryCellPopulation3::*)(unsigned int, ::ChastePoint<3> &)) &ImmersedBoundaryCellPopulation3::SetNode, 
            " " , py::arg("index"), py::arg("rNewLocation") )
        .def(
            "GetElementCorrespondingToCell", 
            (::ImmersedBoundaryElement<3, 3> *(ImmersedBoundaryCellPopulation3::*)(::CellPtr)) &ImmersedBoundaryCellPopulation3::GetElementCorrespondingToCell, 
            " " , py::arg("pCell") , py::return_value_policy::reference)
        .def(
            "AddCell", 
            (::CellPtr(ImmersedBoundaryCellPopulation3::*)(::CellPtr, ::CellPtr)) &ImmersedBoundaryCellPopulation3::AddCell, 
            " " , py::arg("pNewCell"), py::arg("pParentCell") = ::CellPtr( ) )
        .def(
            "RemoveDeadCells", 
            (unsigned int(ImmersedBoundaryCellPopulation3::*)()) &ImmersedBoundaryCellPopulation3::RemoveDeadCells, 
            " "  )
        .def(
            "IsCellAssociatedWithADeletedLocation", 
            (bool(ImmersedBoundaryCellPopulation3::*)(::CellPtr)) &ImmersedBoundaryCellPopulation3::IsCellAssociatedWithADeletedLocation, 
            " " , py::arg("pCell") )
        .def(
            "Update", 
            (void(ImmersedBoundaryCellPopulation3::*)(bool)) &ImmersedBoundaryCellPopulation3::Update, 
            " " , py::arg("hasHadBirthsOrDeaths") = true )
        .def(
            "OpenWritersFiles", 
            (void(ImmersedBoundaryCellPopulation3::*)(::OutputFileHandler &)) &ImmersedBoundaryCellPopulation3::OpenWritersFiles, 
            " " , py::arg("rOutputFileHandler") )
        .def(
            "AcceptPopulationWriter", 
            (void(ImmersedBoundaryCellPopulation3::*)(::boost::shared_ptr<AbstractCellPopulationWriter<3, 3>>)) &ImmersedBoundaryCellPopulation3::AcceptPopulationWriter, 
            " " , py::arg("pPopulationWriter") )
        .def(
            "AcceptPopulationEventWriter", 
            (void(ImmersedBoundaryCellPopulation3::*)(::boost::shared_ptr<AbstractCellPopulationEventWriter<3, 3>>)) &ImmersedBoundaryCellPopulation3::AcceptPopulationEventWriter, 
            " " , py::arg("pPopulationEventWriter") )
        .def(
            "AcceptPopulationCountWriter", 
            (void(ImmersedBoundaryCellPopulation3::*)(::boost::shared_ptr<AbstractCellPopulationCountWriter<3, 3>>)) &ImmersedBoundaryCellPopulation3::AcceptPopulationCountWriter, 
            " " , py::arg("pPopulationCountWriter") )
        .def(
            "AcceptCellWriter", 
            (void(ImmersedBoundaryCellPopulation3::*)(::boost::shared_ptr<AbstractCellWriter<3, 3>>, ::CellPtr)) &ImmersedBoundaryCellPopulation3::AcceptCellWriter, 
            " " , py::arg("pCellWriter"), py::arg("pCell") )
        .def(
            "GetVolumeOfCell", 
            (double(ImmersedBoundaryCellPopulation3::*)(::CellPtr)) &ImmersedBoundaryCellPopulation3::GetVolumeOfCell, 
            " " , py::arg("pCell") )
        .def(
            "OutputCellPopulationParameters", 
            (void(ImmersedBoundaryCellPopulation3::*)(::out_stream &)) &ImmersedBoundaryCellPopulation3::OutputCellPopulationParameters, 
            " " , py::arg("rParamsFile") )
        .def(
            "GetWidth", 
            (double(ImmersedBoundaryCellPopulation3::*)(unsigned int const &)) &ImmersedBoundaryCellPopulation3::GetWidth, 
            " " , py::arg("rDimension") )
        .def(
            "GetNeighbouringNodeIndices", 
            (::std::set<unsigned int>(ImmersedBoundaryCellPopulation3::*)(unsigned int)) &ImmersedBoundaryCellPopulation3::GetNeighbouringNodeIndices, 
            " " , py::arg("index") )
        .def(
            "IsPdeNodeAssociatedWithNonApoptoticCell", 
            (bool(ImmersedBoundaryCellPopulation3::*)(unsigned int)) &ImmersedBoundaryCellPopulation3::IsPdeNodeAssociatedWithNonApoptoticCell, 
            " " , py::arg("pdeNodeIndex") )
        .def(
            "GetCellDataItemAtPdeNode", 
            (double(ImmersedBoundaryCellPopulation3::*)(unsigned int, ::std::string &, bool, double)) &ImmersedBoundaryCellPopulation3::GetCellDataItemAtPdeNode, 
            " " , py::arg("pdeNodeIndex"), py::arg("rVariableName"), py::arg("dirichletBoundaryConditionApplies") = false, py::arg("dirichletBoundaryValue") = 0. )
        .def(
            "GetImmersedBoundaryDivisionRule", 
            (::boost::shared_ptr<AbstractImmersedBoundaryDivisionRule<3>>(ImmersedBoundaryCellPopulation3::*)()) &ImmersedBoundaryCellPopulation3::GetImmersedBoundaryDivisionRule, 
            " "  )
        .def(
            "SetImmersedBoundaryDivisionRule", 
            (void(ImmersedBoundaryCellPopulation3::*)(::boost::shared_ptr<AbstractImmersedBoundaryDivisionRule<3>>)) &ImmersedBoundaryCellPopulation3::SetImmersedBoundaryDivisionRule, 
            " " , py::arg("pImmersedBoundaryDivisionRule") )
        .def(
            "DoesPopulationHaveActiveSources", 
            (bool(ImmersedBoundaryCellPopulation3::*)() const ) &ImmersedBoundaryCellPopulation3::DoesPopulationHaveActiveSources, 
            " "  )
        .def(
            "IsCellOnBoundary", 
            (bool(ImmersedBoundaryCellPopulation3::*)(::CellPtr)) &ImmersedBoundaryCellPopulation3::IsCellOnBoundary, 
            " " , py::arg("pCell") )
        .def(
            "SetIfPopulationHasActiveSources", 
            (void(ImmersedBoundaryCellPopulation3::*)(bool)) &ImmersedBoundaryCellPopulation3::SetIfPopulationHasActiveSources, 
            " " , py::arg("hasActiveSources") )
        .def(
            "SetOutputNodeRegionToVtk", 
            (void(ImmersedBoundaryCellPopulation3::*)(bool)) &ImmersedBoundaryCellPopulation3::SetOutputNodeRegionToVtk, 
            " " , py::arg("outputNodeRegionsToVtk") )
        .def(
            "CheckForStepSizeException", 
            (void(ImmersedBoundaryCellPopulation3::*)(unsigned int, ::boost::numeric::ublas::c_vector<double, 3> &, double)) &ImmersedBoundaryCellPopulation3::CheckForStepSizeException, 
            " " , py::arg("nodeIndex"), py::arg("rDisplacement"), py::arg("dt") )
        .def(
            "GetDefaultTimeStep", 
            (double(ImmersedBoundaryCellPopulation3::*)()) &ImmersedBoundaryCellPopulation3::GetDefaultTimeStep, 
            " "  )
        .def("AddPopulationWriterVoronoiDataWriter", &ImmersedBoundaryCellPopulation3::AddPopulationWriter<VoronoiDataWriter>)
        .def("AddCellWriterCellLabelWriter", &ImmersedBoundaryCellPopulation3::AddCellWriter<CellLabelWriter>)
    ;
}
