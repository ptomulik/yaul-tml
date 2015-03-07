// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/at_fwd.hpp

/** // doc: yaul/tml/at_fwd.hpp {{{
 * \file yaul/tml/at_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/at.hpp
 */ // }}}
#ifndef YAUL_TML_AT_FWD_HPP
#define YAUL_TML_AT_FWD_HPP

namespace yaul { namespace tml {
template <class Tag>
  struct at_impl
  {
    template<class Sequence, class N>
      struct apply;
  };
template <class Sequence, class N>
  struct at;
template <class Sequence, long N>
  struct at_c;
} } // end namespace yaul::tml

#endif /* YAUL_TML_AT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
