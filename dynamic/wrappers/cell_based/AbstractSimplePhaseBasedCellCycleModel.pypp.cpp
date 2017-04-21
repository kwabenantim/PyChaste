// This file has been generated by Py++.


/*

Copyright (c) 2005-2017, University of Oxford.
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
#include "wrapper_header_collection.hpp"
#include "AbstractSimplePhaseBasedCellCycleModel.pypp.hpp"

namespace bp = boost::python;

struct AbstractSimplePhaseBasedCellCycleModel_wrapper : AbstractSimplePhaseBasedCellCycleModel, bp::wrapper< AbstractSimplePhaseBasedCellCycleModel > {

    AbstractSimplePhaseBasedCellCycleModel_wrapper(::AbstractSimplePhaseBasedCellCycleModel const & rModel )
    : AbstractSimplePhaseBasedCellCycleModel( boost::ref(rModel) )
      , bp::wrapper< AbstractSimplePhaseBasedCellCycleModel >(){
        // copy constructor
    
    }

    AbstractSimplePhaseBasedCellCycleModel_wrapper( )
    : AbstractSimplePhaseBasedCellCycleModel( )
      , bp::wrapper< AbstractSimplePhaseBasedCellCycleModel >(){
        // null constructor
    
    }

    virtual void Initialise(  ) {
        if( bp::override func_Initialise = this->get_override( "Initialise" ) )
            func_Initialise(  );
        else{
            this->AbstractSimplePhaseBasedCellCycleModel::Initialise(  );
        }
    }
    
    void default_Initialise(  ) {
        AbstractSimplePhaseBasedCellCycleModel::Initialise( );
    }

    virtual void InitialiseDaughterCell(  ) {
        if( bp::override func_InitialiseDaughterCell = this->get_override( "InitialiseDaughterCell" ) )
            func_InitialiseDaughterCell(  );
        else{
            this->AbstractSimplePhaseBasedCellCycleModel::InitialiseDaughterCell(  );
        }
    }
    
    void default_InitialiseDaughterCell(  ) {
        AbstractSimplePhaseBasedCellCycleModel::InitialiseDaughterCell( );
    }

    virtual void OutputCellCycleModelParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputCellCycleModelParameters = this->get_override( "OutputCellCycleModelParameters" ) )
            func_OutputCellCycleModelParameters( boost::ref(rParamsFile) );
        else{
            this->AbstractSimplePhaseBasedCellCycleModel::OutputCellCycleModelParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputCellCycleModelParameters( ::out_stream & rParamsFile ) {
        AbstractSimplePhaseBasedCellCycleModel::OutputCellCycleModelParameters( boost::ref(rParamsFile) );
    }

    virtual void ResetForDivision(  ) {
        if( bp::override func_ResetForDivision = this->get_override( "ResetForDivision" ) )
            func_ResetForDivision(  );
        else{
            this->AbstractSimplePhaseBasedCellCycleModel::ResetForDivision(  );
        }
    }
    
    void default_ResetForDivision(  ) {
        AbstractSimplePhaseBasedCellCycleModel::ResetForDivision( );
    }

    virtual void SetG1Duration(  ){
        if( bp::override func_SetG1Duration = this->get_override( "SetG1Duration" ) )
            func_SetG1Duration(  );
        else{
            this->AbstractSimplePhaseBasedCellCycleModel::SetG1Duration(  );
        }
    }
    
    virtual void default_SetG1Duration(  ){
        AbstractSimplePhaseBasedCellCycleModel::SetG1Duration( );
    }

    virtual void UpdateCellCyclePhase(  ) {
        if( bp::override func_UpdateCellCyclePhase = this->get_override( "UpdateCellCyclePhase" ) )
            func_UpdateCellCyclePhase(  );
        else{
            this->AbstractSimplePhaseBasedCellCycleModel::UpdateCellCyclePhase(  );
        }
    }
    
    void default_UpdateCellCyclePhase(  ) {
        AbstractSimplePhaseBasedCellCycleModel::UpdateCellCyclePhase( );
    }

    virtual bool CanCellTerminallyDifferentiate(  ) {
        if( bp::override func_CanCellTerminallyDifferentiate = this->get_override( "CanCellTerminallyDifferentiate" ) )
            return func_CanCellTerminallyDifferentiate(  );
        else{
            return this->AbstractCellCycleModel::CanCellTerminallyDifferentiate(  );
        }
    }
    
    bool default_CanCellTerminallyDifferentiate(  ) {
        return AbstractCellCycleModel::CanCellTerminallyDifferentiate( );
    }

    virtual ::AbstractCellCycleModel * CreateCellCycleModel(  ){
        bp::override func_CreateCellCycleModel = this->get_override( "CreateCellCycleModel" );
        return func_CreateCellCycleModel(  );
    }

    virtual double GetAverageStemCellCycleTime(  ) {
        if( bp::override func_GetAverageStemCellCycleTime = this->get_override( "GetAverageStemCellCycleTime" ) )
            return func_GetAverageStemCellCycleTime(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetAverageStemCellCycleTime(  );
        }
    }
    
    double default_GetAverageStemCellCycleTime(  ) {
        return AbstractPhaseBasedCellCycleModel::GetAverageStemCellCycleTime( );
    }

    virtual double GetAverageTransitCellCycleTime(  ) {
        if( bp::override func_GetAverageTransitCellCycleTime = this->get_override( "GetAverageTransitCellCycleTime" ) )
            return func_GetAverageTransitCellCycleTime(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetAverageTransitCellCycleTime(  );
        }
    }
    
    double default_GetAverageTransitCellCycleTime(  ) {
        return AbstractPhaseBasedCellCycleModel::GetAverageTransitCellCycleTime( );
    }

    virtual double GetG1Duration(  ) const  {
        if( bp::override func_GetG1Duration = this->get_override( "GetG1Duration" ) )
            return func_GetG1Duration(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetG1Duration(  );
        }
    }
    
    double default_GetG1Duration(  ) const  {
        return AbstractPhaseBasedCellCycleModel::GetG1Duration( );
    }

    virtual double GetG2Duration(  ) const  {
        if( bp::override func_GetG2Duration = this->get_override( "GetG2Duration" ) )
            return func_GetG2Duration(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetG2Duration(  );
        }
    }
    
    double default_GetG2Duration(  ) const  {
        return AbstractPhaseBasedCellCycleModel::GetG2Duration( );
    }

    virtual double GetMDuration(  ) const  {
        if( bp::override func_GetMDuration = this->get_override( "GetMDuration" ) )
            return func_GetMDuration(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetMDuration(  );
        }
    }
    
    double default_GetMDuration(  ) const  {
        return AbstractPhaseBasedCellCycleModel::GetMDuration( );
    }

    virtual double GetSDuration(  ) const  {
        if( bp::override func_GetSDuration = this->get_override( "GetSDuration" ) )
            return func_GetSDuration(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::GetSDuration(  );
        }
    }
    
    double default_GetSDuration(  ) const  {
        return AbstractPhaseBasedCellCycleModel::GetSDuration( );
    }

    virtual bool ReadyToDivide(  ) {
        if( bp::override func_ReadyToDivide = this->get_override( "ReadyToDivide" ) )
            return func_ReadyToDivide(  );
        else{
            return this->AbstractPhaseBasedCellCycleModel::ReadyToDivide(  );
        }
    }
    
    bool default_ReadyToDivide(  ) {
        return AbstractPhaseBasedCellCycleModel::ReadyToDivide( );
    }

    virtual void SetBirthTime( double birthTime ) {
        if( bp::override func_SetBirthTime = this->get_override( "SetBirthTime" ) )
            func_SetBirthTime( birthTime );
        else{
            this->AbstractCellCycleModel::SetBirthTime( birthTime );
        }
    }
    
    void default_SetBirthTime( double birthTime ) {
        AbstractCellCycleModel::SetBirthTime( birthTime );
    }

    virtual void SetStemCellG1Duration( double stemCellG1Duration ) {
        if( bp::override func_SetStemCellG1Duration = this->get_override( "SetStemCellG1Duration" ) )
            func_SetStemCellG1Duration( stemCellG1Duration );
        else{
            this->AbstractPhaseBasedCellCycleModel::SetStemCellG1Duration( stemCellG1Duration );
        }
    }
    
    void default_SetStemCellG1Duration( double stemCellG1Duration ) {
        AbstractPhaseBasedCellCycleModel::SetStemCellG1Duration( stemCellG1Duration );
    }

    virtual void SetTransitCellG1Duration( double transitCellG1Duration ) {
        if( bp::override func_SetTransitCellG1Duration = this->get_override( "SetTransitCellG1Duration" ) )
            func_SetTransitCellG1Duration( transitCellG1Duration );
        else{
            this->AbstractPhaseBasedCellCycleModel::SetTransitCellG1Duration( transitCellG1Duration );
        }
    }
    
    void default_SetTransitCellG1Duration( double transitCellG1Duration ) {
        AbstractPhaseBasedCellCycleModel::SetTransitCellG1Duration( transitCellG1Duration );
    }

};

void register_AbstractSimplePhaseBasedCellCycleModel_class(){

    bp::class_< AbstractSimplePhaseBasedCellCycleModel_wrapper, bp::bases< AbstractPhaseBasedCellCycleModel >, boost::noncopyable >( "AbstractSimplePhaseBasedCellCycleModel", bp::init< AbstractSimplePhaseBasedCellCycleModel const & >(( bp::arg("rModel") )) )    
        .def( bp::init< >() )    
        .def( 
            "Initialise"
            , (void ( ::AbstractSimplePhaseBasedCellCycleModel::* )(  ))(&::AbstractSimplePhaseBasedCellCycleModel::Initialise)
            , (void ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_Initialise) )    
        .def( 
            "InitialiseDaughterCell"
            , (void ( ::AbstractSimplePhaseBasedCellCycleModel::* )(  ))(&::AbstractSimplePhaseBasedCellCycleModel::InitialiseDaughterCell)
            , (void ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_InitialiseDaughterCell) )    
        .def( 
            "OutputCellCycleModelParameters"
            , (void ( ::AbstractSimplePhaseBasedCellCycleModel::* )( ::out_stream & ))(&::AbstractSimplePhaseBasedCellCycleModel::OutputCellCycleModelParameters)
            , (void ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )( ::out_stream & ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_OutputCellCycleModelParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "ResetForDivision"
            , (void ( ::AbstractSimplePhaseBasedCellCycleModel::* )(  ))(&::AbstractSimplePhaseBasedCellCycleModel::ResetForDivision)
            , (void ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_ResetForDivision) )    
        .def( 
            "SetG1Duration"
            , (void ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_SetG1Duration) )    
        .def( 
            "UpdateCellCyclePhase"
            , (void ( ::AbstractSimplePhaseBasedCellCycleModel::* )(  ))(&::AbstractSimplePhaseBasedCellCycleModel::UpdateCellCyclePhase)
            , (void ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_UpdateCellCyclePhase) )    
        .def( 
            "CanCellTerminallyDifferentiate"
            , (bool ( ::AbstractCellCycleModel::* )(  ))(&::AbstractCellCycleModel::CanCellTerminallyDifferentiate)
            , (bool ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_CanCellTerminallyDifferentiate) )    
        .def( 
            "CreateCellCycleModel"
            , bp::pure_virtual( (::AbstractCellCycleModel * ( ::AbstractCellCycleModel::* )(  ))(&::AbstractCellCycleModel::CreateCellCycleModel) )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "GetAverageStemCellCycleTime"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  ))(&::AbstractPhaseBasedCellCycleModel::GetAverageStemCellCycleTime)
            , (double ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_GetAverageStemCellCycleTime) )    
        .def( 
            "GetAverageTransitCellCycleTime"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  ))(&::AbstractPhaseBasedCellCycleModel::GetAverageTransitCellCycleTime)
            , (double ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_GetAverageTransitCellCycleTime) )    
        .def( 
            "GetG1Duration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)(&::AbstractPhaseBasedCellCycleModel::GetG1Duration)
            , (double ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  )const)(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_GetG1Duration) )    
        .def( 
            "GetG2Duration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)(&::AbstractPhaseBasedCellCycleModel::GetG2Duration)
            , (double ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  )const)(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_GetG2Duration) )    
        .def( 
            "GetMDuration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)(&::AbstractPhaseBasedCellCycleModel::GetMDuration)
            , (double ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  )const)(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_GetMDuration) )    
        .def( 
            "GetSDuration"
            , (double ( ::AbstractPhaseBasedCellCycleModel::* )(  )const)(&::AbstractPhaseBasedCellCycleModel::GetSDuration)
            , (double ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  )const)(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_GetSDuration) )    
        .def( 
            "ReadyToDivide"
            , (bool ( ::AbstractPhaseBasedCellCycleModel::* )(  ))(&::AbstractPhaseBasedCellCycleModel::ReadyToDivide)
            , (bool ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )(  ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_ReadyToDivide) )    
        .def( 
            "SetBirthTime"
            , (void ( ::AbstractCellCycleModel::* )( double ))(&::AbstractCellCycleModel::SetBirthTime)
            , (void ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )( double ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_SetBirthTime)
            , ( bp::arg("birthTime") ) )    
        .def( 
            "SetStemCellG1Duration"
            , (void ( ::AbstractPhaseBasedCellCycleModel::* )( double ))(&::AbstractPhaseBasedCellCycleModel::SetStemCellG1Duration)
            , (void ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )( double ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_SetStemCellG1Duration)
            , ( bp::arg("stemCellG1Duration") ) )    
        .def( 
            "SetTransitCellG1Duration"
            , (void ( ::AbstractPhaseBasedCellCycleModel::* )( double ))(&::AbstractPhaseBasedCellCycleModel::SetTransitCellG1Duration)
            , (void ( AbstractSimplePhaseBasedCellCycleModel_wrapper::* )( double ))(&AbstractSimplePhaseBasedCellCycleModel_wrapper::default_SetTransitCellG1Duration)
            , ( bp::arg("transitCellG1Duration") ) );

}
