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
#include "PottsMeshGenerator2.pypp.hpp"

namespace bp = boost::python;

struct SharedPottsMeshGenerator_less__2__greater__wrapper : SharedPottsMeshGenerator< 2 >, bp::wrapper< SharedPottsMeshGenerator< 2 > > {

    SharedPottsMeshGenerator_less__2__greater__wrapper(SharedPottsMeshGenerator<2> const & arg )
    : SharedPottsMeshGenerator<2>( arg )
      , bp::wrapper< SharedPottsMeshGenerator< 2 > >(){
        // copy constructor
        
    }

    SharedPottsMeshGenerator_less__2__greater__wrapper(unsigned int numNodesAcross, unsigned int numElementsAcross, unsigned int elementWidth, unsigned int numNodesUp=1U, unsigned int numElementsUp=1U, unsigned int elementHeight=1U, unsigned int numNodesDeep=1U, unsigned int numElementsDeep=1U, unsigned int elementDepth=1U, bool startAtBottomLeft=false, bool isPeriodicInX=false, bool isPeriodicInY=false, bool isPeriodicInZ=false )
    : SharedPottsMeshGenerator<2>( numNodesAcross, numElementsAcross, elementWidth, numNodesUp, numElementsUp, elementHeight, numNodesDeep, numElementsDeep, elementDepth, startAtBottomLeft, isPeriodicInX, isPeriodicInY, isPeriodicInZ )
      , bp::wrapper< SharedPottsMeshGenerator< 2 > >(){
        // constructor
    
    }

    SharedPottsMeshGenerator_less__2__greater__wrapper( )
    : SharedPottsMeshGenerator<2>( )
      , bp::wrapper< SharedPottsMeshGenerator< 2 > >(){
        // null constructor
    
    }

    virtual ::boost::shared_ptr< PottsMesh< 2 > > GetMesh(  ) {
        if( bp::override func_GetMesh = this->get_override( "GetMesh" ) )
            return func_GetMesh(  );
        else{
            return this->SharedPottsMeshGenerator< 2 >::GetMesh(  );
        }
    }
    
    ::boost::shared_ptr< PottsMesh< 2 > > default_GetMesh(  ) {
        return SharedPottsMeshGenerator< 2 >::GetMesh( );
    }

};

void register_PottsMeshGenerator2_class(){

    bp::class_< SharedPottsMeshGenerator_less__2__greater__wrapper >( "PottsMeshGenerator2", bp::init< unsigned int, unsigned int, unsigned int, bp::optional< unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool, bool, bool, bool > >(( bp::arg("numNodesAcross"), bp::arg("numElementsAcross"), bp::arg("elementWidth"), bp::arg("numNodesUp")=(unsigned int)(1U), bp::arg("numElementsUp")=(unsigned int)(1U), bp::arg("elementHeight")=(unsigned int)(1U), bp::arg("numNodesDeep")=(unsigned int)(1U), bp::arg("numElementsDeep")=(unsigned int)(1U), bp::arg("elementDepth")=(unsigned int)(1U), bp::arg("startAtBottomLeft")=(bool)(false), bp::arg("isPeriodicInX")=(bool)(false), bp::arg("isPeriodicInY")=(bool)(false), bp::arg("isPeriodicInZ")=(bool)(false) )) )    
        .def( bp::init< >() )    
        .def( 
            "GetMesh"
            , (::boost::shared_ptr< PottsMesh< 2 > > ( ::SharedPottsMeshGenerator<2>::* )(  ))(&::SharedPottsMeshGenerator< 2 >::GetMesh)
            , (::boost::shared_ptr< PottsMesh< 2 > > ( SharedPottsMeshGenerator_less__2__greater__wrapper::* )(  ))(&SharedPottsMeshGenerator_less__2__greater__wrapper::default_GetMesh) );

}
