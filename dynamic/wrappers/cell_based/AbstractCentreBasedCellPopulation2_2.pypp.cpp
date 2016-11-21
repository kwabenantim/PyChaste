// This file has been generated by Py++.


/*

Copyright (c) 2005-2016, University of Oxford.
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

*/

#include "boost/python.hpp"
#include "cell_based_headers.hpp"
#include "AbstractCentreBasedCellPopulation2_2.pypp.hpp"

namespace bp = boost::python;

struct AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper : AbstractCentreBasedCellPopulation< 2, 2 >, bp::wrapper< AbstractCentreBasedCellPopulation< 2, 2 > > {

    virtual void AcceptCellWritersAcrossPopulation(  ){
        if( bp::override func_AcceptCellWritersAcrossPopulation = this->get_override( "AcceptCellWritersAcrossPopulation" ) )
            func_AcceptCellWritersAcrossPopulation(  );
        else{
            this->AbstractCentreBasedCellPopulation< 2, 2 >::AcceptCellWritersAcrossPopulation(  );
        }
    }
    
    virtual void default_AcceptCellWritersAcrossPopulation(  ){
        AbstractCentreBasedCellPopulation< 2, 2 >::AcceptCellWritersAcrossPopulation( );
    }

    virtual ::CellPtr AddCell( ::CellPtr pNewCell, ::CellPtr pParentCell=::boost::shared_ptr<Cell>( ) ) {
        if( bp::override func_AddCell = this->get_override( "AddCell" ) )
            return func_AddCell( pNewCell, pParentCell );
        else{
            return this->AbstractCentreBasedCellPopulation< 2, 2 >::AddCell( pNewCell, pParentCell );
        }
    }
    
    ::CellPtr default_AddCell( ::CellPtr pNewCell, ::CellPtr pParentCell=::boost::shared_ptr<Cell>( ) ) {
        return AbstractCentreBasedCellPopulation< 2, 2 >::AddCell( pNewCell, pParentCell );
    }

    virtual void CheckForStepSizeException( unsigned int nodeIndex, ::boost::numeric::ublas::c_vector< double, 2 > & rDisplacement, double dt ) {
        if( bp::override func_CheckForStepSizeException = this->get_override( "CheckForStepSizeException" ) )
            func_CheckForStepSizeException( nodeIndex, boost::ref(rDisplacement), dt );
        else{
            this->AbstractCentreBasedCellPopulation< 2, 2 >::CheckForStepSizeException( nodeIndex, boost::ref(rDisplacement), dt );
        }
    }
    
    void default_CheckForStepSizeException( unsigned int nodeIndex, ::boost::numeric::ublas::c_vector< double, 2 > & rDisplacement, double dt ) {
        AbstractCentreBasedCellPopulation< 2, 2 >::CheckForStepSizeException( nodeIndex, boost::ref(rDisplacement), dt );
    }

    virtual double GetCellDataItemAtPdeNode( unsigned int pdeNodeIndex, ::std::string & rVariableName, bool dirichletBoundaryConditionApplies=false, double dirichletBoundaryValue=0. ) {
        if( bp::override func_GetCellDataItemAtPdeNode = this->get_override( "GetCellDataItemAtPdeNode" ) )
            return func_GetCellDataItemAtPdeNode( pdeNodeIndex, rVariableName, dirichletBoundaryConditionApplies, dirichletBoundaryValue );
        else{
            return this->AbstractCentreBasedCellPopulation< 2, 2 >::GetCellDataItemAtPdeNode( pdeNodeIndex, rVariableName, dirichletBoundaryConditionApplies, dirichletBoundaryValue );
        }
    }
    
    double default_GetCellDataItemAtPdeNode( unsigned int pdeNodeIndex, ::std::string & rVariableName, bool dirichletBoundaryConditionApplies=false, double dirichletBoundaryValue=0. ) {
        return AbstractCentreBasedCellPopulation< 2, 2 >::GetCellDataItemAtPdeNode( pdeNodeIndex, rVariableName, dirichletBoundaryConditionApplies, dirichletBoundaryValue );
    }

    virtual double GetDampingConstant( unsigned int nodeIndex ) {
        if( bp::override func_GetDampingConstant = this->get_override( "GetDampingConstant" ) )
            return func_GetDampingConstant( nodeIndex );
        else{
            return this->AbstractCentreBasedCellPopulation< 2, 2 >::GetDampingConstant( nodeIndex );
        }
    }
    
