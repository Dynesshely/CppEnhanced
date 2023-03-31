#ifndef _INC_STDCPP_FECS_HPP_
#define _INC_STDCPP_FECS_HPP_
#include "libplatform.h"

#ifndef __has_include
#   define __has_include(x) 1
#endif

#ifndef _CONSTEXPR11
#   if __has_cpp11__
#       define _CONSTEXPR11 constexpr
#   else
#       define _CONSTEXPR11
#   endif
#endif

#ifndef _CONSTEXPR14
#   if __has_cpp14__
#      define _CONSTEXPR14 constexpr
#   else
#       define _CONSTEXPR14
#   endif
#endif

#ifndef _CONSTEXPR17
#   if __has_cpp17__
#       define _CONSTEXPR17 constexpr
#   else
#       define _CONSTEXPR17
#   endif
#endif

#ifndef _CONSTEXPR20
#   if __has_cpp20__
#       define _CONSTEXPR20 constexpr
#   else
#       define _CONSTEXPR20
#   endif
#endif

#ifndef __declspec
#if !__has_msvc_compiler__
#   define __declspec(x)
#endif
#endif

#if !__has_cpp11__
#   define constexpr
#   define noexcept
#endif

#if !__has_cpp17__
#   define __nodiscard__ 
#else
#   define __nodiscard__ [[nodiscard]]
#endif

#endif