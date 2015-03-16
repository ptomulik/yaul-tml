// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/aux_/num_op_cleanup.hpp

/** // doc: yaul/tml/aux_/num_op_cleanup.hpp {{{
 * \file yaul/tml/aux_/num_op_cleanup.hpp
 * \brief Undefine temporary macros used by \ref yaul/tml/aux_/num_op.hpp
 */ // }}}

#ifdef AUX862492_OP_FWD_HEADER
# undef AUX862492_OP_FWD_HEADER
#endif
#ifdef AUX862492_OP
# undef AUX862492_OP
#endif
#ifdef AUX862492_OP_NAME
# undef AUX862492_OP_NAME
#endif
#ifdef AUX862492_OP_IMPL_NAME
# undef AUX862492_OP_IMPL_NAME
#endif
#ifdef AUX862492_OP_ARITY_MIN
# undef AUX862492_OP_ARITY_MIN
#endif
#ifdef AUX862492_OP_ARITY_MAX
# undef AUX862492_OP_ARITY_MAX
#endif
#ifdef AUX862492_OP_ARG_VALUE
# undef AUX862492_OP_ARG_VALUE
#endif
#ifdef AUX862492_OP_NOT_VARIADIC
# undef AUX862492_OP_NOT_VARIADIC
#endif

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
