#if !BOOST_PP_IS_ITERATING

# ifndef YAUL_TML_VARIADIC_AUX_FIND_IF_HPP
# define YAUL_TML_VARIADIC_AUX_FIND_IF_HPP

#   include <yaul/tml/limits/variadic.hpp>
#   include <yaul/tml/if.hpp>
#   include <yaul/tml/apply.hpp>
#   include <yaul/tml/long.hpp>
#   include <boost/preprocessor/iteration/iterate.hpp>
#   include <boost/preprocessor/repetition/enum_params.hpp>
#   include <boost/preprocessor/arithmetic/inc.hpp>
#   include <boost/preprocessor/cat.hpp>

#   define BOOST_PP_ITERATION_LIMITS (0,(TML_LIMIT_VARIADIC_SIZE-1))
#   define BOOST_PP_FILENAME_1 <yaul/tml/variadic/aux_/find_if.hpp>
#   include BOOST_PP_ITERATE()

# endif // YAUL_TML_VARIADIC_AUX_FIND_IF_HPP

#else // BOOST_PP_IS_ITERATING

namespace yaul { namespace tml { namespace variadic { namespace detail {
template<class Pred, long N>
  struct find_if_impl<Pred, BOOST_PP_ITERATION()>
  {
    template<BOOST_PP_ENUM_PARAMS(BOOST_PP_INC(BOOST_PP_ITERATION()), class A), class ...Args >
      struct apply
        : if_<  typename yaul::tml::apply<Pred, BOOST_PP_CAT(A,BOOST_PP_ITERATION())>::type
              , long_<BOOST_PP_ITERATION()>
              , find_if_impl<Pred, BOOST_PP_INC(BOOST_PP_ITERATION())>::template apply<BOOST_PP_ENUM_PARAMS(BOOST_PP_INC(BOOST_PP_ITERATION()), class A), Args... > >
      { };
  };
} } } } // end namespace yaul::tml::variadic::detail

#endif // BOOST_PP_IS_ITERATING
