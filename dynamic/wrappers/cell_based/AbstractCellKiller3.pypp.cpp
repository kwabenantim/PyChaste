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
#include "AbstractCellKiller3.pypp.hpp"

namespace bp = boost::python;

struct AbstractCellKiller_less__3__greater__wrapper : AbstractCellKiller< 3 >, bp::wrapper< AbstractCellKiller< 3 > > {

    AbstractCellKiller_less__3__greater__wrapper(::AbstractCellPopulation< 3, 3 > * pCellPopulation )
    : AbstractCellKiller<3>( boost::python::ptr(pCellPopulation) )
      , bp::wrapper< AbstractCellKiller< 3 > >(){
        // constructor
    
    }

    virtual void CheckAndLabelCellsForApoptosisOrDeath(  ){
        bp::override func_CheckAndLabelCellsForApoptosisOrDeath = this->get_override( "CheckAndLabelCellsForApoptosisOrDeath" );
        func_CheckAndLabelCellsForApoptosisOrDeath(  );
    }

    virtual void OutputCellKillerParameters( ::out_stream & rParamsFile ){
        bp::override func_OutputCellKillerParameters = this->get_override( "OutputCellKillerParameters" );
        func_OutputCellKillerParameters( boost::ref(rParamsFile) );
    }

};

void register_AbstractCellKiller3_class(){

    { //::AbstractCellKiller< 3 >
        typedef bp::class_< AbstractCellKiller_less__3__greater__wrapper, boost::noncopyable > AbstractCellKiller3_exposer_t;
        AbstractCellKiller3_exposer_t AbstractCellKiller3_exposer = AbstractCellKiller3_exposer_t( "AbstractCellKiller3", bp::init< AbstractCellPopulation< 3, 3 > * >(( bp::arg("pCellPopulation") )) );
        bp::scope AbstractCellKiller3_scope( AbstractCellKiller3_exposer );
        { //::AbstractCellKiller< 3 >::CheckAndLabelCellsForApoptosisOrDeath
        
            typedef AbstractCellKiller< 3 > exported_class_t;
            typedef void ( exported_class_t::*CheckAndLabelCellsForApoptosisOrDeath_function_type)(  ) ;
            
            AbstractCellKiller3_exposer.def( 
                "CheckAndLabelCellsForApoptosisOrDeath"
                , bp::pure_virtual( CheckAndLabelCellsForApoptosisOrDeath_function_type(&::AbstractCellKiller< 3 >::CheckAndLabelCellsForApoptosisOrDeath) ) );
        
        }
        { //::AbstractCellKiller< 3 >::GetCellPopulation
        
            typedef AbstractCellKiller< 3 > exported_class_t;
            typedef ::AbstractCellPopulation< 3, 3 > const * ( exported_class_t::*GetCellPopulation_function_type)(  ) const;
            
            AbstractCellKiller3_exposer.def( 
                "GetCellPopulation"
                , GetCellPopulation_function_type( &::AbstractCellKiller< 3 >::GetCellPopulation )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::AbstractCellKiller< 3 >::OutputCellKillerInfo
        
            typedef AbstractCellKiller< 3 > exported_class_t;
            typedef void ( exported_class_t::*OutputCellKillerInfo_function_type)( ::out_stream & ) ;
            
            AbstractCellKiller3_exposer.def( 
                "OutputCellKillerInfo"
                , OutputCellKillerInfo_function_type( &::AbstractCellKiller< 3 >::OutputCellKillerInfo )
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::AbstractCellKiller< 3 >::OutputCellKillerParameters
        
            typedef AbstractCellKiller< 3 > exported_class_t;
            typedef void ( exported_class_t::*OutputCellKillerParameters_function_type)( ::out_stream & ) ;
            
            AbstractCellKiller3_exposer.def( 
                "OutputCellKillerParameters"
                , bp::pure_virtual( OutputCellKillerParameters_function_type(&::AbstractCellKiller< 3 >::OutputCellKillerParameters) )
                , ( bp::arg("rParamsFile") ) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< AbstractCellKiller<3> > >();
        bp::implicitly_convertible< boost::shared_ptr< AbstractCellKiller< 3 > >, boost::shared_ptr< Identifiable > >();
        bp::implicitly_convertible< boost::shared_ptr< ApoptoticCellKiller< 3 > >, boost::shared_ptr< AbstractCellKiller< 3 > > >();
        bp::implicitly_convertible< boost::shared_ptr< PlaneBasedCellKiller< 3 > >, boost::shared_ptr< AbstractCellKiller< 3 > > >();
    }

}
