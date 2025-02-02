#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "ImmersedBoundaryMesh.hpp"

#include "ImmersedBoundaryMesh3_3.cppwg.hpp"

namespace py = pybind11;
typedef ImmersedBoundaryMesh<3,3 > ImmersedBoundaryMesh3_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
typedef unsigned int unsignedint;
typedef unsigned int unsignedint;
typedef ::boost::numeric::ublas::c_vector<double, 3> _boost_numeric_ublas_c_vector_lt_double_3_gt_;
typedef ::boost::numeric::ublas::c_vector<double, 3> _boost_numeric_ublas_c_vector_lt_double_3_gt_;
typedef ::boost::numeric::ublas::c_vector<double, 3> _boost_numeric_ublas_c_vector_lt_double_3_gt_;
typedef unsigned int unsignedint;

class ImmersedBoundaryMesh3_3_Overloads : public ImmersedBoundaryMesh3_3{
    public:
    using ImmersedBoundaryMesh3_3::ImmersedBoundaryMesh;
    unsigned int GetNumNodes() const  override {
        PYBIND11_OVERRIDE(
            unsignedint,
            ImmersedBoundaryMesh3_3,
            GetNumNodes,
            );
    }
    unsigned int GetNumElements() const  override {
        PYBIND11_OVERRIDE(
            unsignedint,
            ImmersedBoundaryMesh3_3,
            GetNumElements,
            );
    }
    ::boost::numeric::ublas::c_vector<double, 3> GetVectorFromAtoB(::boost::numeric::ublas::c_vector<double, 3> const & rLocation1, ::boost::numeric::ublas::c_vector<double, 3> const & rLocation2) override {
        PYBIND11_OVERRIDE(
            _boost_numeric_ublas_c_vector_lt_double_3_gt_,
            ImmersedBoundaryMesh3_3,
            GetVectorFromAtoB,
            rLocation1, 
rLocation2);
    }
    ::boost::numeric::ublas::c_vector<double, 3> GetCentroidOfElement(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _boost_numeric_ublas_c_vector_lt_double_3_gt_,
            ImmersedBoundaryMesh3_3,
            GetCentroidOfElement,
            index);
    }
    void Clear() override {
        PYBIND11_OVERRIDE(
            void,
            ImmersedBoundaryMesh3_3,
            Clear,
            );
    }
    double GetVolumeOfElement(unsigned int index) override {
        PYBIND11_OVERRIDE(
            double,
            ImmersedBoundaryMesh3_3,
            GetVolumeOfElement,
            index);
    }
    double GetSurfaceAreaOfElement(unsigned int index) override {
        PYBIND11_OVERRIDE(
            double,
            ImmersedBoundaryMesh3_3,
            GetSurfaceAreaOfElement,
            index);
    }
    ::boost::numeric::ublas::c_vector<double, 3> CalculateMomentsOfElement(unsigned int index) override {
        PYBIND11_OVERRIDE(
            _boost_numeric_ublas_c_vector_lt_double_3_gt_,
            ImmersedBoundaryMesh3_3,
            CalculateMomentsOfElement,
            index);
    }
    unsigned int SolveNodeMapping(unsigned int index) const  override {
        PYBIND11_OVERRIDE(
            unsignedint,
            ImmersedBoundaryMesh3_3,
            SolveNodeMapping,
            index);
    }

};
void register_ImmersedBoundaryMesh3_3_class(py::module &m){
py::class_<ImmersedBoundaryMesh3_3 , ImmersedBoundaryMesh3_3_Overloads , boost::shared_ptr<ImmersedBoundaryMesh3_3 >  , AbstractMesh<3, 3>  >(m, "ImmersedBoundaryMesh3_3")
        .def(py::init<::std::vector<Node<3> *>, ::std::vector<ImmersedBoundaryElement<3, 3> *>, ::std::vector<ImmersedBoundaryElement<2, 3> *>, unsigned int, unsigned int >(), py::arg("nodes"), py::arg("elements"), py::arg("laminas") = std::vector<ImmersedBoundaryElement<2, 3> *>{}, py::arg("numGridPtsX") = 128U, py::arg("numGridPtsY") = 128U)
        .def(py::init< >())
        .def(
            "rGetNodes", 
            (::std::vector<Node<3> *> const &(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::rGetNodes, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "GetElementIteratorBegin", 
            (::ImmersedBoundaryMesh<3, 3>::ImmersedBoundaryElementIterator(ImmersedBoundaryMesh3_3::*)(bool)) &ImmersedBoundaryMesh3_3::GetElementIteratorBegin, 
            " " , py::arg("skipDeletedElements") = true )
        .def(
            "GetElementIteratorEnd", 
            (::ImmersedBoundaryMesh<3, 3>::ImmersedBoundaryElementIterator(ImmersedBoundaryMesh3_3::*)()) &ImmersedBoundaryMesh3_3::GetElementIteratorEnd, 
            " "  )
        .def(
            "GetLaminaIteratorBegin", 
            (::ImmersedBoundaryMesh<3, 3>::ImmersedBoundaryLaminaIterator(ImmersedBoundaryMesh3_3::*)(bool)) &ImmersedBoundaryMesh3_3::GetLaminaIteratorBegin, 
            " " , py::arg("skipDeletedLaminas") = true )
        .def(
            "GetLaminaIteratorEnd", 
            (::ImmersedBoundaryMesh<3, 3>::ImmersedBoundaryLaminaIterator(ImmersedBoundaryMesh3_3::*)()) &ImmersedBoundaryMesh3_3::GetLaminaIteratorEnd, 
            " "  )
        .def(
            "GetNumNodes", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetNumNodes, 
            " "  )
        .def(
            "GetNumElements", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetNumElements, 
            " "  )
        .def(
            "GetNumAllElements", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetNumAllElements, 
            " "  )
        .def(
            "GetNumLaminas", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetNumLaminas, 
            " "  )
        .def(
            "GetNumGridPtsX", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetNumGridPtsX, 
            " "  )
        .def(
            "GetNumGridPtsY", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetNumGridPtsY, 
            " "  )
        .def(
            "GetCharacteristicNodeSpacing", 
            (double(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetCharacteristicNodeSpacing, 
            " "  )
        .def(
            "GetSpacingRatio", 
            (double(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetSpacingRatio, 
            " "  )
        .def(
            "GetMaxNodeIndex", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetMaxNodeIndex, 
            " "  )
        .def(
            "GetMaxElementIndex", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetMaxElementIndex, 
            " "  )
        .def(
            "GetMaxLaminaIndex", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetMaxLaminaIndex, 
            " "  )
        .def(
            "GetVectorFromAtoB", 
            (::boost::numeric::ublas::c_vector<double, 3>(ImmersedBoundaryMesh3_3::*)(::boost::numeric::ublas::c_vector<double, 3> const &, ::boost::numeric::ublas::c_vector<double, 3> const &)) &ImmersedBoundaryMesh3_3::GetVectorFromAtoB, 
            " " , py::arg("rLocation1"), py::arg("rLocation2") )
        .def(
            "SetNode", 
            (void(ImmersedBoundaryMesh3_3::*)(unsigned int, ::ChastePoint<3>)) &ImmersedBoundaryMesh3_3::SetNode, 
            " " , py::arg("nodeIndex"), py::arg("point") )
        .def(
            "ConformToGeometry", 
            (void(ImmersedBoundaryMesh3_3::*)(::boost::numeric::ublas::c_vector<double, 3> &)) &ImmersedBoundaryMesh3_3::ConformToGeometry, 
            " " , py::arg("rLocation") )
        .def(
            "rGet2dVelocityGrids", 
            (::boost::multi_array<double, 3> const &(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::rGet2dVelocityGrids, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "rGetModifiable2dVelocityGrids", 
            (::boost::multi_array<double, 3> &(ImmersedBoundaryMesh3_3::*)()) &ImmersedBoundaryMesh3_3::rGetModifiable2dVelocityGrids, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "SetNumGridPtsX", 
            (void(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::SetNumGridPtsX, 
            " " , py::arg("meshPointsX") )
        .def(
            "SetNumGridPtsY", 
            (void(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::SetNumGridPtsY, 
            " " , py::arg("meshPointsY") )
        .def(
            "SetNumGridPtsXAndY", 
            (void(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::SetNumGridPtsXAndY, 
            " " , py::arg("numGridPts") )
        .def(
            "SetCharacteristicNodeSpacing", 
            (void(ImmersedBoundaryMesh3_3::*)(double)) &ImmersedBoundaryMesh3_3::SetCharacteristicNodeSpacing, 
            " " , py::arg("nodeSpacing") )
        .def(
            "AddNode", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)(::Node<3> *)) &ImmersedBoundaryMesh3_3::AddNode, 
            " " , py::arg("pNewNode") )
        .def(
            "rGetElementFluidSources", 
            (::std::vector<std::shared_ptr<FluidSource<3>>> &(ImmersedBoundaryMesh3_3::*)()) &ImmersedBoundaryMesh3_3::rGetElementFluidSources, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "rGetBalancingFluidSources", 
            (::std::vector<std::shared_ptr<FluidSource<3>>> &(ImmersedBoundaryMesh3_3::*)()) &ImmersedBoundaryMesh3_3::rGetBalancingFluidSources, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "GetNeighbouringNodeIndices", 
            (::std::set<unsigned int>(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::GetNeighbouringNodeIndices, 
            " " , py::arg("nodeIndex") )
        .def(
            "GetElement", 
            (::ImmersedBoundaryElement<3, 3> *(ImmersedBoundaryMesh3_3::*)(unsigned int) const ) &ImmersedBoundaryMesh3_3::GetElement, 
            " " , py::arg("index") , py::return_value_policy::reference)
        .def(
            "GetLamina", 
            (::ImmersedBoundaryElement<2, 3> *(ImmersedBoundaryMesh3_3::*)(unsigned int) const ) &ImmersedBoundaryMesh3_3::GetLamina, 
            " " , py::arg("index") , py::return_value_policy::reference)
        .def(
            "GetCentroidOfElement", 
            (::boost::numeric::ublas::c_vector<double, 3>(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::GetCentroidOfElement, 
            " " , py::arg("index") )
        .def(
            "ConstructFromMeshReader", 
            (void(ImmersedBoundaryMesh3_3::*)(::AbstractMeshReader<3, 3> &)) &ImmersedBoundaryMesh3_3::ConstructFromMeshReader, 
            " " , py::arg("rMeshReader") )
        .def(
            "Clear", 
            (void(ImmersedBoundaryMesh3_3::*)()) &ImmersedBoundaryMesh3_3::Clear, 
            " "  )
        .def(
            "GetVolumeOfElement", 
            (double(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::GetVolumeOfElement, 
            " " , py::arg("index") )
        .def(
            "GetSurfaceAreaOfElement", 
            (double(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::GetSurfaceAreaOfElement, 
            " " , py::arg("index") )
        .def(
            "GetVoronoiSurfaceAreaOfElement", 
            (double(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::GetVoronoiSurfaceAreaOfElement, 
            " " , py::arg("elemIdx") )
        .def(
            "GetAverageNodeSpacingOfElement", 
            (double(ImmersedBoundaryMesh3_3::*)(unsigned int, bool)) &ImmersedBoundaryMesh3_3::GetAverageNodeSpacingOfElement, 
            " " , py::arg("index"), py::arg("recalculate") = true )
        .def(
            "GetAverageNodeSpacingOfLamina", 
            (double(ImmersedBoundaryMesh3_3::*)(unsigned int, bool)) &ImmersedBoundaryMesh3_3::GetAverageNodeSpacingOfLamina, 
            " " , py::arg("index"), py::arg("recalculate") = true )
        .def(
            "CalculateMomentsOfElement", 
            (::boost::numeric::ublas::c_vector<double, 3>(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::CalculateMomentsOfElement, 
            " " , py::arg("index") )
        .def(
            "GetElongationShapeFactorOfElement", 
            (double(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::GetElongationShapeFactorOfElement, 
            " " , py::arg("elementIndex") )
        .def(
            "GetTortuosityOfMesh", 
            (double(ImmersedBoundaryMesh3_3::*)()) &ImmersedBoundaryMesh3_3::GetTortuosityOfMesh, 
            " "  )
        .def(
            "GetSkewnessOfElementMassDistributionAboutAxis", 
            (double(ImmersedBoundaryMesh3_3::*)(unsigned int, ::boost::numeric::ublas::c_vector<double, 3>)) &ImmersedBoundaryMesh3_3::GetSkewnessOfElementMassDistributionAboutAxis, 
            " " , py::arg("elemIndex"), py::arg("axis") )
        .def(
            "CalculateBoundingBoxOfElement", 
            (::ChasteCuboid<3>(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::CalculateBoundingBoxOfElement, 
            " " , py::arg("index") )
        .def(
            "GetShortAxisOfElement", 
            (::boost::numeric::ublas::c_vector<double, 3>(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::GetShortAxisOfElement, 
            " " , py::arg("index") )
        .def(
            "DivideElementAlongGivenAxis", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)(::ImmersedBoundaryElement<3, 3> *, ::boost::numeric::ublas::c_vector<double, 3>, bool)) &ImmersedBoundaryMesh3_3::DivideElementAlongGivenAxis, 
            " " , py::arg("pElement"), py::arg("axisOfDivision"), py::arg("placeOriginalElementBelow") = false )
        .def(
            "DivideElementAlongShortAxis", 
            (unsigned int(ImmersedBoundaryMesh3_3::*)(::ImmersedBoundaryElement<3, 3> *, bool)) &ImmersedBoundaryMesh3_3::DivideElementAlongShortAxis, 
            " " , py::arg("pElement"), py::arg("placeOriginalElementBelow") = false )
        .def(
            "GetElementDivisionSpacing", 
            (double(ImmersedBoundaryMesh3_3::*)()) &ImmersedBoundaryMesh3_3::GetElementDivisionSpacing, 
            " "  )
        .def(
            "SetElementDivisionSpacing", 
            (void(ImmersedBoundaryMesh3_3::*)(double)) &ImmersedBoundaryMesh3_3::SetElementDivisionSpacing, 
            " " , py::arg("elementDivisionSpacing") )
        .def(
            "GetNeighbourDist", 
            (double(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetNeighbourDist, 
            " "  )
        .def(
            "SetCellRearrangementThreshold", 
            (void(ImmersedBoundaryMesh3_3::*)(double)) &ImmersedBoundaryMesh3_3::SetCellRearrangementThreshold, 
            " " , py::arg("cellRearrangementThreshold") )
        .def(
            "GetCellRearrangementThreshold", 
            (double(ImmersedBoundaryMesh3_3::*)()) &ImmersedBoundaryMesh3_3::GetCellRearrangementThreshold, 
            " "  )
        .def(
            "SetNeighbourDist", 
            (void(ImmersedBoundaryMesh3_3::*)(double)) &ImmersedBoundaryMesh3_3::SetNeighbourDist, 
            " " , py::arg("neighbourDist") )
        .def(
            "UpdateNodeLocationsVoronoiDiagramIfOutOfDate", 
            (void(ImmersedBoundaryMesh3_3::*)()) &ImmersedBoundaryMesh3_3::UpdateNodeLocationsVoronoiDiagramIfOutOfDate, 
            " "  )
        .def(
            "ReMesh", 
            (void(ImmersedBoundaryMesh3_3::*)(bool)) &ImmersedBoundaryMesh3_3::ReMesh, 
            " " , py::arg("randomOrder") = false )
        .def(
            "ReMeshElement", 
            (void(ImmersedBoundaryMesh3_3::*)(::ImmersedBoundaryElement<3, 3> *, bool)) &ImmersedBoundaryMesh3_3::ReMeshElement, 
            " " , py::arg("pElement"), py::arg("randomOrder") )
        .def(
            "ReMeshLamina", 
            (void(ImmersedBoundaryMesh3_3::*)(::ImmersedBoundaryElement<2, 3> *, bool)) &ImmersedBoundaryMesh3_3::ReMeshLamina, 
            " " , py::arg("pLamina"), py::arg("randomOrder") )
        .def(
            "NodesInDifferentElementOrLamina", 
            (bool(ImmersedBoundaryMesh3_3::*)(::Node<3> *, ::Node<3> *)) &ImmersedBoundaryMesh3_3::NodesInDifferentElementOrLamina, 
            " " , py::arg("pNodeA"), py::arg("pNodeB") )
        .def(
            "GetNeighbouringElementIndices", 
            (::std::set<unsigned int>(ImmersedBoundaryMesh3_3::*)(unsigned int)) &ImmersedBoundaryMesh3_3::GetNeighbouringElementIndices, 
            " " , py::arg("elemIdx") )
        .def(
            "CalculateLengthOfVoronoiEdge", 
            (double(ImmersedBoundaryMesh3_3::*)(::boost::polygon::voronoi_diagram<double>::edge_type const &)) &ImmersedBoundaryMesh3_3::CalculateLengthOfVoronoiEdge, 
            " " , py::arg("rEdge") )
        .def(
            "GetPolygonDistribution", 
            (::std::array<unsigned int, 13>(ImmersedBoundaryMesh3_3::*)()) &ImmersedBoundaryMesh3_3::GetPolygonDistribution, 
            " "  )
        .def(
            "rGetNodeLocationsVoronoiDiagram", 
            (::boost::polygon::voronoi_diagram<double> const &(ImmersedBoundaryMesh3_3::*)(bool)) &ImmersedBoundaryMesh3_3::rGetNodeLocationsVoronoiDiagram, 
            " " , py::arg("update") = true , py::return_value_policy::reference_internal)
        .def(
            "GetVoronoiCellIdsIndexedByNodeIndex", 
            (::std::vector<unsigned int> const &(ImmersedBoundaryMesh3_3::*)() const ) &ImmersedBoundaryMesh3_3::GetVoronoiCellIdsIndexedByNodeIndex, 
            " "  , py::return_value_policy::reference_internal)
        .def(
            "ScaleUpToVoronoiCoordinate", 
            (int(ImmersedBoundaryMesh3_3::*)(double) const ) &ImmersedBoundaryMesh3_3::ScaleUpToVoronoiCoordinate, 
            " " , py::arg("location") )
        .def(
            "ScaleDistanceDownFromVoronoi", 
            (double(ImmersedBoundaryMesh3_3::*)(double const) const ) &ImmersedBoundaryMesh3_3::ScaleDistanceDownFromVoronoi, 
            " " , py::arg("distance") )
    ;
}
