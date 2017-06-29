#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "wrapper_header_collection.hpp"
#include "VertexBasedCellPopulation3.pypp.hpp"

namespace py = pybind11;
typedef VertexBasedCellPopulation<3 > VertexBasedCellPopulation3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef unsigned int unsignedint;
typedef ::boost::numeric::ublas::c_vector<double, 3> _boost_numeric_ublas_c_vectordouble_3;
typedef ::Node<3> * _Node3Ptr;
typedef ::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> > _std_setunsignedint_std_lessunsignedint_std_allocatorunsignedint;
typedef unsigned int unsignedint;
typedef ::CellPtr _CellPtr;
typedef unsigned int unsignedint;
typedef ::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> > _std_setunsignedint_std_lessunsignedint_std_allocatorunsignedint;
typedef ::TetrahedralMesh<3, 3> * _TetrahedralMesh3_3Ptr;

class VertexBasedCellPopulation3_Overloads : public VertexBasedCellPopulation3{
    public:
    using VertexBasedCellPopulation3::VertexBasedCellPopulation;
    double GetDampingConstant(unsigned int nodeIndex) override {
        PYBIND11_OVERLOAD(
            double,
            VertexBasedCellPopulation3,
            GetDampingConstant,
            nodeIndex);
    }
    unsigned int GetNumNodes() override {
        PYBIND11_OVERLOAD(
            unsignedint,
            VertexBasedCellPopulation3,
            GetNumNodes,
            );
    }
    ::boost::numeric::ublas::c_vector<double, 3> GetLocationOfCellCentre(::CellPtr pCell) override {
        PYBIND11_OVERLOAD(
            _boost_numeric_ublas_c_vectordouble_3,
            VertexBasedCellPopulation3,
            GetLocationOfCellCentre,
            pCell);
    }
    ::Node<3> * GetNode(unsigned int index) override {
        PYBIND11_OVERLOAD(
            _Node3Ptr,
            VertexBasedCellPopulation3,
            GetNode,
            index);
    }
    ::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> > GetNeighbouringLocationIndices(::CellPtr pCell) override {
        PYBIND11_OVERLOAD(
            _std_setunsignedint_std_lessunsignedint_std_allocatorunsignedint,
            VertexBasedCellPopulation3,
            GetNeighbouringLocationIndices,
            pCell);
    }
    unsigned int AddNode(::Node<3> * pNewNode) override {
        PYBIND11_OVERLOAD(
            unsignedint,
            VertexBasedCellPopulation3,
            AddNode,
            pNewNode);
    }
    void CheckForStepSizeException(unsigned int nodeIndex, ::boost::numeric::ublas::c_vector<double, 3> & rDisplacement, double dt) override {
        PYBIND11_OVERLOAD(
            void,
            VertexBasedCellPopulation3,
            CheckForStepSizeException,
            nodeIndex, 
rDisplacement, 
dt);
    }
    void SetNode(unsigned int index, ::ChastePoint<3> & rNewLocation) override {
        PYBIND11_OVERLOAD(
            void,
            VertexBasedCellPopulation3,
            SetNode,
            index, 
rNewLocation);
    }
    ::CellPtr AddCell(::CellPtr pNewCell, ::CellPtr pParentCell) override {
        PYBIND11_OVERLOAD(
            _CellPtr,
            VertexBasedCellPopulation3,
            AddCell,
            pNewCell, 
pParentCell);
    }
    unsigned int RemoveDeadCells() override {
        PYBIND11_OVERLOAD(
            unsignedint,
            VertexBasedCellPopulation3,
            RemoveDeadCells,
            );
    }
    bool IsCellAssociatedWithADeletedLocation(::CellPtr pCell) override {
        PYBIND11_OVERLOAD(
            bool,
            VertexBasedCellPopulation3,
            IsCellAssociatedWithADeletedLocation,
            pCell);
    }
    void Update(bool hasHadBirthsOrDeaths) override {
        PYBIND11_OVERLOAD(
            void,
            VertexBasedCellPopulation3,
            Update,
            hasHadBirthsOrDeaths);
    }
    void OpenWritersFiles(::OutputFileHandler & rOutputFileHandler) override {
        PYBIND11_OVERLOAD(
            void,
            VertexBasedCellPopulation3,
            OpenWritersFiles,
            rOutputFileHandler);
    }
    void AcceptPopulationWriter(::boost::shared_ptr<AbstractCellPopulationWriter<3, 3> > pPopulationWriter) override {
        PYBIND11_OVERLOAD(
            void,
            VertexBasedCellPopulation3,
            AcceptPopulationWriter,
            pPopulationWriter);
    }
    void AcceptPopulationCountWriter(::boost::shared_ptr<AbstractCellPopulationCountWriter<3, 3> > pPopulationCountWriter) override {
        PYBIND11_OVERLOAD(
            void,
            VertexBasedCellPopulation3,
            AcceptPopulationCountWriter,
            pPopulationCountWriter);
    }
    void AcceptCellWriter(::boost::shared_ptr<AbstractCellWriter<3, 3> > pCellWriter, ::CellPtr pCell) override {
        PYBIND11_OVERLOAD(
            void,
            VertexBasedCellPopulation3,
            AcceptCellWriter,
            pCellWriter, 
pCell);
    }
    double GetVolumeOfCell(::CellPtr pCell) override {
        PYBIND11_OVERLOAD(
            double,
            VertexBasedCellPopulation3,
            GetVolumeOfCell,
            pCell);
    }
    void OutputCellPopulationParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERLOAD(
            void,
            VertexBasedCellPopulation3,
            OutputCellPopulationParameters,
            rParamsFile);
    }
    double GetWidth(unsigned int const & rDimension) override {
        PYBIND11_OVERLOAD(
            double,
            VertexBasedCellPopulation3,
            GetWidth,
            rDimension);
    }
    ::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> > GetNeighbouringNodeIndices(unsigned int index) override {
        PYBIND11_OVERLOAD(
            _std_setunsignedint_std_lessunsignedint_std_allocatorunsignedint,
            VertexBasedCellPopulation3,
            GetNeighbouringNodeIndices,
            index);
    }
    ::TetrahedralMesh<3, 3> * GetTetrahedralMeshForPdeModifier() override {
        PYBIND11_OVERLOAD(
            _TetrahedralMesh3_3Ptr,
            VertexBasedCellPopulation3,
            GetTetrahedralMeshForPdeModifier,
            );
    }
    bool IsPdeNodeAssociatedWithNonApoptoticCell(unsigned int pdeNodeIndex) override {
        PYBIND11_OVERLOAD(
            bool,
            VertexBasedCellPopulation3,
            IsPdeNodeAssociatedWithNonApoptoticCell,
            pdeNodeIndex);
    }
    double GetCellDataItemAtPdeNode(unsigned int pdeNodeIndex, ::std::string & rVariableName, bool dirichletBoundaryConditionApplies, double dirichletBoundaryValue) override {
        PYBIND11_OVERLOAD(
            double,
            VertexBasedCellPopulation3,
            GetCellDataItemAtPdeNode,
            pdeNodeIndex, 
rVariableName, 
dirichletBoundaryConditionApplies, 
dirichletBoundaryValue);
    }
    double GetDefaultTimeStep() override {
        PYBIND11_OVERLOAD(
            double,
            VertexBasedCellPopulation3,
            GetDefaultTimeStep,
            );
    }
    void WriteDataToVisualizerSetupFile(::out_stream & pVizSetupFile) override {
        PYBIND11_OVERLOAD(
            void,
            VertexBasedCellPopulation3,
            WriteDataToVisualizerSetupFile,
            pVizSetupFile);
    }
    void SimulationSetupHook(::AbstractCellBasedSimulation<3, 3> * pSimulation) override {
        PYBIND11_OVERLOAD(
            void,
            VertexBasedCellPopulation3,
            SimulationSetupHook,
            pSimulation);
    }

};
void register_VertexBasedCellPopulation3_class(py::module &m){
py::class_<VertexBasedCellPopulation3 , VertexBasedCellPopulation3_Overloads , boost::shared_ptr<VertexBasedCellPopulation3 >   >(m, "VertexBasedCellPopulation3")
        .def(py::init<::MutableVertexMesh<3, 3> &, ::std::vector<boost::shared_ptr<Cell>, std::allocator<boost::shared_ptr<Cell> > > &, bool, bool, ::std::vector<unsigned int, std::allocator<unsigned int> > const >())
        .def(py::init<::MutableVertexMesh<3, 3> & >())
        .def(
            "GetDampingConstant", 
            (double(VertexBasedCellPopulation3::*)(unsigned int)) &VertexBasedCellPopulation3::GetDampingConstant, 
            " " , py::arg("nodeIndex"))
        .def(
            "GetNumElements", 
            (unsigned int(VertexBasedCellPopulation3::*)()) &VertexBasedCellPopulation3::GetNumElements, 
            " " )
        .def(
            "GetNumNodes", 
            (unsigned int(VertexBasedCellPopulation3::*)()) &VertexBasedCellPopulation3::GetNumNodes, 
            " " )
        .def(
            "GetLocationOfCellCentre", 
            (::boost::numeric::ublas::c_vector<double, 3>(VertexBasedCellPopulation3::*)(::CellPtr)) &VertexBasedCellPopulation3::GetLocationOfCellCentre, 
            " " , py::arg("pCell"))
        .def(
            "GetNode", 
            (::Node<3> *(VertexBasedCellPopulation3::*)(unsigned int)) &VertexBasedCellPopulation3::GetNode, 
            " " , py::arg("index"))
        .def(
            "GetNeighbouringLocationIndices", 
            (::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> >(VertexBasedCellPopulation3::*)(::CellPtr)) &VertexBasedCellPopulation3::GetNeighbouringLocationIndices, 
            " " , py::arg("pCell"))
        .def(
            "AddNode", 
            (unsigned int(VertexBasedCellPopulation3::*)(::Node<3> *)) &VertexBasedCellPopulation3::AddNode, 
            " " , py::arg("pNewNode"))
        .def(
            "CheckForStepSizeException", 
            (void(VertexBasedCellPopulation3::*)(unsigned int, ::boost::numeric::ublas::c_vector<double, 3> &, double)) &VertexBasedCellPopulation3::CheckForStepSizeException, 
            " " , py::arg("nodeIndex"), py::arg("rDisplacement"), py::arg("dt"))
        .def(
            "SetNode", 
            (void(VertexBasedCellPopulation3::*)(unsigned int, ::ChastePoint<3> &)) &VertexBasedCellPopulation3::SetNode, 
            " " , py::arg("index"), py::arg("rNewLocation"))
        .def(
            "AddCell", 
            (::CellPtr(VertexBasedCellPopulation3::*)(::CellPtr, ::CellPtr)) &VertexBasedCellPopulation3::AddCell, 
            " " )
        .def(
            "RemoveDeadCells", 
            (unsigned int(VertexBasedCellPopulation3::*)()) &VertexBasedCellPopulation3::RemoveDeadCells, 
            " " )
        .def(
            "IsCellAssociatedWithADeletedLocation", 
            (bool(VertexBasedCellPopulation3::*)(::CellPtr)) &VertexBasedCellPopulation3::IsCellAssociatedWithADeletedLocation, 
            " " , py::arg("pCell"))
        .def(
            "Update", 
            (void(VertexBasedCellPopulation3::*)(bool)) &VertexBasedCellPopulation3::Update, 
            " " , py::arg("hasHadBirthsOrDeaths") = true)
        .def(
            "OpenWritersFiles", 
            (void(VertexBasedCellPopulation3::*)(::OutputFileHandler &)) &VertexBasedCellPopulation3::OpenWritersFiles, 
            " " , py::arg("rOutputFileHandler"))
        .def(
            "AcceptPopulationWriter", 
            (void(VertexBasedCellPopulation3::*)(::boost::shared_ptr<AbstractCellPopulationWriter<3, 3> >)) &VertexBasedCellPopulation3::AcceptPopulationWriter, 
            " " , py::arg("pPopulationWriter"))
        .def(
            "AcceptPopulationCountWriter", 
            (void(VertexBasedCellPopulation3::*)(::boost::shared_ptr<AbstractCellPopulationCountWriter<3, 3> >)) &VertexBasedCellPopulation3::AcceptPopulationCountWriter, 
            " " , py::arg("pPopulationCountWriter"))
        .def(
            "AcceptCellWriter", 
            (void(VertexBasedCellPopulation3::*)(::boost::shared_ptr<AbstractCellWriter<3, 3> >, ::CellPtr)) &VertexBasedCellPopulation3::AcceptCellWriter, 
            " " , py::arg("pCellWriter"), py::arg("pCell"))
        .def(
            "GetRosetteRankOfCell", 
            (unsigned int(VertexBasedCellPopulation3::*)(::CellPtr)) &VertexBasedCellPopulation3::GetRosetteRankOfCell, 
            " " , py::arg("pCell"))
        .def(
            "GetVolumeOfCell", 
            (double(VertexBasedCellPopulation3::*)(::CellPtr)) &VertexBasedCellPopulation3::GetVolumeOfCell, 
            " " , py::arg("pCell"))
        .def(
            "GetLocationsOfT2Swaps", 
            (::std::vector<boost::numeric::ublas::c_vector<double, 3>, std::allocator<boost::numeric::ublas::c_vector<double, 3> > >(VertexBasedCellPopulation3::*)()) &VertexBasedCellPopulation3::GetLocationsOfT2Swaps, 
            " " )
        .def(
            "GetCellIdsOfT2Swaps", 
            (::std::vector<unsigned int, std::allocator<unsigned int> >(VertexBasedCellPopulation3::*)()) &VertexBasedCellPopulation3::GetCellIdsOfT2Swaps, 
            " " )
        .def(
            "AddLocationOfT2Swap", 
            (void(VertexBasedCellPopulation3::*)(::boost::numeric::ublas::c_vector<double, 3>)) &VertexBasedCellPopulation3::AddLocationOfT2Swap, 
            " " , py::arg("locationOfT2Swap"))
        .def(
            "AddCellIdOfT2Swap", 
            (void(VertexBasedCellPopulation3::*)(unsigned int)) &VertexBasedCellPopulation3::AddCellIdOfT2Swap, 
            " " , py::arg("idOfT2Swap"))
        .def(
            "ClearLocationsAndCellIdsOfT2Swaps", 
            (void(VertexBasedCellPopulation3::*)()) &VertexBasedCellPopulation3::ClearLocationsAndCellIdsOfT2Swaps, 
            " " )
        .def(
            "GetOutputCellRearrangementLocations", 
            (bool(VertexBasedCellPopulation3::*)()) &VertexBasedCellPopulation3::GetOutputCellRearrangementLocations, 
            " " )
        .def(
            "SetOutputCellRearrangementLocations", 
            (void(VertexBasedCellPopulation3::*)(bool)) &VertexBasedCellPopulation3::SetOutputCellRearrangementLocations, 
            " " , py::arg("outputCellRearrangementLocations"))
        .def(
            "OutputCellPopulationParameters", 
            (void(VertexBasedCellPopulation3::*)(::out_stream &)) &VertexBasedCellPopulation3::OutputCellPopulationParameters, 
            " " , py::arg("rParamsFile"))
        .def(
            "GetWidth", 
            (double(VertexBasedCellPopulation3::*)(unsigned int const &)) &VertexBasedCellPopulation3::GetWidth, 
            " " , py::arg("rDimension"))
        .def(
            "GetNeighbouringNodeIndices", 
            (::std::set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int> >(VertexBasedCellPopulation3::*)(unsigned int)) &VertexBasedCellPopulation3::GetNeighbouringNodeIndices, 
            " " , py::arg("index"))
        .def(
            "IsPdeNodeAssociatedWithNonApoptoticCell", 
            (bool(VertexBasedCellPopulation3::*)(unsigned int)) &VertexBasedCellPopulation3::IsPdeNodeAssociatedWithNonApoptoticCell, 
            " " , py::arg("pdeNodeIndex"))
        .def(
            "GetCellDataItemAtPdeNode", 
            (double(VertexBasedCellPopulation3::*)(unsigned int, ::std::string &, bool, double)) &VertexBasedCellPopulation3::GetCellDataItemAtPdeNode, 
            " " , py::arg("pdeNodeIndex"), py::arg("rVariableName"), py::arg("dirichletBoundaryConditionApplies") = false, py::arg("dirichletBoundaryValue") = 0.)
        .def(
            "GetVertexBasedDivisionRule", 
            (::boost::shared_ptr<AbstractVertexBasedDivisionRule<3> >(VertexBasedCellPopulation3::*)()) &VertexBasedCellPopulation3::GetVertexBasedDivisionRule, 
            " " )
        .def(
            "SetVertexBasedDivisionRule", 
            (void(VertexBasedCellPopulation3::*)(::boost::shared_ptr<AbstractVertexBasedDivisionRule<3> >)) &VertexBasedCellPopulation3::SetVertexBasedDivisionRule, 
            " " , py::arg("pVertexBasedDivisionRule"))
        .def(
            "GetDefaultTimeStep", 
            (double(VertexBasedCellPopulation3::*)()) &VertexBasedCellPopulation3::GetDefaultTimeStep, 
            " " )
        .def(
            "WriteDataToVisualizerSetupFile", 
            (void(VertexBasedCellPopulation3::*)(::out_stream &)) &VertexBasedCellPopulation3::WriteDataToVisualizerSetupFile, 
            " " , py::arg("pVizSetupFile"))
        .def(
            "SimulationSetupHook", 
            (void(VertexBasedCellPopulation3::*)(::AbstractCellBasedSimulation<3, 3> *)) &VertexBasedCellPopulation3::SimulationSetupHook, 
            " " , py::arg("pSimulation"))
    ;
}
