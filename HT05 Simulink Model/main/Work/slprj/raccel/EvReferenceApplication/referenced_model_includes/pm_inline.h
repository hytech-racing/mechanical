/* Copyright 2016 The MathWorks, Inc. */

#ifndef pm_inline_h
#define pm_inline_h

#ifdef _MSC_VER
#define PMF_DEPLOY_STATIC static __inline
#elif defined(__GNUC__) || defined(__clang__) || defined(__MINGW64__)
#define PMF_DEPLOY_STATIC __attribute__ ((unused)) static
#else
#define PMF_DEPLOY_STATIC static
#endif

#endif /* __pm_inline_h__ */
/* [EOF] pm_inline.h */
