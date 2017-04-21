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
#include "VtkScene2.pypp.hpp"

namespace bp = boost::python;

struct VtkScene_less__2__greater__wrapper : VtkScene< 2 >, bp::wrapper< VtkScene< 2 > > {

    VtkScene_less__2__greater__wrapper(VtkScene<2> const & arg )
    : VtkScene<2>( arg )
      , bp::wrapper< VtkScene< 2 > >(){
        // copy constructor
        
    }

    VtkScene_less__2__greater__wrapper( )
    : VtkScene<2>( )
      , bp::wrapper< VtkScene< 2 > >(){
        // null constructor
    
    }

    virtual void ResetRenderer( unsigned int timeStep=0 ) {
        if( bp::override func_ResetRenderer = this->get_override( "ResetRenderer" ) )
            func_ResetRenderer( timeStep );
        else{
            this->VtkScene< 2 >::ResetRenderer( timeStep );
        }
    }
    
    void default_ResetRenderer( unsigned int timeStep=0 ) {
        VtkScene< 2 >::ResetRenderer( timeStep );
    }

};

void register_VtkScene2_class(){

    bp::class_< VtkScene_less__2__greater__wrapper >( "VtkScene2", bp::init< >() )    
        .def( 
            "End"
            , (void ( ::VtkScene<2>::* )(  ))( &::VtkScene< 2 >::End ) )    
        .def( 
            "GetCellPopulationActorGenerator"
            , (::boost::shared_ptr< CellPopulationPyChasteActorGenerator< 2 > > ( ::VtkScene<2>::* )(  ))( &::VtkScene< 2 >::GetCellPopulationActorGenerator ) )    
        .def( 
            "GetRenderer"
            , (::vtkSmartPointer< vtkRenderer > ( ::VtkScene<2>::* )(  ))( &::VtkScene< 2 >::GetRenderer ) )    
        .def( 
            "GetSceneAsCharBuffer"
            , (::vtkSmartPointer< vtkUnsignedCharArray > ( ::VtkScene<2>::* )(  ))( &::VtkScene< 2 >::GetSceneAsCharBuffer ) )    
        .def( 
            "ResetRenderer"
            , (void ( ::VtkScene<2>::* )( unsigned int ))(&::VtkScene< 2 >::ResetRenderer)
            , (void ( VtkScene_less__2__greater__wrapper::* )( unsigned int ))(&VtkScene_less__2__greater__wrapper::default_ResetRenderer)
            , ( bp::arg("timeStep")=(unsigned int)(0) ) )    
        .def( 
            "SetCellPopulation"
            , (void ( ::VtkScene<2>::* )( ::boost::shared_ptr< AbstractCellPopulation< 2, 2 > > ))( &::VtkScene< 2 >::SetCellPopulation )
            , ( bp::arg("pCellPopulation") ) )    
        .def( 
            "SetIsInteractive"
            , (void ( ::VtkScene<2>::* )( bool ))( &::VtkScene< 2 >::SetIsInteractive )
            , ( bp::arg("isInteractive") ) )    
        .def( 
            "SetOutputFilePath"
            , (void ( ::VtkScene<2>::* )( ::std::string const & ))( &::VtkScene< 2 >::SetOutputFilePath )
            , ( bp::arg("rPath") ) )    
        .def( 
            "SetSaveAsAnimation"
            , (void ( ::VtkScene<2>::* )( bool ))( &::VtkScene< 2 >::SetSaveAsAnimation )
            , ( bp::arg("saveAsAnimation") ) )    
        .def( 
            "SetSaveAsImages"
            , (void ( ::VtkScene<2>::* )( bool ))( &::VtkScene< 2 >::SetSaveAsImages )
            , ( bp::arg("saveAsImages") ) )    
        .def( 
            "Start"
            , (void ( ::VtkScene<2>::* )(  ))( &::VtkScene< 2 >::Start ) )    
        .def( 
            "StartInteractiveEventHandler"
            , (void ( ::VtkScene<2>::* )(  ))( &::VtkScene< 2 >::StartInteractiveEventHandler ) );

}
