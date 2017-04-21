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
#include "CellwiseSourceEllipticPde2.pypp.hpp"

namespace bp = boost::python;

struct CellwiseSourceEllipticPde_less__2__greater__wrapper : CellwiseSourceEllipticPde< 2 >, bp::wrapper< CellwiseSourceEllipticPde< 2 > > {

    CellwiseSourceEllipticPde_less__2__greater__wrapper(::AbstractCellPopulation< 2, 2 > & rCellPopulation, double sourceCoefficient=0. )
    : CellwiseSourceEllipticPde<2>( boost::ref(rCellPopulation), sourceCoefficient )
      , bp::wrapper< CellwiseSourceEllipticPde< 2 > >(){
        // constructor
    
    }

    virtual double ComputeConstantInUSourceTerm( ::ChastePoint< 2 > const & rX, ::Element< 2, 2 > * pElement ) {
        if( bp::override func_ComputeConstantInUSourceTerm = this->get_override( "ComputeConstantInUSourceTerm" ) )
            return func_ComputeConstantInUSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
        else{
            return this->CellwiseSourceEllipticPde< 2 >::ComputeConstantInUSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
        }
    }
    
    double default_ComputeConstantInUSourceTerm( ::ChastePoint< 2 > const & rX, ::Element< 2, 2 > * pElement ) {
        return CellwiseSourceEllipticPde< 2 >::ComputeConstantInUSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
    }

    virtual ::boost::numeric::ublas::c_matrix< double, 2, 2 > ComputeDiffusionTerm( ::ChastePoint< 2 > const & rX ) {
        if( bp::override func_ComputeDiffusionTerm = this->get_override( "ComputeDiffusionTerm" ) )
            return func_ComputeDiffusionTerm( boost::ref(rX) );
        else{
            return this->CellwiseSourceEllipticPde< 2 >::ComputeDiffusionTerm( boost::ref(rX) );
        }
    }
    
    ::boost::numeric::ublas::c_matrix< double, 2, 2 > default_ComputeDiffusionTerm( ::ChastePoint< 2 > const & rX ) {
        return CellwiseSourceEllipticPde< 2 >::ComputeDiffusionTerm( boost::ref(rX) );
    }

    virtual double ComputeLinearInUCoeffInSourceTerm( ::ChastePoint< 2 > const & rX, ::Element< 2, 2 > * pElement ) {
        if( bp::override func_ComputeLinearInUCoeffInSourceTerm = this->get_override( "ComputeLinearInUCoeffInSourceTerm" ) )
            return func_ComputeLinearInUCoeffInSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
        else{
            return this->CellwiseSourceEllipticPde< 2 >::ComputeLinearInUCoeffInSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
        }
    }
    
    double default_ComputeLinearInUCoeffInSourceTerm( ::ChastePoint< 2 > const & rX, ::Element< 2, 2 > * pElement ) {
        return CellwiseSourceEllipticPde< 2 >::ComputeLinearInUCoeffInSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
    }

    virtual double ComputeLinearInUCoeffInSourceTermAtNode( ::Node< 2 > const & rNode ) {
        if( bp::override func_ComputeLinearInUCoeffInSourceTermAtNode = this->get_override( "ComputeLinearInUCoeffInSourceTermAtNode" ) )
            return func_ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
        else{
            return this->CellwiseSourceEllipticPde< 2 >::ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
        }
    }
    
    double default_ComputeLinearInUCoeffInSourceTermAtNode( ::Node< 2 > const & rNode ) {
        return CellwiseSourceEllipticPde< 2 >::ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
    }

};

