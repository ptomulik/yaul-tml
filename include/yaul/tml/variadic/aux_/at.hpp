#if !BOOST_PP_IS_ITERATING

# ifndef YAUL_TML_VARIADIC_AUX_AT_HPP
# define YAUL_TML_VARIADIC_AUX_AT_HPP

#   include <yaul/tml/limits/variadic.hpp>
#   include <yaul/tml/ref.hpp>
#   include <boost/preprocessor/iteration/iterate.hpp>
#   include <boost/preprocessor/repetition/enum_params.hpp>
#   include <boost/preprocessor/arithmetic/inc.hpp>
#   include <boost/preprocessor/cat.hpp>

#   define BOOST_PP_ITERATION_LIMITS (0,(TML_LIMIT_VARIADIC_SIZE-1))
#   define BOOST_PP_FILENAME_1 <yaul/tml/variadic/aux_/at.hpp>
#   include BOOST_PP_ITERATE()

# endif // YAUL_TML_VARIADIC_AUX_AT_HPP

#else // BOOST_PP_IS_ITERATING

namespace yaul { namespace tml { namespace variadic { namespace detail {
template<>
  struct at_impl<BOOST_PP_ITERATION()>
  {
    template<BOOST_PP_ENUM_PARAMS(BOOST_PP_INC(BOOST_PP_ITERATION()), class A), class ...Args >
      struct apply
        : ref<BOOST_PP_CAT(A,BOOST_PP_ITERATION())>
      { };
  };
} } } } // end namespace yaul::tml::variadic::detail

#endif // BOOST_PP_IS_ITERATING
