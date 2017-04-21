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
#include "VoronoiDataWriter2_2.pypp.hpp"

namespace bp = boost::python;

struct VoronoiDataWriter_less__2_comma__2__greater__wrapper : VoronoiDataWriter< 2, 2 >, bp::wrapper< VoronoiDataWriter< 2, 2 > > {

    VoronoiDataWriter_less__2_comma__2__greater__wrapper( )
    : VoronoiDataWriter<2, 2>( )
      , bp::wrapper< VoronoiDataWriter< 2, 2 > >(){
        // null constructor
    
    }

    virtual void Visit( ::MeshBasedCellPopulation< 2, 2 > * pCellPopulation ) {
        if( bp::override func_Visit = this->get_override( "Visit" ) )
            func_Visit( boost::python::ptr(pCellPopulation) );
        else{
            this->VoronoiDataWriter< 2, 2 >::Visit( boost::python::ptr(pCellPopulation) );
        }
    }
    
    void default_Visit( ::MeshBasedCellPopulation< 2, 2 > * pCellPopulation ) {
        VoronoiDataWriter< 2, 2 >::Visit( boost::python::ptr(pCellPopulation) );
    }

    virtual void Visit( ::CaBasedCellPopulation< 2 > * pCellPopulation ) {
        if( bp::override func_Visit = this->get_override( "Visit" ) )
            func_Visit( boost::python::ptr(pCellPopulation) );
        else{
            this->VoronoiDataWriter< 2, 2 >::Visit( boost::python::ptr(pCellPopulation) );
        }
    }
    
    void default_Visit( ::CaBasedCellPopulation< 2 > * pCellPopulation ) {
        VoronoiDataWriter< 2, 2 >::Visit( boost::python::ptr(pCellPopulation) );
    }

    virtual void Visit( ::NodeBasedCellPopulation< 2 > * pCellPopulation ) {
        if( bp::override func_Visit = this->get_override( "Visit" ) )
            func_Visit( boost::python::ptr(pCellPopulation) );
        else{
            this->VoronoiDataWriter< 2, 2 >::Visit( boost::python::ptr(pCellPopulation) );
        }
    }
    
    void default_Visit( ::NodeBasedCellPopulation< 2 > * pCellPopulation ) {
        VoronoiDataWriter< 2, 2 >::Visit( boost::python::ptr(pCellPopulation) );
    }

    virtual void Visit( ::PottsBasedCellPopulation< 2 > * pCellPopulation ) {
        if( bp::override func_Visit = this->get_override( "Visit" ) )
            func_Visit( boost::python::ptr(pCellPopulation) );
        else{
            this->VoronoiDataWriter< 2, 2 >::Visit( boost::python::ptr(pCellPopulation) );
        }
    }
    
    void default_Visit( ::PottsBasedCellPopulation< 2 > * pCellPopulation ) {
        VoronoiDataWriter< 2, 2 >::Visit( boost::python::ptr(pCellPopulation) );
    }

    virtual void Visit( ::VertexBasedCellPopulation< 2 > * pCellPopulation ) {
        if( bp::override func_Visit = this->get_override( "Visit" ) )
            func_Visit( boost::python::ptr(pCellPopulation) );
        else{
            this->VoronoiDataWriter< 2, 2 >::Visit( boost::python::ptr(pCellPopulation) );
        }
    }
    
    void default_Visit( ::VertexBasedCellPopulation< 2 > * pCellPopulation ) {
        VoronoiDataWriter< 2, 2 >::Visit( boost::python::ptr(pCellPopulation) );
    }

};

void register_VoronoiDataWriter2_2_class(){

    bp::class_< VoronoiDataWriter_less__2_comma__2__greater__wrapper, boost::noncopyable >( "VoronoiDataWriter2_2", bp::init< >() )    
        .def( 
            "Visit"
            , (void ( ::VoronoiDataWriter<2, 2>::* )( ::MeshBasedCellPopulation< 2, 2 > * ))(&::VoronoiDataWriter< 2, 2 >::Visit)
            , (void ( VoronoiDataWriter_less__2_comma__2__greater__wrapper::* )( ::MeshBasedCellPopulation< 2, 2 > * ))(&VoronoiDataWriter_less__2_comma__2__greater__wrapper::default_Visit)
            , ( bp::arg("pCellPopulation") ) )    
        .def( 
            "Visit"
            , (void ( ::VoronoiDataWriter<2, 2>::* )( ::CaBasedCellPopulation< 2 > * ))(&::VoronoiDataWriter< 2, 2 >::Visit)
            , (void ( VoronoiDataWriter_less__2_comma__2__greater__wrapper::* )( ::CaBasedCellPopulation< 2 > * ))(&VoronoiDataWriter_less__2_comma__2__greater__wrapper::default_Visit)
            , ( bp::arg("pCellPopulation") ) )    
        .def( 
            "Visit"
            , (void ( ::VoronoiDataWriter<2, 2>::* )( ::NodeBasedCellPopulation< 2 > * ))(&::VoronoiDataWriter< 2, 2 >::Visit)
            , (void ( VoronoiDataWriter_less__2_comma__2__greater__wrapper::* )( ::NodeBasedCellPopulation< 2 > * ))(&VoronoiDataWriter_less__2_comma__2__greater__wrapper::default_Visit)
            , ( bp::arg("pCellPopulation") ) )    
        .def( 
            "Visit"
            , (void ( ::VoronoiDataWriter<2, 2>::* )( ::PottsBasedCellPopulation< 2 > * ))(&::VoronoiDataWriter< 2, 2 >::Visit)
            , (void ( VoronoiDataWriter_less__2_comma__2__greater__wrapper::* )( ::PottsBasedCellPopulation< 2 > * ))(&VoronoiDataWriter_less__2_comma__2__greater__wrapper::default_Visit)
            , ( bp::arg("pCellPopulation") ) )    
        .def( 
            "Visit"
            , (void ( ::VoronoiDataWriter<2, 2>::* )( ::VertexBasedCellPopulation< 2 > * ))(&::VoronoiDataWriter< 2, 2 >::Visit)
            , (void ( VoronoiDataWriter_less__2_comma__2__greater__wrapper::* )( ::VertexBasedCellPopulation< 2 > * ))(&VoronoiDataWriter_less__2_comma__2__greater__wrapper::default_Visit)
            , ( bp::arg("pCellPopulation") ) );

}
