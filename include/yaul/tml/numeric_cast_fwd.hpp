// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/numeric_cast_fwd.hpp

/** // doc: yaul/tml/numeric_cast_fwd.hpp {{{
 * \file yaul/tml/numeric_cast_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/numeric_cast.hpp
 */ // }}}
#ifndef YAUL_TML_NUMERIC_CAST_FWD_HPP
#define YAUL_TML_NUMERIC_CAST_FWD_HPP

namespace yaul { namespace tml {
template <class FromTag, class ToTag>
  struct numeric_cast
  {
    template<class N>
      struct apply;
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_NUMERIC_CAST_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