void register_CellwiseSourceEllipticPde2_class(){

    { //::CellwiseSourceEllipticPde< 2 >
        typedef bp::class_< CellwiseSourceEllipticPde_less__2__greater__wrapper, boost::noncopyable > CellwiseSourceEllipticPde2_exposer_t;
        CellwiseSourceEllipticPde2_exposer_t CellwiseSourceEllipticPde2_exposer = CellwiseSourceEllipticPde2_exposer_t( "CellwiseSourceEllipticPde2", bp::init< AbstractCellPopulation< 2, 2 > &, bp::optional< double > >(( bp::arg("rCellPopulation"), bp::arg("sourceCoefficient")=0. )) );
        bp::scope CellwiseSourceEllipticPde2_scope( CellwiseSourceEllipticPde2_exposer );
        bp::implicitly_convertible< AbstractCellPopulation< 2, 2 > &, CellwiseSourceEllipticPde< 2 > >();
        { //::CellwiseSourceEllipticPde< 2 >::ComputeConstantInUSourceTerm
        
            typedef CellwiseSourceEllipticPde< 2 > exported_class_t;
            typedef double ( exported_class_t::*ComputeConstantInUSourceTerm_function_type)( ::ChastePoint< 2 > const &,::Element< 2, 2 > * ) ;
            typedef double ( CellwiseSourceEllipticPde_less__2__greater__wrapper::*default_ComputeConstantInUSourceTerm_function_type)( ::ChastePoint< 2 > const &,::Element< 2, 2 > * ) ;
            
            CellwiseSourceEllipticPde2_exposer.def( 
                "ComputeConstantInUSourceTerm"
                , ComputeConstantInUSourceTerm_function_type(&::CellwiseSourceEllipticPde< 2 >::ComputeConstantInUSourceTerm)
                , default_ComputeConstantInUSourceTerm_function_type(&CellwiseSourceEllipticPde_less__2__greater__wrapper::default_ComputeConstantInUSourceTerm)
                , ( bp::arg("rX"), bp::arg("pElement") ) );
        
        }
        { //::CellwiseSourceEllipticPde< 2 >::ComputeDiffusionTerm
        
            typedef CellwiseSourceEllipticPde< 2 > exported_class_t;
            typedef ::boost::numeric::ublas::c_matrix< double, 2, 2 > ( exported_class_t::*ComputeDiffusionTerm_function_type)( ::ChastePoint< 2 > const & ) ;
            typedef ::boost::numeric::ublas::c_matrix< double, 2, 2 > ( CellwiseSourceEllipticPde_less__2__greater__wrapper::*default_ComputeDiffusionTerm_function_type)( ::ChastePoint< 2 > const & ) ;
            
            CellwiseSourceEllipticPde2_exposer.def( 
                "ComputeDiffusionTerm"
                , ComputeDiffusionTerm_function_type(&::CellwiseSourceEllipticPde< 2 >::ComputeDiffusionTerm)
                , default_ComputeDiffusionTerm_function_type(&CellwiseSourceEllipticPde_less__2__greater__wrapper::default_ComputeDiffusionTerm)
                , ( bp::arg("rX") ) );
        
        }
        { //::CellwiseSourceEllipticPde< 2 >::ComputeLinearInUCoeffInSourceTerm
        
            typedef CellwiseSourceEllipticPde< 2 > exported_class_t;
            typedef double ( exported_class_t::*ComputeLinearInUCoeffInSourceTerm_function_type)( ::ChastePoint< 2 > const &,::Element< 2, 2 > * ) ;
            typedef double ( CellwiseSourceEllipticPde_less__2__greater__wrapper::*default_ComputeLinearInUCoeffInSourceTerm_function_type)( ::ChastePoint< 2 > const &,::Element< 2, 2 > * ) ;
            
            CellwiseSourceEllipticPde2_exposer.def( 
                "ComputeLinearInUCoeffInSourceTerm"
                , ComputeLinearInUCoeffInSourceTerm_function_type(&::CellwiseSourceEllipticPde< 2 >::ComputeLinearInUCoeffInSourceTerm)
                , default_ComputeLinearInUCoeffInSourceTerm_function_type(&CellwiseSourceEllipticPde_less__2__greater__wrapper::default_ComputeLinearInUCoeffInSourceTerm)
                , ( bp::arg("rX"), bp::arg("pElement") ) );
        
        }
        { //::CellwiseSourceEllipticPde< 2 >::ComputeLinearInUCoeffInSourceTermAtNode
        
            typedef CellwiseSourceEllipticPde< 2 > exported_class_t;
            typedef double ( exported_class_t::*ComputeLinearInUCoeffInSourceTermAtNode_function_type)( ::Node< 2 > const & ) ;
            typedef double ( CellwiseSourceEllipticPde_less__2__greater__wrapper::*default_ComputeLinearInUCoeffInSourceTermAtNode_function_type)( ::Node< 2 > const & ) ;
            
            CellwiseSourceEllipticPde2_exposer.def( 
                "ComputeLinearInUCoeffInSourceTermAtNode"
                , ComputeLinearInUCoeffInSourceTermAtNode_function_type(&::CellwiseSourceEllipticPde< 2 >::ComputeLinearInUCoeffInSourceTermAtNode)
                , default_ComputeLinearInUCoeffInSourceTermAtNode_function_type(&CellwiseSourceEllipticPde_less__2__greater__wrapper::default_ComputeLinearInUCoeffInSourceTermAtNode)
                , ( bp::arg("rNode") ) );
        
        }
        { //::CellwiseSourceEllipticPde< 2 >::GetCoefficient
        
            typedef CellwiseSourceEllipticPde< 2 > exported_class_t;
            typedef double ( exported_class_t::*GetCoefficient_function_type)(  ) const;
            
            CellwiseSourceEllipticPde2_exposer.def( 
                "GetCoefficient"
                , GetCoefficient_function_type( &::CellwiseSourceEllipticPde< 2 >::GetCoefficient ) );
        
        }
        { //::CellwiseSourceEllipticPde< 2 >::rGetCellPopulation
        
            typedef CellwiseSourceEllipticPde< 2 > exported_class_t;
            typedef ::AbstractCellPopulation< 2, 2 > const & ( exported_class_t::*rGetCellPopulation_function_type)(  ) const;
            
            CellwiseSourceEllipticPde2_exposer.def( 
                "rGetCellPopulation"
                , rGetCellPopulation_function_type( &::CellwiseSourceEllipticPde< 2 >::rGetCellPopulation )
                , bp::return_internal_reference< >() );
        
        }
    }

}
