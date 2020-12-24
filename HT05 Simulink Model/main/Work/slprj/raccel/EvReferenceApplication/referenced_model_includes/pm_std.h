/* Copyright 2009-2019 The MathWorks, Inc. */
/*!
 * @file
 * Physical modeling standard header.
 */

#ifndef pm_std_h
#define pm_std_h

/* disable a minimal set of warnings from tmwtypes and rtwtypes (assume tmwtypes
 * and rtwtypes will handle c89 well w.r.t. different compilers) such that
 * -std=c89 -pedantic could be used to strictly force c89 on physmod deployed c
 * code.  otherwise, even though the prebuilt libraries are compiled warning
 * free in house, the customers might still run into compilation failure when
 * compiling the deployed code using their specific compilers supporint c89
 * only.  since visual studio (after v12) does not specially support c89 now,
 * gcc and clang compilers are used together to provide enforcement for
 * windows(clang with clang toolchain), linux(gcc with cc toolchain), and
 * maci(clang with cc toolchain). see g2037404. */
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wlong-long"
#pragma clang diagnostic ignored "-Wlanguage-extension-token"
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wlong-long"
#endif

#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"

#else
#include "rtwtypes.h"

#endif

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic pop
#endif

#include <math.h>
#include <pm_inline.h>
#include <pm_types.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

#define pmf_strcpy strcpy
#define pmf_calloc calloc
#define pmf_free free
#define pmf_malloc malloc

void pmf_printf(char const*, ...);

void pmf_vprintf(char const*, va_list);

int pmf_snprintf(char*, size_t, char const*, ...);

int pmf_vsnprintf(char*, size_t, char const*, va_list);

real_T pmf_get_eps(void);

boolean_T pmf_is_nan(real_T x);

boolean_T pmf_is_inf(real_T x);

real_T pmf_get_real_max(void);

real_T pmf_get_real_min(void);

real_T pmf_get_pi(void);

real_T pmf_get_inf(void);

real_T pmf_get_nan(void);

void pmf_warning(const char* w, ...);

void pmf_preformatted_warning(const char* id, const char* msg);

int pmf_vsnprintf_message(char*       buffer,
                          size_t      l,
                          const char* format,
                          va_list     arg);

int pmf_snprintf_message(char* buffer, size_t length, const char* format, ...);

boolean_T pmf_is_interrupt_pending(void);

real_T pmf_asin(real_T x);

real_T pmf_acos(real_T x);

real_T pmf_log(real_T x);

real_T pmf_log10(real_T x);

real_T pmf_pow(real_T x, real_T y);

real_T pmf_sqrt(real_T x);

#ifndef TRUE
#define TRUE (1U)
#endif

#ifndef FALSE
#define FALSE (0U)
#endif

typedef const char* PmfMessageId;

#endif /* __pm_std_h__ */
/* [EOF] pm_std.h */
