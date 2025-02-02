#include <pybind11/pybind11.h>
#include "ChastePoint2.cppwg.hpp"
#include "ChastePoint3.cppwg.hpp"
#include "AbstractChasteRegion2.cppwg.hpp"
#include "AbstractChasteRegion3.cppwg.hpp"
#include "ChasteCuboid2.cppwg.hpp"
#include "ChasteCuboid3.cppwg.hpp"
#include "ChasteEllipsoid2.cppwg.hpp"
#include "ChasteEllipsoid3.cppwg.hpp"
#include "NodeAttributes2.cppwg.hpp"
#include "NodeAttributes3.cppwg.hpp"
#include "Node2.cppwg.hpp"
#include "Node3.cppwg.hpp"
#include "Element2_2.cppwg.hpp"
#include "Element3_3.cppwg.hpp"
#include "Edge2.cppwg.hpp"
#include "Edge3.cppwg.hpp"
#include "EdgeHelper2.cppwg.hpp"
#include "EdgeHelper3.cppwg.hpp"
#include "EdgeOperation.cppwg.hpp"
#include "AbstractMesh2_2.cppwg.hpp"
#include "AbstractMesh3_3.cppwg.hpp"
#include "AbstractTetrahedralMesh2_2.cppwg.hpp"
#include "AbstractTetrahedralMesh3_3.cppwg.hpp"
#include "TetrahedralMesh2_2.cppwg.hpp"
#include "TetrahedralMesh3_3.cppwg.hpp"
#include "MutableMesh2_2.cppwg.hpp"
#include "MutableMesh3_3.cppwg.hpp"
#include "AbstractElement1_2.cppwg.hpp"
#include "AbstractElement2_2.cppwg.hpp"
#include "AbstractElement2_3.cppwg.hpp"
#include "AbstractElement3_3.cppwg.hpp"
#include "MutableElement1_2.cppwg.hpp"
#include "MutableElement2_2.cppwg.hpp"
#include "MutableElement2_3.cppwg.hpp"
#include "MutableElement3_3.cppwg.hpp"
#include "NodesOnlyMesh2.cppwg.hpp"
#include "NodesOnlyMesh3.cppwg.hpp"
#include "PottsElement2.cppwg.hpp"
#include "PottsElement3.cppwg.hpp"
#include "PottsMesh2.cppwg.hpp"
#include "PottsMesh3.cppwg.hpp"
#include "FluidSource2.cppwg.hpp"
#include "FluidSource3.cppwg.hpp"
#include "ImmersedBoundaryElement1_2.cppwg.hpp"
#include "ImmersedBoundaryElement2_2.cppwg.hpp"
#include "ImmersedBoundaryElement2_3.cppwg.hpp"
#include "ImmersedBoundaryElement3_3.cppwg.hpp"
#include "PottsMeshGenerator2.cppwg.hpp"
#include "PottsMeshGenerator3.cppwg.hpp"
#include "VertexMesh2_2.cppwg.hpp"
#include "VertexMesh3_3.cppwg.hpp"
#include "MutableVertexMesh2_2.cppwg.hpp"
#include "MutableVertexMesh3_3.cppwg.hpp"
#include "Cylindrical2dVertexMesh.cppwg.hpp"
#include "Toroidal2dMesh.cppwg.hpp"
#include "PeriodicNodesOnlyMesh2.cppwg.hpp"
#include "PeriodicNodesOnlyMesh3.cppwg.hpp"
#include "Cylindrical2dNodesOnlyMesh.cppwg.hpp"
#include "Cylindrical2dMesh.cppwg.hpp"
#include "Toroidal2dVertexMesh.cppwg.hpp"
#include "ImmersedBoundaryMesh2_2.cppwg.hpp"
#include "ImmersedBoundaryMesh3_3.cppwg.hpp"
#include "HoneycombMeshGenerator.cppwg.hpp"
#include "HoneycombVertexMeshGenerator.cppwg.hpp"
#include "CylindricalHoneycombMeshGenerator.cppwg.hpp"
#include "CylindricalHoneycombVertexMeshGenerator.cppwg.hpp"
#include "ToroidalHoneycombMeshGenerator.cppwg.hpp"
#include "ToroidalHoneycombVertexMeshGenerator.cppwg.hpp"
#include "VoronoiVertexMeshGenerator.cppwg.hpp"
#include "ImmersedBoundaryHoneycombMeshGenerator.cppwg.hpp"
#include "ImmersedBoundaryPalisadeMeshGenerator.cppwg.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_chaste_project_PyChaste_mesh, m)
{
    register_ChastePoint2_class(m);
    register_ChastePoint3_class(m);
    register_AbstractChasteRegion2_class(m);
    register_AbstractChasteRegion3_class(m);
    register_ChasteCuboid2_class(m);
    register_ChasteCuboid3_class(m);
    register_ChasteEllipsoid2_class(m);
    register_ChasteEllipsoid3_class(m);
    register_NodeAttributes2_class(m);
    register_NodeAttributes3_class(m);
    register_Node2_class(m);
    register_Node3_class(m);
    register_Element2_2_class(m);
    register_Element3_3_class(m);
    register_Edge2_class(m);
    register_Edge3_class(m);
    register_EdgeHelper2_class(m);
    register_EdgeHelper3_class(m);
    register_EdgeOperation_class(m);
    register_AbstractMesh2_2_class(m);
    register_AbstractMesh3_3_class(m);
    register_AbstractTetrahedralMesh2_2_class(m);
    register_AbstractTetrahedralMesh3_3_class(m);
    register_TetrahedralMesh2_2_class(m);
    register_TetrahedralMesh3_3_class(m);
    register_MutableMesh2_2_class(m);
    register_MutableMesh3_3_class(m);
    register_AbstractElement1_2_class(m);
    register_AbstractElement2_2_class(m);
    register_AbstractElement2_3_class(m);
    register_AbstractElement3_3_class(m);
    register_MutableElement1_2_class(m);
    register_MutableElement2_2_class(m);
    register_MutableElement2_3_class(m);
    register_MutableElement3_3_class(m);
    register_NodesOnlyMesh2_class(m);
    register_NodesOnlyMesh3_class(m);
    register_PottsElement2_class(m);
    register_PottsElement3_class(m);
    register_PottsMesh2_class(m);
    register_PottsMesh3_class(m);
    register_FluidSource2_class(m);
    register_FluidSource3_class(m);
    register_ImmersedBoundaryElement1_2_class(m);
    register_ImmersedBoundaryElement2_2_class(m);
    register_ImmersedBoundaryElement2_3_class(m);
    register_ImmersedBoundaryElement3_3_class(m);
    register_PottsMeshGenerator2_class(m);
    register_PottsMeshGenerator3_class(m);
    register_VertexMesh2_2_class(m);
    register_VertexMesh3_3_class(m);
    register_MutableVertexMesh2_2_class(m);
    register_MutableVertexMesh3_3_class(m);
    register_Cylindrical2dVertexMesh_class(m);
    register_Toroidal2dMesh_class(m);
    register_PeriodicNodesOnlyMesh2_class(m);
    register_PeriodicNodesOnlyMesh3_class(m);
    register_Cylindrical2dNodesOnlyMesh_class(m);
    register_Cylindrical2dMesh_class(m);
    register_Toroidal2dVertexMesh_class(m);
    register_ImmersedBoundaryMesh2_2_class(m);
    register_ImmersedBoundaryMesh3_3_class(m);
    register_HoneycombMeshGenerator_class(m);
    register_HoneycombVertexMeshGenerator_class(m);
    register_CylindricalHoneycombMeshGenerator_class(m);
    register_CylindricalHoneycombVertexMeshGenerator_class(m);
    register_ToroidalHoneycombMeshGenerator_class(m);
    register_ToroidalHoneycombVertexMeshGenerator_class(m);
    register_VoronoiVertexMeshGenerator_class(m);
    register_ImmersedBoundaryHoneycombMeshGenerator_class(m);
    register_ImmersedBoundaryPalisadeMeshGenerator_class(m);
}
