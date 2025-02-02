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
        from chaste.cell_based import (
            AbstractBoxDomainPdeModifier2,
            AbstractBoxDomainPdeModifier3,
            AbstractCaBasedDivisionRule2,
            AbstractCaBasedDivisionRule3,
            AbstractCaSwitchingUpdateRule2,
            AbstractCaSwitchingUpdateRule3,
            AbstractCaUpdateRule2,
            AbstractCaUpdateRule3,
            AbstractCellBasedSimulation2_2,
            AbstractCellBasedSimulation3_3,
            AbstractCellBasedSimulationModifier2_2,
            AbstractCellBasedSimulationModifier3_3,
            AbstractCellBasedWriter2_2,
            AbstractCellBasedWriter3_3,
            AbstractCellCycleModel,
            AbstractCellCycleModelOdeSolver,
            AbstractCellKiller2,
            AbstractCellKiller3,
            AbstractCellMutationState,
            AbstractCellPopulation2_2,
            AbstractCellPopulation3_3,
            AbstractCellPopulationBoundaryCondition2_2,
            AbstractCellPopulationBoundaryCondition3_3,
            AbstractCellPopulationCountWriter2_2,
            AbstractCellPopulationCountWriter3_3,
            AbstractCellPopulationEventWriter2_2,
            AbstractCellPopulationEventWriter3_3,
            AbstractCellPopulationWriter2_2,
            AbstractCellPopulationWriter3_3,
            AbstractCellProliferativeType,
            AbstractCellProperty,
            AbstractCellWriter2_2,
            AbstractCellWriter3_3,
            AbstractCentreBasedCellPopulation2_2,
            AbstractCentreBasedCellPopulation3_3,
            AbstractCentreBasedDivisionRule2_2,
            AbstractCentreBasedDivisionRule3_3,
            AbstractForce2_2,
            AbstractForce3_3,
            AbstractGrowingDomainPdeModifier2,
            AbstractGrowingDomainPdeModifier3,
            AbstractImmersedBoundaryDivisionRule2,
            AbstractImmersedBoundaryDivisionRule3,
            AbstractImmersedBoundaryForce2,
            AbstractImmersedBoundaryForce3,
            AbstractNumericalMethod2_2,
            AbstractNumericalMethod3_3,
            AbstractOdeBasedCellCycleModel,
            AbstractOdeBasedPhaseBasedCellCycleModel,
            AbstractOdeSrnModel,
            AbstractOffLatticeCellPopulation2_2,
            AbstractOffLatticeCellPopulation3_3,
            AbstractOnLatticeCellPopulation2,
            AbstractOnLatticeCellPopulation3,
            AbstractPdeModifier2,
            AbstractPdeModifier3,
            AbstractPhaseBasedCellCycleModel,
            AbstractPottsUpdateRule2,
            AbstractPottsUpdateRule3,
            AbstractSimpleCellCycleModel,
            AbstractSimpleGenerationalCellCycleModel,
            AbstractSimplePhaseBasedCellCycleModel,
            AbstractSrnModel,
            AbstractTargetAreaModifier2,
            AbstractTargetAreaModifier3,
            AbstractTwoBodyInteractionForce2_2,
            AbstractTwoBodyInteractionForce3_3,
            AbstractUpdateRule2,
            AbstractUpdateRule3,
            AbstractVertexBasedDivisionRule2,
            AbstractVertexBasedDivisionRule3,
            AdhesionPottsUpdateRule2,
            AdhesionPottsUpdateRule3,
            Alarcon2004OxygenBasedCellCycleModel,
            AlwaysDivideCellCycleModel,
            ApcOneHitCellMutationState,
            ApcTwoHitCellMutationState,
            ApoptoticCellKiller2,
            ApoptoticCellKiller3,
            ApoptoticCellProperty,
            AttractingPlaneBoundaryCondition2_2,
            AttractingPlaneBoundaryCondition3_3,
            AveragedSourceEllipticPde2,
            AveragedSourceEllipticPde3,
            AveragedSourceParabolicPde2,
            AveragedSourceParabolicPde3,
            BernoulliTrialCellCycleModel,
            BetaCateninOneHitCellMutationState,
            BiasedBernoulliTrialCellCycleModel,
            BoundaryNodeWriter2_2,
            BoundaryNodeWriter3_3,
            BuskeAdhesiveForce2,
            BuskeAdhesiveForce3,
            BuskeCompressionForce2,
            BuskeCompressionForce3,
            BuskeElasticForce2,
            BuskeElasticForce3,
            CaBasedCellPopulation2,
            CaBasedCellPopulation3,
            CellAgesWriter2_2,
            CellAgesWriter3_3,
            CellAncestor,
            CellAncestorWriter2_2,
            CellAncestorWriter3_3,
            CellAppliedForceWriter2_2,
            CellAppliedForceWriter3_3,
            CellBasedEllipticPdeSolver2,
            CellBasedEllipticPdeSolver3,
            CellBasedParabolicPdeSolver2,
            CellBasedParabolicPdeSolver3,
            Cell,
            CellCycleModelProteinConcentrationsWriter2_2,
            CellCycleModelProteinConcentrationsWriter3_3,
            CellData,
            CellDataItemWriter2_2,
            CellDataItemWriter3_3,
            CellDeltaNotchWriter2_2,
            CellDeltaNotchWriter3_3,
            CellDivisionLocationsWriter2_2,
            CellDivisionLocationsWriter3_3,
            CellEdgeData,
            CellId,
            CellIdWriter2_2,
            CellIdWriter3_3,
            CellLabel,
            CellLabelWriter2_2,
            CellLabelWriter3_3,
            CellLocationIndexWriter2_2,
            CellLocationIndexWriter3_3,
            CellMutationStatesCountWriter2_2,
            CellMutationStatesCountWriter3_3,
            CellMutationStatesWriter2_2,
            CellMutationStatesWriter3_3,
            CellPopulationAdjacencyMatrixWriter2_2,
            CellPopulationAdjacencyMatrixWriter3_3,
            CellPopulationAreaWriter2_2,
            CellPopulationAreaWriter3_3,
            CellPopulationElementWriter2_2,
            CellPopulationElementWriter3_3,
            CellProliferativePhasesCountWriter2_2,
            CellProliferativePhasesCountWriter3_3,
            CellProliferativePhasesWriter2_2,
            CellProliferativePhasesWriter3_3,
            CellProliferativeTypesCountWriter2_2,
            CellProliferativeTypesCountWriter3_3,
            CellProliferativeTypesWriter2_2,
            CellProliferativeTypesWriter3_3,
            CellPropertyCollection,
            CellPropertyRegistry,
            CellRadiusWriter2_2,
            CellRadiusWriter3_3,
            CellRemovalLocationsWriter2_2,
            CellRemovalLocationsWriter3_3,
            CellRosetteRankWriter2_2,
            CellRosetteRankWriter3_3,
            CellsGeneratorAlarcon2004OxygenBasedCellCycleModel_2,
            CellsGeneratorAlarcon2004OxygenBasedCellCycleModel_3,
            CellsGeneratorAlwaysDivideCellCycleModel_2,
            CellsGeneratorAlwaysDivideCellCycleModel_3,
            CellsGeneratorBernoulliTrialCellCycleModel_2,
            CellsGeneratorBernoulliTrialCellCycleModel_3,
            CellsGeneratorBiasedBernoulliTrialCellCycleModel_2,
            CellsGeneratorBiasedBernoulliTrialCellCycleModel_3,
            CellsGeneratorContactInhibitionCellCycleModel_2,
            CellsGeneratorContactInhibitionCellCycleModel_3,
            CellsGeneratorExponentialG1GenerationalCellCycleModel_2,
            CellsGeneratorExponentialG1GenerationalCellCycleModel_3,
            CellsGeneratorFixedG1GenerationalCellCycleModel_2,
            CellsGeneratorFixedG1GenerationalCellCycleModel_3,
            CellsGeneratorFixedSequenceCellCycleModel_2,
            CellsGeneratorFixedSequenceCellCycleModel_3,
            CellsGeneratorGammaG1CellCycleModel_2,
            CellsGeneratorGammaG1CellCycleModel_3,
            CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_2,
            CellsGeneratorLabelDependentBernoulliTrialCellCycleModel_3,
            CellsGeneratorNoCellCycleModel_2,
            CellsGeneratorNoCellCycleModel_3,
            CellsGeneratorSimpleOxygenBasedCellCycleModel_2,
            CellsGeneratorSimpleOxygenBasedCellCycleModel_3,
            CellsGeneratorStochasticOxygenBasedCellCycleModel_2,
            CellsGeneratorStochasticOxygenBasedCellCycleModel_3,
            CellsGeneratorTysonNovakCellCycleModel_2,
            CellsGeneratorTysonNovakCellCycleModel_3,
            CellsGeneratorUniformCellCycleModel_2,
            CellsGeneratorUniformCellCycleModel_3,
            CellsGeneratorUniformG1GenerationalCellCycleModel_2,
            CellsGeneratorUniformG1GenerationalCellCycleModel_3,
            CellSrnModel,
            CellVolumesWriter2_2,
            CellVolumesWriter3_3,
            CellwiseSourceEllipticPde2,
            CellwiseSourceEllipticPde3,
            CellwiseSourceParabolicPde2,
            CellwiseSourceParabolicPde3,
            ChemotacticForce2,
            ChemotacticForce3,
            ChemotaxisPottsUpdateRule2,
            ChemotaxisPottsUpdateRule3,
            ContactInhibitionCellCycleModel,
            DefaultCellProliferativeType,
            DeltaNotchEdgeInteriorTrackingModifier2,
            DeltaNotchEdgeInteriorTrackingModifier3,
            DeltaNotchEdgeSrnModel,
            DeltaNotchInteriorSrnModel,
            DeltaNotchSrnModel,
            DeltaNotchTrackingModifier2,
            DeltaNotchTrackingModifier3,
            DifferentialAdhesionGeneralisedLinearSpringForce2_2,
            DifferentialAdhesionGeneralisedLinearSpringForce3_3,
            DifferentialAdhesionPottsUpdateRule2,
            DifferentialAdhesionPottsUpdateRule3,
            DifferentiatedCellProliferativeType,
            DiffusionCaUpdateRule2,
            DiffusionCaUpdateRule3,
            DiffusionForce2,
            DiffusionForce3,
            DivisionBiasTrackingModifier2,
            DivisionBiasTrackingModifier3,
            EllipticBoxDomainPdeModifier2,
            EllipticBoxDomainPdeModifier3,
            EllipticGrowingDomainPdeModifier2,
            EllipticGrowingDomainPdeModifier3,
            ExclusionCaBasedDivisionRule2,
            ExclusionCaBasedDivisionRule3,
            ExponentialG1GenerationalCellCycleModel,
            ExtrinsicPullModifier2,
            ExtrinsicPullModifier3,
            FarhadifarForce2,
            FarhadifarForce3,
            FixedCentreBasedDivisionRule2_2,
            FixedCentreBasedDivisionRule3_3,
            FixedG1GenerationalCellCycleModel,
            FixedSequenceCellCycleModel,
            FixedVertexBasedDivisionRule2,
            FixedVertexBasedDivisionRule3,
            ForwardEulerNumericalMethod2_2,
            ForwardEulerNumericalMethod3_3,
            GammaG1CellCycleModel,
            GeneralisedLinearSpringForce2_2,
            GeneralisedLinearSpringForce3_3,
            Goldbeter1991SrnModel,
            HeterotypicBoundaryLengthWriter2_2,
            HeterotypicBoundaryLengthWriter3_3,
            ImmersedBoundaryBoundaryCellWriter2_2,
            ImmersedBoundaryBoundaryCellWriter3_3,
            ImmersedBoundaryCellPopulation2,
            ImmersedBoundaryCellPopulation3,
            ImmersedBoundaryKinematicFeedbackForce2,
            ImmersedBoundaryKinematicFeedbackForce3,
            ImmersedBoundaryLinearDifferentialAdhesionForce2,
            ImmersedBoundaryLinearDifferentialAdhesionForce3,
            ImmersedBoundaryLinearInteractionForce2,
            ImmersedBoundaryLinearInteractionForce3,
            ImmersedBoundaryLinearMembraneForce2,
            ImmersedBoundaryLinearMembraneForce3,
            ImmersedBoundaryMorseInteractionForce2,
            ImmersedBoundaryMorseInteractionForce3,
            ImmersedBoundaryMorseMembraneForce2,
            ImmersedBoundaryMorseMembraneForce3,
            ImmersedBoundaryNeighbourNumberWriter2_2,
            ImmersedBoundaryNeighbourNumberWriter3_3,
            ImmersedBoundarySimulationModifier2,
            ImmersedBoundarySimulationModifier3,
            ImmersedBoundarySvgWriter2,
            ImmersedBoundarySvgWriter3,
            IsolatedLabelledCellKiller2,
            IsolatedLabelledCellKiller3,
            LabelDependentBernoulliTrialCellCycleModel,
            LegacyCellProliferativeTypesWriter2_2,
            LegacyCellProliferativeTypesWriter3_3,
            MeshBasedCellPopulation2_2,
            MeshBasedCellPopulation3_3,
            MeshBasedCellPopulationWithGhostNodes2,
            MeshBasedCellPopulationWithGhostNodes3,
            NagaiHondaDifferentialAdhesionForce2,
            NagaiHondaDifferentialAdhesionForce3,
            NagaiHondaForce2,
            NagaiHondaForce3,
            NoCellCycleModel,
            NodeBasedCellPopulation2,
            NodeBasedCellPopulation3,
            NodeBasedCellPopulationWithBuskeUpdate2,
            NodeBasedCellPopulationWithBuskeUpdate3,
            NodeBasedCellPopulationWithParticles2,
            NodeBasedCellPopulationWithParticles3,
            NodeLocationWriter2_2,
            NodeLocationWriter3_3,
            NodeVelocityWriter2_2,
            NodeVelocityWriter3_3,
            NormallyDistributedTargetAreaModifier2,
            NormallyDistributedTargetAreaModifier3,
            NullSrnModel,
            OffLatticeSimulation2_2,
            OffLatticeSimulation3_3,
            OnLatticeSimulation2,
            OnLatticeSimulation3,
            ParabolicBoxDomainPdeModifier2,
            ParabolicBoxDomainPdeModifier3,
            ParabolicGrowingDomainPdeModifier2,
            ParabolicGrowingDomainPdeModifier3,
            PlanarPolarisedFarhadifarForce2,
            PlanarPolarisedFarhadifarForce3,
            PlaneBasedCellKiller2,
            PlaneBasedCellKiller3,
            PlaneBoundaryCondition2_2,
            PlaneBoundaryCondition3_3,
            PottsBasedCellPopulation2,
            PottsBasedCellPopulation3,
            PottsMeshWriter2,
            PottsMeshWriter3,
            PythonSimulationModifier2,
            PythonSimulationModifier3,
            RadialCellDataDistributionWriter2_2,
            RadialCellDataDistributionWriter3_3,
            RandomCaSwitchingUpdateRule2,
            RandomCaSwitchingUpdateRule3,
            RandomCellKiller2,
            RandomCellKiller3,
            RandomDirectionCentreBasedDivisionRule2_2,
            RandomDirectionCentreBasedDivisionRule3_3,
            RandomDirectionVertexBasedDivisionRule2,
            RandomDirectionVertexBasedDivisionRule3,
            RepulsionForce2,
            RepulsionForce3,
            ShortAxisImmersedBoundaryDivisionRule2,
            ShortAxisImmersedBoundaryDivisionRule3,
            ShortAxisVertexBasedDivisionRule2,
            ShortAxisVertexBasedDivisionRule3,
            ShovingCaBasedDivisionRule2,
            ShovingCaBasedDivisionRule3,
            SimpleOxygenBasedCellCycleModel,
            SimpleTargetAreaModifier2,
            SimpleTargetAreaModifier3,
            SimulationTime,
            SlidingBoundaryCondition2,
            SlidingBoundaryCondition3,
            SphereGeometryBoundaryCondition2,
            SphereGeometryBoundaryCondition3,
            StemCellProliferativeType,
            StochasticOxygenBasedCellCycleModel,
            SurfaceAreaConstraintPottsUpdateRule2,
            SurfaceAreaConstraintPottsUpdateRule3,
            T2SwapCellKiller2,
            T2SwapCellKiller3,
            TargetAreaLinearGrowthModifier2,
            TargetAreaLinearGrowthModifier3,
            TargetedCellKiller2,
            TargetedCellKiller3,
            TransitCellProliferativeType,
            TysonNovakCellCycleModel,
            UniformCellCycleModel,
            UniformG1GenerationalCellCycleModel,
            UniformSourceEllipticPde2,
            UniformSourceEllipticPde3,
            UniformSourceParabolicPde2,
            UniformSourceParabolicPde3,
            VertexBasedCellPopulation2,
            VertexBasedCellPopulation3,
            VertexBasedPopulationSrn2,
            VertexBasedPopulationSrn3,
            VertexIntersectionSwapLocationsWriter2_2,
            VertexIntersectionSwapLocationsWriter3_3,
            VertexT1SwapLocationsWriter2_2,
            VertexT1SwapLocationsWriter3_3,
            VertexT2SwapLocationsWriter2_2,
            VertexT2SwapLocationsWriter3_3,
            VertexT3SwapLocationsWriter2_2,
            VertexT3SwapLocationsWriter3_3,
            VolumeConstraintPottsUpdateRule2,
            VolumeConstraintPottsUpdateRule3,
            VolumeDependentAveragedSourceEllipticPde2,
            VolumeDependentAveragedSourceEllipticPde3,
            VolumeTrackingModifier2,
            VolumeTrackingModifier3,
            VonMisesVertexBasedDivisionRule2,
            VonMisesVertexBasedDivisionRule3,
            VoronoiDataWriter2_2,
            VoronoiDataWriter3_3,
            VtkSceneModifier2,
            VtkSceneModifier3,
            WelikyOsterForce2,
            WelikyOsterForce3,
            WildTypeCellMutationState,
        )

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
        from chaste.pde import (
            AbstractBoundaryCondition2,
            AbstractBoundaryCondition3,
            AbstractLinearEllipticPde2_2,
            AbstractLinearEllipticPde3_3,
            AbstractLinearParabolicPde2_2,
            AbstractLinearParabolicPde3_3,
            AbstractLinearParabolicPdeSystemForCoupledOdeSystem2_2_1,
            AbstractLinearParabolicPdeSystemForCoupledOdeSystem3_3_1,
            AbstractLinearPde2_2,
            AbstractLinearPde3_3,
            AbstractNonlinearEllipticPde2,
            AbstractNonlinearEllipticPde3,
            ConstBoundaryCondition2,
            ConstBoundaryCondition3,
            PdeSimulationTime,
        )

    def test_visualization_imports(self):
        import chaste

        chaste.init()

        import chaste.visualization
        from chaste.visualization import (
            AbstractPyChasteActorGenerator2,
            AbstractPyChasteActorGenerator3,
            CellPopulationPyChasteActorGenerator2,
            CellPopulationPyChasteActorGenerator3,
            JupyterNotebookManager,
            VtkScene2,
            VtkScene3,
        )


if __name__ == "__main__":
    unittest.main()
