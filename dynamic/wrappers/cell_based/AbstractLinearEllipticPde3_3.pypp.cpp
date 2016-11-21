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
#include "AbstractLinearEllipticPde3_3.pypp.hpp"

namespace bp = boost::python;

struct AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper : AbstractLinearEllipticPde< 3, 3 >, bp::wrapper< AbstractLinearEllipticPde< 3, 3 > > {

    AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper( )
    : AbstractLinearEllipticPde<3, 3>( )
      , bp::wrapper< AbstractLinearEllipticPde< 3, 3 > >(){
        // null constructor
    
    }

    virtual double ComputeConstantInUSourceTerm( ::ChastePoint< 3 > const & rX, ::Element< 3, 3 > * pElement ){
        bp::override func_ComputeConstantInUSourceTerm = this->get_override( "ComputeConstantInUSourceTerm" );
        return func_ComputeConstantInUSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
    }

    virtual double ComputeConstantInUSourceTermAtNode( ::Node< 3 > const & rNode ) {
        if( bp::override func_ComputeConstantInUSourceTermAtNode = this->get_override( "ComputeConstantInUSourceTermAtNode" ) )
            return func_ComputeConstantInUSourceTermAtNode( boost::ref(rNode) );
        else{
            return this->AbstractLinearEllipticPde< 3, 3 >::ComputeConstantInUSourceTermAtNode( boost::ref(rNode) );
        }
    }
    
    double default_ComputeConstantInUSourceTermAtNode( ::Node< 3 > const & rNode ) {
        return AbstractLinearEllipticPde< 3, 3 >::ComputeConstantInUSourceTermAtNode( boost::ref(rNode) );
    }

    virtual ::boost::numeric::ublas::c_matrix< double, 3, 3 > ComputeDiffusionTerm( ::ChastePoint< 3 > const & rX ){
        bp::override func_ComputeDiffusionTerm = this->get_override( "ComputeDiffusionTerm" );
        return func_ComputeDiffusionTerm( boost::ref(rX) );
    }

    virtual double ComputeLinearInUCoeffInSourceTerm( ::ChastePoint< 3 > const & rX, ::Element< 3, 3 > * pElement ){
        bp::override func_ComputeLinearInUCoeffInSourceTerm = this->get_override( "ComputeLinearInUCoeffInSourceTerm" );
        return func_ComputeLinearInUCoeffInSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
    }

    virtual double ComputeLinearInUCoeffInSourceTermAtNode( ::Node< 3 > const & rNode ) {
        if( bp::override func_ComputeLinearInUCoeffInSourceTermAtNode = this->get_override( "ComputeLinearInUCoeffInSourceTermAtNode" ) )
            return func_ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
        else{
            return this->AbstractLinearEllipticPde< 3, 3 >::ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
        }
    }
    
    double default_ComputeLinearInUCoeffInSourceTermAtNode( ::Node< 3 > const & rNode ) {
        return AbstractLinearEllipticPde< 3, 3 >::ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
    }

};

void register_AbstractLinearEllipticPde3_3_class(){

    bp::class_< AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper, bp::bases< AbstractLinearPde< 3, 3 > >, boost::noncopyable >( "AbstractLinearEllipticPde3_3", bp::init< >() )    
        .def( 
            "ComputeConstantInUSourceTerm"
            , bp::pure_virtual( (double ( ::AbstractLinearEllipticPde<3, 3>::* )( ::ChastePoint< 3 > const &,::Element< 3, 3 > * ))(&::AbstractLinearEllipticPde< 3, 3 >::ComputeConstantInUSourceTerm) )
            , ( bp::arg("rX"), bp::arg("pElement") ) )    
        .def( 
            "ComputeConstantInUSourceTermAtNode"
            , (double ( ::AbstractLinearEllipticPde<3, 3>::* )( ::Node< 3 > const & ))(&::AbstractLinearEllipticPde< 3, 3 >::ComputeConstantInUSourceTermAtNode)
            , (double ( AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper::* )( ::Node< 3 > const & ))(&AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper::default_ComputeConstantInUSourceTermAtNode)
            , ( bp::arg("rNode") ) )    
        .def( 
            "ComputeDiffusionTerm"
            , bp::pure_virtual( (::boost::numeric::ublas::c_matrix< double, 3, 3 > ( ::AbstractLinearEllipticPde<3, 3>::* )( ::ChastePoint< 3 > const & ))(&::AbstractLinearEllipticPde< 3, 3 >::ComputeDiffusionTerm) )
            , ( bp::arg("rX") ) )    
        .def( 
            "ComputeLinearInUCoeffInSourceTerm"
            , bp::pure_virtual( (double ( ::AbstractLinearEllipticPde<3, 3>::* )( ::ChastePoint< 3 > const &,::Element< 3, 3 > * ))(&::AbstractLinearEllipticPde< 3, 3 >::ComputeLinearInUCoeffInSourceTerm) )
            , ( bp::arg("rX"), bp::arg("pElement") ) )    
        .def( 
            "ComputeLinearInUCoeffInSourceTermAtNode"
            , (double ( ::AbstractLinearEllipticPde<3, 3>::* )( ::Node< 3 > const & ))(&::AbstractLinearEllipticPde< 3, 3 >::ComputeLinearInUCoeffInSourceTermAtNode)
            , (double ( AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper::* )( ::Node< 3 > const & ))(&AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper::default_ComputeLinearInUCoeffInSourceTermAtNode)
            , ( bp::arg("rNode") ) );

}