    double default_GetDampingConstant( unsigned int nodeIndex ) {
        return AbstractCentreBasedCellPopulation< 2, 2 >::GetDampingConstant( nodeIndex );
    }

    virtual double GetDefaultTimeStep(  ) {
        if( bp::override func_GetDefaultTimeStep = this->get_override( "GetDefaultTimeStep" ) )
            return func_GetDefaultTimeStep(  );
        else{
            return this->AbstractCentreBasedCellPopulation< 2, 2 >::GetDefaultTimeStep(  );
        }
    }
    
    double default_GetDefaultTimeStep(  ) {
        return AbstractCentreBasedCellPopulation< 2, 2 >::GetDefaultTimeStep( );
    }

    virtual ::boost::numeric::ublas::c_vector< double, 2 > GetLocationOfCellCentre( ::CellPtr pCell ) {
        if( bp::override func_GetLocationOfCellCentre = this->get_override( "GetLocationOfCellCentre" ) )
            return func_GetLocationOfCellCentre( pCell );
        else{
            return this->AbstractCentreBasedCellPopulation< 2, 2 >::GetLocationOfCellCentre( pCell );
        }
    }
    
    ::boost::numeric::ublas::c_vector< double, 2 > default_GetLocationOfCellCentre( ::CellPtr pCell ) {
        return AbstractCentreBasedCellPopulation< 2, 2 >::GetLocationOfCellCentre( pCell );
    }

    virtual ::std::set< unsigned int > GetNeighbouringLocationIndices( ::CellPtr pCell ) {
        if( bp::override func_GetNeighbouringLocationIndices = this->get_override( "GetNeighbouringLocationIndices" ) )
            return func_GetNeighbouringLocationIndices( pCell );
        else{
            return this->AbstractCentreBasedCellPopulation< 2, 2 >::GetNeighbouringLocationIndices( pCell );
        }
    }
    
    ::std::set< unsigned int > default_GetNeighbouringLocationIndices( ::CellPtr pCell ) {
        return AbstractCentreBasedCellPopulation< 2, 2 >::GetNeighbouringLocationIndices( pCell );
    }

    virtual bool IsCellAssociatedWithADeletedLocation( ::CellPtr pCell ) {
        if( bp::override func_IsCellAssociatedWithADeletedLocation = this->get_override( "IsCellAssociatedWithADeletedLocation" ) )
            return func_IsCellAssociatedWithADeletedLocation( pCell );
        else{
            return this->AbstractCentreBasedCellPopulation< 2, 2 >::IsCellAssociatedWithADeletedLocation( pCell );
        }
    }
    
    bool default_IsCellAssociatedWithADeletedLocation( ::CellPtr pCell ) {
        return AbstractCentreBasedCellPopulation< 2, 2 >::IsCellAssociatedWithADeletedLocation( pCell );
    }

    virtual bool IsGhostNode( unsigned int index ) {
        if( bp::override func_IsGhostNode = this->get_override( "IsGhostNode" ) )
            return func_IsGhostNode( index );
        else{
            return this->AbstractCentreBasedCellPopulation< 2, 2 >::IsGhostNode( index );
        }
    }
    
    bool default_IsGhostNode( unsigned int index ) {
        return AbstractCentreBasedCellPopulation< 2, 2 >::IsGhostNode( index );
    }

    virtual bool IsParticle( unsigned int index ) {
        if( bp::override func_IsParticle = this->get_override( "IsParticle" ) )
            return func_IsParticle( index );
        else{
            return this->AbstractCentreBasedCellPopulation< 2, 2 >::IsParticle( index );
        }
    }
    
    bool default_IsParticle( unsigned int index ) {
        return AbstractCentreBasedCellPopulation< 2, 2 >::IsParticle( index );
    }

