// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/aux_/modulus.hpp

/** // doc: yaul/tml/aux_/modulus.hpp {{{
 * \file yaul/tml/aux_/modulus.hpp
 * \brief Implements \ref yaul::tml::modulus
 */ // }}}
# ifndef YAUL_TML_AUX_MODULUS_HPP
# define YAUL_TML_AUX_MODULUS_HPP

#include <yaul/tml/aux_/num_op_includes.hpp>
#include <yaul/tml/integral_c/aux_/num_op_includes.hpp>

#define AUX862492_OP %
#define AUX862492_OP_NAME modulus
#define AUX862492_OP_ARITY_MIN 2
#define AUX862492_OP_ARITY_MAX 2
#define AUX862492_OP_NOT_VARIADIC 1

#include <yaul/tml/aux_/num_op.hpp>
#include <yaul/tml/integral_c/aux_/num_op.hpp>

#include <yaul/tml/aux_/num_op_cleanup.hpp>
#include <yaul/tml/integral_c/aux_/num_op_cleanup.hpp>

#endif /* YAUL_TML_AUX_MODULUS_HPP */

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
