"""Copyright (c) 2005-2024, University of Oxford.
All rights reserved.

University of Oxford means the Chancellor, Masters and Scholars of the
University of Oxford, having an administrative office at Wellington
Square, Oxford OX1 2JD, UK.

This file is part of Chaste.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
 * Neither the name of the University of Oxford nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
"""

import unittest


class TestImports(unittest.TestCase):

    def test_cell_based_imports(self):
        import chaste

        chaste.init()

        import chaste.cell_based

    def test_core_imports(self):
        import chaste

        chaste.init()

        import chaste.core
        from chaste.core import (
            ChasteBuildInfo,
            FileFinder,
            Identifiable,
            OutputFileHandler,
            PetscTools,
            ProgressReporter,
            RandomNumberGenerator,
            RelativeTo,
            ReplicatableVector,
            Timer,
            TimeStepper,
        )

    def test_mesh_imports(self):
        import chaste

        chaste.init()

        import chaste.mesh
        from chaste.mesh import (
            AbstractChasteRegion2,
            AbstractChasteRegion3,
            AbstractElement1_2,
            AbstractElement2_2,
            AbstractElement2_3,
            AbstractElement3_3,
            AbstractMesh2_2,
            AbstractMesh3_3,
            AbstractTetrahedralMesh2_2,
            AbstractTetrahedralMesh3_3,
            ChasteCuboid2,
            ChasteCuboid3,
            ChasteEllipsoid2,
            ChasteEllipsoid3,
            ChastePoint2,
            ChastePoint3,
            Cylindrical2dMesh,
            Cylindrical2dNodesOnlyMesh,
            Cylindrical2dVertexMesh,
            CylindricalHoneycombMeshGenerator,
            CylindricalHoneycombVertexMeshGenerator,
            Edge2,
            Edge3,
            EdgeHelper2,
            EdgeHelper3,
            EdgeOperation,
            Element2_2,
            Element3_3,
            FluidSource2,
            FluidSource3,
            HoneycombMeshGenerator,
            HoneycombVertexMeshGenerator,
            ImmersedBoundaryElement1_2,
            ImmersedBoundaryElement2_2,
            ImmersedBoundaryElement2_3,
            ImmersedBoundaryElement3_3,
            ImmersedBoundaryHoneycombMeshGenerator,
            ImmersedBoundaryMesh2_2,
            ImmersedBoundaryMesh3_3,
            ImmersedBoundaryPalisadeMeshGenerator,
            MutableElement1_2,
            MutableElement2_2,
            MutableElement2_3,
            MutableElement3_3,
            MutableMesh2_2,
            MutableMesh3_3,
            MutableVertexMesh2_2,
            MutableVertexMesh3_3,
            Node2,
            Node3,
            NodeAttributes2,
            NodeAttributes3,
            NodesOnlyMesh2,
            NodesOnlyMesh3,
            PeriodicNodesOnlyMesh2,
            PeriodicNodesOnlyMesh3,
            PottsElement2,
            PottsElement3,
            PottsMesh2,
            PottsMesh3,
            PottsMeshGenerator2,
            PottsMeshGenerator3,
            TetrahedralMesh2_2,
            TetrahedralMesh3_3,
            Toroidal2dMesh,
            Toroidal2dVertexMesh,
            ToroidalHoneycombMeshGenerator,
            ToroidalHoneycombVertexMeshGenerator,
            VertexMesh2_2,
            VertexMesh3_3,
            VoronoiVertexMeshGenerator,
        )

    def test_ode_imports(self):
        import chaste

        chaste.init()

        import chaste.ode
        from chaste.ode import (
            AbstractOdeSystem,
            AbstractOdeSystemInformation,
            AbstractPythonOdeSystemInformation,
            Alarcon2004OxygenBasedCellCycleOdeSystem,
            DeltaNotchEdgeOdeSystem,
            DeltaNotchInteriorOdeSystem,
            DeltaNotchOdeSystem,
            Goldbeter1991OdeSystem,
            TysonNovak2001OdeSystem,
        )

    def test_pde_imports(self):
        import chaste

        chaste.init()

        import chaste.pde

    def test_visualization_imports(self):
        import chaste

        chaste.init()

        import chaste.visualization


if __name__ == "__main__":
    unittest.main()