    virtual void OutputCellPopulationParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputCellPopulationParameters = this->get_override( "OutputCellPopulationParameters" ) )
            func_OutputCellPopulationParameters( boost::ref(rParamsFile) );
        else{
            this->AbstractCentreBasedCellPopulation< 2, 2 >::OutputCellPopulationParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputCellPopulationParameters( ::out_stream & rParamsFile ) {
        AbstractCentreBasedCellPopulation< 2, 2 >::OutputCellPopulationParameters( boost::ref(rParamsFile) );
    }

    virtual void WriteVtkResultsToFile( ::std::string const & rDirectory ){
        bp::override func_WriteVtkResultsToFile = this->get_override( "WriteVtkResultsToFile" );
        func_WriteVtkResultsToFile( rDirectory );
    }

    virtual ::std::vector< std::pair<Node<2> *, Node<2> *> > & rGetNodePairs(  ){
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual void AcceptCellWriter( ::boost::shared_ptr< AbstractCellWriter< 2, 2 > > pCellWriter, ::CellPtr pCell ){
        bp::override func_AcceptCellWriter = this->get_override( "AcceptCellWriter" );
        func_AcceptCellWriter( pCellWriter, pCell );
    }

    virtual void AcceptPopulationCountWriter( ::boost::shared_ptr< AbstractCellPopulationCountWriter< 2, 2 > > pPopulationCountWriter ){
        bp::override func_AcceptPopulationCountWriter = this->get_override( "AcceptPopulationCountWriter" );
        func_AcceptPopulationCountWriter( pPopulationCountWriter );
    }

    virtual void AcceptPopulationWriter( ::boost::shared_ptr< AbstractCellPopulationWriter< 2, 2 > > pPopulationWriter ){
        bp::override func_AcceptPopulationWriter = this->get_override( "AcceptPopulationWriter" );
        func_AcceptPopulationWriter( pPopulationWriter );
    }

    virtual void AddCellUsingLocationIndex( unsigned int index, ::CellPtr pCell ) {
        if( bp::override func_AddCellUsingLocationIndex = this->get_override( "AddCellUsingLocationIndex" ) )
            func_AddCellUsingLocationIndex( index, pCell );
        else{
            this->AbstractCellPopulation< 2, 2 >::AddCellUsingLocationIndex( index, pCell );
        }
    }
    
    void default_AddCellUsingLocationIndex( unsigned int index, ::CellPtr pCell ) {
        AbstractCellPopulation< 2, 2 >::AddCellUsingLocationIndex( index, pCell );
    }

    virtual unsigned int AddNode( ::Node< 2 > * pNewNode ){
        bp::override func_AddNode = this->get_override( "AddNode" );
        return func_AddNode( boost::python::ptr(pNewNode) );
    }

    virtual ::CellPtr GetCellUsingLocationIndex( unsigned int index ) {
        if( bp::override func_GetCellUsingLocationIndex = this->get_override( "GetCellUsingLocationIndex" ) )
            return func_GetCellUsingLocationIndex( index );
        else{
            return this->AbstractCellPopulation< 2, 2 >::GetCellUsingLocationIndex( index );
        }
    }
    
    ::CellPtr default_GetCellUsingLocationIndex( unsigned int index ) {
        return AbstractCellPopulation< 2, 2 >::GetCellUsingLocationIndex( index );
    }

    virtual ::std::set< unsigned int > GetNeighbouringNodeIndices( unsigned int index ){
        bp::override func_GetNeighbouringNodeIndices = this->get_override( "GetNeighbouringNodeIndices" );
        return func_GetNeighbouringNodeIndices( index );
    }

    virtual ::Node< 2 > * GetNode( unsigned int index ){
        bp::override func_GetNode = this->get_override( "GetNode" );
        return func_GetNode( index );
    }

    virtual unsigned int GetNumNodes(  ){
        bp::override func_GetNumNodes = this->get_override( "GetNumNodes" );
        return func_GetNumNodes(  );
    }

    virtual ::TetrahedralMesh< 2, 2 > * GetTetrahedralMeshForPdeModifier(  ){
        bp::override func_GetTetrahedralMeshForPdeModifier = this->get_override( "GetTetrahedralMeshForPdeModifier" );
        return func_GetTetrahedralMeshForPdeModifier(  );
    }

    virtual double GetVolumeOfCell( ::CellPtr pCell ){
        bp::override func_GetVolumeOfCell = this->get_override( "GetVolumeOfCell" );
        return func_GetVolumeOfCell( pCell );
    }

    virtual double GetWidth( unsigned int const & rDimension ){
        bp::override func_GetWidth = this->get_override( "GetWidth" );
        return func_GetWidth( rDimension );
    }

    virtual bool IsCellAttachedToLocationIndex( unsigned int index ) {
        if( bp::override func_IsCellAttachedToLocationIndex = this->get_override( "IsCellAttachedToLocationIndex" ) )
            return func_IsCellAttachedToLocationIndex( index );
        else{
            return this->AbstractCellPopulation< 2, 2 >::IsCellAttachedToLocationIndex( index );
        }
    }
    
    bool default_IsCellAttachedToLocationIndex( unsigned int index ) {
        return AbstractCellPopulation< 2, 2 >::IsCellAttachedToLocationIndex( index );
    }

    virtual bool IsPdeNodeAssociatedWithNonApoptoticCell( unsigned int pdeNodeIndex ) {
        if( bp::override func_IsPdeNodeAssociatedWithNonApoptoticCell = this->get_override( "IsPdeNodeAssociatedWithNonApoptoticCell" ) )
            return func_IsPdeNodeAssociatedWithNonApoptoticCell( pdeNodeIndex );
        else{
            return this->AbstractCellPopulation< 2, 2 >::IsPdeNodeAssociatedWithNonApoptoticCell( pdeNodeIndex );
        }
    }
    
    bool default_IsPdeNodeAssociatedWithNonApoptoticCell( unsigned int pdeNodeIndex ) {
        return AbstractCellPopulation< 2, 2 >::IsPdeNodeAssociatedWithNonApoptoticCell( pdeNodeIndex );
    }

    virtual bool IsRoomToDivide( ::CellPtr pCell ) {
        if( bp::override func_IsRoomToDivide = this->get_override( "IsRoomToDivide" ) )
            return func_IsRoomToDivide( pCell );
        else{
            return this->AbstractCellPopulation< 2, 2 >::IsRoomToDivide( pCell );
        }
    }
    
    bool default_IsRoomToDivide( ::CellPtr pCell ) {
        return AbstractCellPopulation< 2, 2 >::IsRoomToDivide( pCell );
    }

    virtual void OpenWritersFiles( ::OutputFileHandler & rOutputFileHandler ) {
        if( bp::override func_OpenWritersFiles = this->get_override( "OpenWritersFiles" ) )
            func_OpenWritersFiles( boost::ref(rOutputFileHandler) );
        else{
            this->AbstractCellPopulation< 2, 2 >::OpenWritersFiles( boost::ref(rOutputFileHandler) );
        }
    }
    
    void default_OpenWritersFiles( ::OutputFileHandler & rOutputFileHandler ) {
        AbstractCellPopulation< 2, 2 >::OpenWritersFiles( boost::ref(rOutputFileHandler) );
    }

    virtual void RemoveCellUsingLocationIndex( unsigned int index, ::CellPtr pCell ) {
        if( bp::override func_RemoveCellUsingLocationIndex = this->get_override( "RemoveCellUsingLocationIndex" ) )
            func_RemoveCellUsingLocationIndex( index, pCell );
        else{
            this->AbstractCellPopulation< 2, 2 >::RemoveCellUsingLocationIndex( index, pCell );
        }
    }
    
    void default_RemoveCellUsingLocationIndex( unsigned int index, ::CellPtr pCell ) {
        AbstractCellPopulation< 2, 2 >::RemoveCellUsingLocationIndex( index, pCell );
    }

    virtual unsigned int RemoveDeadCells(  ){
        bp::override func_RemoveDeadCells = this->get_override( "RemoveDeadCells" );
        return func_RemoveDeadCells(  );
    }

    virtual void SetNode( unsigned int nodeIndex, ::ChastePoint< 2 > & rNewLocation ){
        bp::override func_SetNode = this->get_override( "SetNode" );
        func_SetNode( nodeIndex, boost::ref(rNewLocation) );
    }

    virtual void SimulationSetupHook( ::AbstractCellBasedSimulation< 2, 2 > * pSimulation ) {
        if( bp::override func_SimulationSetupHook = this->get_override( "SimulationSetupHook" ) )
            func_SimulationSetupHook( boost::python::ptr(pSimulation) );
        else{
            this->AbstractCellPopulation< 2, 2 >::SimulationSetupHook( boost::python::ptr(pSimulation) );
        }
    }
    
    void default_SimulationSetupHook( ::AbstractCellBasedSimulation< 2, 2 > * pSimulation ) {
        AbstractCellPopulation< 2, 2 >::SimulationSetupHook( boost::python::ptr(pSimulation) );
    }

    virtual void Update( bool hasHadBirthsOrDeaths=true ){
        bp::override func_Update = this->get_override( "Update" );
        func_Update( hasHadBirthsOrDeaths );
    }

    virtual void UpdateCellProcessLocation(  ) {
        if( bp::override func_UpdateCellProcessLocation = this->get_override( "UpdateCellProcessLocation" ) )
            func_UpdateCellProcessLocation(  );
        else{
            this->AbstractCellPopulation< 2, 2 >::UpdateCellProcessLocation(  );
        }
    }
    
    void default_UpdateCellProcessLocation(  ) {
        AbstractCellPopulation< 2, 2 >::UpdateCellProcessLocation( );
    }

    virtual void UpdateNodeLocations( double dt ) {
        if( bp::override func_UpdateNodeLocations = this->get_override( "UpdateNodeLocations" ) )
            func_UpdateNodeLocations( dt );
        else{
            this->AbstractOffLatticeCellPopulation< 2, 2 >::UpdateNodeLocations( dt );
        }
    }
    
    void default_UpdateNodeLocations( double dt ) {
        AbstractOffLatticeCellPopulation< 2, 2 >::UpdateNodeLocations( dt );
    }

    virtual void Validate(  ){
        bp::override func_Validate = this->get_override( "Validate" );
        func_Validate(  );
    }

    virtual void WriteDataToVisualizerSetupFile( ::out_stream & pVizSetupFile ) {
        if( bp::override func_WriteDataToVisualizerSetupFile = this->get_override( "WriteDataToVisualizerSetupFile" ) )
            func_WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
        else{
            this->AbstractCellPopulation< 2, 2 >::WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
        }
    }
    
    void default_WriteDataToVisualizerSetupFile( ::out_stream & pVizSetupFile ) {
        AbstractCellPopulation< 2, 2 >::WriteDataToVisualizerSetupFile( boost::ref(pVizSetupFile) );
    }

    virtual void WriteResultsToFiles( ::std::string const & rDirectory ) {
        if( bp::override func_WriteResultsToFiles = this->get_override( "WriteResultsToFiles" ) )
            func_WriteResultsToFiles( rDirectory );
        else{
            this->AbstractCellPopulation< 2, 2 >::WriteResultsToFiles( rDirectory );
        }
    }
    
    void default_WriteResultsToFiles( ::std::string const & rDirectory ) {
        AbstractCellPopulation< 2, 2 >::WriteResultsToFiles( rDirectory );
    }

};

void register_AbstractCentreBasedCellPopulation2_2_class(){

    bp::class_< AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper, bp::bases< AbstractOffLatticeCellPopulation< 2, 2 > >, boost::noncopyable >( "AbstractCentreBasedCellPopulation2_2", bp::no_init )    
        .def( 
            "AcceptCellWritersAcrossPopulation"
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_AcceptCellWritersAcrossPopulation) )    
        .def( 
            "AddCell"
            , (::CellPtr ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( ::CellPtr,::CellPtr ))(&::AbstractCentreBasedCellPopulation< 2, 2 >::AddCell)
            , (::CellPtr ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( ::CellPtr,::CellPtr ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_AddCell)
            , ( bp::arg("pNewCell"), bp::arg("pParentCell")=::boost::shared_ptr<Cell>( ) ) )    
        .def( 
            "CheckForStepSizeException"
            , (void ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( unsigned int,::boost::numeric::ublas::c_vector< double, 2 > &,double ))(&::AbstractCentreBasedCellPopulation< 2, 2 >::CheckForStepSizeException)
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( unsigned int,::boost::numeric::ublas::c_vector< double, 2 > &,double ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_CheckForStepSizeException)
            , ( bp::arg("nodeIndex"), bp::arg("rDisplacement"), bp::arg("dt") ) )    
        .def( 
            "CreateCellPair"
            , (::std::pair< boost::shared_ptr< Cell >, boost::shared_ptr< Cell > > ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( ::CellPtr,::CellPtr ))( &::AbstractCentreBasedCellPopulation< 2, 2 >::CreateCellPair )
            , ( bp::arg("pCell1"), bp::arg("pCell2") ) )    
        .def( 
            "GetCellDataItemAtPdeNode"
            , (double ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( unsigned int,::std::string &,bool,double ))(&::AbstractCentreBasedCellPopulation< 2, 2 >::GetCellDataItemAtPdeNode)
            , (double ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( unsigned int,::std::string &,bool,double ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_GetCellDataItemAtPdeNode)
            , ( bp::arg("pdeNodeIndex"), bp::arg("rVariableName"), bp::arg("dirichletBoundaryConditionApplies")=(bool)(false), bp::arg("dirichletBoundaryValue")=0. ) )    
        .def( 
            "GetCentreBasedDivisionRule"
            , (::boost::shared_ptr< AbstractCentreBasedDivisionRule< 2, 2 > > ( ::AbstractCentreBasedCellPopulation<2, 2>::* )(  ))( &::AbstractCentreBasedCellPopulation< 2, 2 >::GetCentreBasedDivisionRule ) )    
        .def( 
            "GetDampingConstant"
            , (double ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( unsigned int ))(&::AbstractCentreBasedCellPopulation< 2, 2 >::GetDampingConstant)
            , (double ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( unsigned int ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_GetDampingConstant)
            , ( bp::arg("nodeIndex") ) )    
        .def( 
            "GetDefaultTimeStep"
            , (double ( ::AbstractCentreBasedCellPopulation<2, 2>::* )(  ))(&::AbstractCentreBasedCellPopulation< 2, 2 >::GetDefaultTimeStep)
            , (double ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_GetDefaultTimeStep) )    
        .def( 
            "GetLocationOfCellCentre"
            , (::boost::numeric::ublas::c_vector< double, 2 > ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( ::CellPtr ))(&::AbstractCentreBasedCellPopulation< 2, 2 >::GetLocationOfCellCentre)
            , (::boost::numeric::ublas::c_vector< double, 2 > ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( ::CellPtr ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_GetLocationOfCellCentre)
            , ( bp::arg("pCell") ) )    
        .def( 
            "GetMeinekeDivisionSeparation"
            , (double ( ::AbstractCentreBasedCellPopulation<2, 2>::* )(  ))( &::AbstractCentreBasedCellPopulation< 2, 2 >::GetMeinekeDivisionSeparation ) )    
        .def( 
            "GetNeighbouringLocationIndices"
            , (::std::set< unsigned int > ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( ::CellPtr ))(&::AbstractCentreBasedCellPopulation< 2, 2 >::GetNeighbouringLocationIndices)
            , (::std::set< unsigned int > ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( ::CellPtr ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_GetNeighbouringLocationIndices)
            , ( bp::arg("pCell") ) )    
        .def( 
            "IsCellAssociatedWithADeletedLocation"
            , (bool ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( ::CellPtr ))(&::AbstractCentreBasedCellPopulation< 2, 2 >::IsCellAssociatedWithADeletedLocation)
            , (bool ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( ::CellPtr ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_IsCellAssociatedWithADeletedLocation)
            , ( bp::arg("pCell") ) )    
        .def( 
            "IsGhostNode"
            , (bool ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( unsigned int ))(&::AbstractCentreBasedCellPopulation< 2, 2 >::IsGhostNode)
            , (bool ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( unsigned int ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_IsGhostNode)
            , ( bp::arg("index") ) )    
        .def( 
            "IsMarkedSpring"
            , (bool ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( ::std::pair< boost::shared_ptr< Cell >, boost::shared_ptr< Cell > > const & ))( &::AbstractCentreBasedCellPopulation< 2, 2 >::IsMarkedSpring )
            , ( bp::arg("rCellPair") ) )    
        .def( 
            "IsParticle"
            , (bool ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( unsigned int ))(&::AbstractCentreBasedCellPopulation< 2, 2 >::IsParticle)
            , (bool ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( unsigned int ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_IsParticle)
            , ( bp::arg("index") ) )    
        .def( 
            "MarkSpring"
            , (void ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( ::std::pair< boost::shared_ptr< Cell >, boost::shared_ptr< Cell > > & ))( &::AbstractCentreBasedCellPopulation< 2, 2 >::MarkSpring )
            , ( bp::arg("rCellPair") ) )    
        .def( 
            "OutputCellPopulationParameters"
            , (void ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( ::out_stream & ))(&::AbstractCentreBasedCellPopulation< 2, 2 >::OutputCellPopulationParameters)
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( ::out_stream & ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_OutputCellPopulationParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetCentreBasedDivisionRule"
            , (void ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( ::boost::shared_ptr< AbstractCentreBasedDivisionRule< 2, 2 > > ))( &::AbstractCentreBasedCellPopulation< 2, 2 >::SetCentreBasedDivisionRule )
            , ( bp::arg("pCentreBasedDivisionRule") ) )    
        .def( 
            "SetMeinekeDivisionSeparation"
            , (void ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( double ))( &::AbstractCentreBasedCellPopulation< 2, 2 >::SetMeinekeDivisionSeparation )
            , ( bp::arg("divisionSeparation") ) )    
        .def( 
            "UnmarkSpring"
            , (void ( ::AbstractCentreBasedCellPopulation<2, 2>::* )( ::std::pair< boost::shared_ptr< Cell >, boost::shared_ptr< Cell > > & ))( &::AbstractCentreBasedCellPopulation< 2, 2 >::UnmarkSpring )
            , ( bp::arg("rCellPair") ) )    
        .def( 
            "WriteVtkResultsToFile"
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( ::std::string const & ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::WriteVtkResultsToFile)
            , ( bp::arg("rDirectory") ) )    
        .def( 
            "AcceptCellWriter"
            , bp::pure_virtual( (void ( ::AbstractCellPopulation<2, 2>::* )( ::boost::shared_ptr< AbstractCellWriter< 2, 2 > >,::CellPtr ))(&::AbstractCellPopulation< 2, 2 >::AcceptCellWriter) )
            , ( bp::arg("pCellWriter"), bp::arg("pCell") ) )    
        .def( 
            "AcceptPopulationCountWriter"
            , bp::pure_virtual( (void ( ::AbstractCellPopulation<2, 2>::* )( ::boost::shared_ptr< AbstractCellPopulationCountWriter< 2, 2 > > ))(&::AbstractCellPopulation< 2, 2 >::AcceptPopulationCountWriter) )
            , ( bp::arg("pPopulationCountWriter") ) )    
        .def( 
            "AcceptPopulationWriter"
            , bp::pure_virtual( (void ( ::AbstractCellPopulation<2, 2>::* )( ::boost::shared_ptr< AbstractCellPopulationWriter< 2, 2 > > ))(&::AbstractCellPopulation< 2, 2 >::AcceptPopulationWriter) )
            , ( bp::arg("pPopulationWriter") ) )    
        .def( 
            "AddCellUsingLocationIndex"
            , (void ( ::AbstractCellPopulation<2, 2>::* )( unsigned int,::CellPtr ))(&::AbstractCellPopulation< 2, 2 >::AddCellUsingLocationIndex)
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( unsigned int,::CellPtr ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_AddCellUsingLocationIndex)
            , ( bp::arg("index"), bp::arg("pCell") ) )    
        .def( 
            "AddNode"
            , bp::pure_virtual( (unsigned int ( ::AbstractOffLatticeCellPopulation<2, 2>::* )( ::Node< 2 > * ))(&::AbstractOffLatticeCellPopulation< 2, 2 >::AddNode) )
            , ( bp::arg("pNewNode") ) )    
        .def( 
            "GetCellUsingLocationIndex"
            , (::CellPtr ( ::AbstractCellPopulation<2, 2>::* )( unsigned int ))(&::AbstractCellPopulation< 2, 2 >::GetCellUsingLocationIndex)
            , (::CellPtr ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( unsigned int ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_GetCellUsingLocationIndex)
            , ( bp::arg("index") ) )    
        .def( 
            "GetNeighbouringNodeIndices"
            , bp::pure_virtual( (::std::set< unsigned int > ( ::AbstractCellPopulation<2, 2>::* )( unsigned int ))(&::AbstractCellPopulation< 2, 2 >::GetNeighbouringNodeIndices) )
            , ( bp::arg("index") ) )    
        .def( 
            "GetNumNodes"
            , bp::pure_virtual( (unsigned int ( ::AbstractCellPopulation<2, 2>::* )(  ))(&::AbstractCellPopulation< 2, 2 >::GetNumNodes) ) )    
        .def( 
            "GetVolumeOfCell"
            , bp::pure_virtual( (double ( ::AbstractCellPopulation<2, 2>::* )( ::CellPtr ))(&::AbstractCellPopulation< 2, 2 >::GetVolumeOfCell) )
            , ( bp::arg("pCell") ) )    
        .def( 
            "GetWidth"
            , bp::pure_virtual( (double ( ::AbstractCellPopulation<2, 2>::* )( unsigned int const & ))(&::AbstractCellPopulation< 2, 2 >::GetWidth) )
            , ( bp::arg("rDimension") ) )    
        .def( 
            "IsCellAttachedToLocationIndex"
            , (bool ( ::AbstractCellPopulation<2, 2>::* )( unsigned int ))(&::AbstractCellPopulation< 2, 2 >::IsCellAttachedToLocationIndex)
            , (bool ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( unsigned int ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_IsCellAttachedToLocationIndex)
            , ( bp::arg("index") ) )    
        .def( 
            "IsPdeNodeAssociatedWithNonApoptoticCell"
            , (bool ( ::AbstractCellPopulation<2, 2>::* )( unsigned int ))(&::AbstractCellPopulation< 2, 2 >::IsPdeNodeAssociatedWithNonApoptoticCell)
            , (bool ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( unsigned int ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_IsPdeNodeAssociatedWithNonApoptoticCell)
            , ( bp::arg("pdeNodeIndex") ) )    
        .def( 
            "IsRoomToDivide"
            , (bool ( ::AbstractCellPopulation<2, 2>::* )( ::CellPtr ))(&::AbstractCellPopulation< 2, 2 >::IsRoomToDivide)
            , (bool ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( ::CellPtr ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_IsRoomToDivide)
            , ( bp::arg("pCell") ) )    
        .def( 
            "OpenWritersFiles"
            , (void ( ::AbstractCellPopulation<2, 2>::* )( ::OutputFileHandler & ))(&::AbstractCellPopulation< 2, 2 >::OpenWritersFiles)
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( ::OutputFileHandler & ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_OpenWritersFiles)
            , ( bp::arg("rOutputFileHandler") ) )    
        .def( 
            "RemoveCellUsingLocationIndex"
            , (void ( ::AbstractCellPopulation<2, 2>::* )( unsigned int,::CellPtr ))(&::AbstractCellPopulation< 2, 2 >::RemoveCellUsingLocationIndex)
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( unsigned int,::CellPtr ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_RemoveCellUsingLocationIndex)
            , ( bp::arg("index"), bp::arg("pCell") ) )    
        .def( 
            "RemoveDeadCells"
            , bp::pure_virtual( (unsigned int ( ::AbstractCellPopulation<2, 2>::* )(  ))(&::AbstractCellPopulation< 2, 2 >::RemoveDeadCells) ) )    
        .def( 
            "SetNode"
            , bp::pure_virtual( (void ( ::AbstractOffLatticeCellPopulation<2, 2>::* )( unsigned int,::ChastePoint< 2 > & ))(&::AbstractOffLatticeCellPopulation< 2, 2 >::SetNode) )
            , ( bp::arg("nodeIndex"), bp::arg("rNewLocation") ) )    
        .def( 
            "SimulationSetupHook"
            , (void ( ::AbstractCellPopulation<2, 2>::* )( ::AbstractCellBasedSimulation< 2, 2 > * ))(&::AbstractCellPopulation< 2, 2 >::SimulationSetupHook)
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( ::AbstractCellBasedSimulation< 2, 2 > * ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_SimulationSetupHook)
            , ( bp::arg("pSimulation") ) )    
        .def( 
            "Update"
            , bp::pure_virtual( (void ( ::AbstractCellPopulation<2, 2>::* )( bool ))(&::AbstractCellPopulation< 2, 2 >::Update) )
            , ( bp::arg("hasHadBirthsOrDeaths")=(bool)(true) ) )    
        .def( 
            "UpdateCellProcessLocation"
            , (void ( ::AbstractCellPopulation<2, 2>::* )(  ))(&::AbstractCellPopulation< 2, 2 >::UpdateCellProcessLocation)
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_UpdateCellProcessLocation) )    
        .def( 
            "UpdateNodeLocations"
            , (void ( ::AbstractOffLatticeCellPopulation<2, 2>::* )( double ))(&::AbstractOffLatticeCellPopulation< 2, 2 >::UpdateNodeLocations)
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( double ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_UpdateNodeLocations)
            , ( bp::arg("dt") ) )    
        .def( 
            "Validate"
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )(  ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::Validate) )    
        .def( 
            "WriteDataToVisualizerSetupFile"
            , (void ( ::AbstractCellPopulation<2, 2>::* )( ::out_stream & ))(&::AbstractCellPopulation< 2, 2 >::WriteDataToVisualizerSetupFile)
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( ::out_stream & ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_WriteDataToVisualizerSetupFile)
            , ( bp::arg("pVizSetupFile") ) )    
        .def( 
            "WriteResultsToFiles"
            , (void ( ::AbstractCellPopulation<2, 2>::* )( ::std::string const & ))(&::AbstractCellPopulation< 2, 2 >::WriteResultsToFiles)
            , (void ( AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::* )( ::std::string const & ))(&AbstractCentreBasedCellPopulation_less__2_comma__2__greater__wrapper::default_WriteResultsToFiles)
            , ( bp::arg("rDirectory") ) );

}
