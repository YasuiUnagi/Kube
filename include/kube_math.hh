/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_MATH_HH
#define KUBE_MATH_HH

#include <kube.hh>

namespace kube {

    // Kernels of math function for 64bit floating point.

    KUBE_HEADERONLY_INLINE auto _kfloor_f64(typename f64::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _kceil_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _kabs_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _ksin_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _kcos_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _ktan_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _kasin_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _kacos_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _katan_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;
    
    KUBE_HEADERONLY_INLINE auto _klog_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _klog2_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _kexp_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _kexp2_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _ksqrt_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _kcbrt_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _khypot2d_f64(
        typename f64::native_type x,
        typename f64::native_type y
    ) noexcept
        -> typename f64::native_type;

    KUBE_HEADERONLY_INLINE auto _khypot3d_f64(
        typename f64::native_type x,
        typename f64::native_type y,
        typename f64::native_type z
    ) noexcept
        -> typename f64::native_type;

    // Kernels of math function for 32bit floating point.

    KUBE_HEADERONLY_INLINE auto _kfloor_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _kceil_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _kabs_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _ksin_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _kcos_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _ktan_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _kasin_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _kacos_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _katan_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _klog_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _klog2_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _kexp_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _kexp2_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _ksqrt_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _kcbrt_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _khypot2d_f32(
        typename f32::native_type x,
        typename f32::native_type y
    ) noexcept
        -> typename f32::native_type;

    KUBE_HEADERONLY_INLINE auto _khypot3d_f32(
        typename f32::native_type x,
        typename f32::native_type y,
        typename f32::native_type z
    ) noexcept
        -> typename f32::native_type;


    template < typename T >
    inline auto floor(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto ceil(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto abs(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto sin(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto sinh(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto asin(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto asinh(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto cos(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto cosh(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto acos(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto acosh(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto tan(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto tanh(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto atan(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto atanh(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto exp(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto exp2(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto log(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto log2(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto sqrt(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto cbrt(T x) noexcept
        -> T = delete;

    template < typename T >
    inline auto hypot(T x, T y) noexcept
        -> T = delete;

    template < typename T >
    inline auto hypot(T x, T y, T z) noexcept
        -> T = delete;


    // Template specializations for 32bit floating point.

    template <>
    inline auto floor(f32 x) noexcept
        -> f32 {
        return {_kfloor_f32(x.native)};
    }

    template <>
    inline auto ceil(f32 x) noexcept
        -> f32 {
        return {_kceil_f32(x.native)};
    }

    template <>
    inline auto abs(f32 x) noexcept
        -> f32 {
        return {_kabs_f32(x.native)};
    }

    template <>
    inline auto sin(f32 x) noexcept
        -> f32 {
        return {_ksin_f32(x.native)};
    }

    template <>
    inline auto cos(f32 x) noexcept
        -> f32 {
        return {_kcos_f32(x.native)};
    }

    template <>
    inline auto tan(f32 x) noexcept
        -> f32 {
        return {_ktan_f32(x.native)};
    }

    template <>
    inline auto asin(f32 x) noexcept
        -> f32 {
        return {_kasin_f32(x.native)};
    }

    template <>
    inline auto acos(f32 x) noexcept
        -> f32 {
        return {_kacos_f32(x.native)};
    }

    template <>
    inline auto atan(f32 x) noexcept
        -> f32 {
        return {_katan_f32(x.native)};
    }

    template <>
    inline auto log(f32 x) noexcept
        -> f32 {
        return {_klog_f32(x.native)};
    }

    template <>
    inline auto log2(f32 x) noexcept
        -> f32 {
        return {_klog2_f32(x.native)};
    }

    template <>
    inline auto exp(f32 x) noexcept
        -> f32 {
        return {_kexp_f32(x.native)};
    }

    template <>
    inline auto exp2(f32 x) noexcept
        -> f32 {
        return {_kexp2_f32(x.native)};
    }

    template <>
    inline auto sqrt(f32 x) noexcept
        -> f32 {
        return {_ksqrt_f32(x.native)};
    }

    template <>
    inline auto cbrt(f32 x) noexcept
        -> f32 {
        return {_kcbrt_f32(x.native)};
    }

    template <>
    inline auto hypot<f32>(f32 x, f32 y) noexcept
        -> f32 {
        return {_khypot2d_f32(x.native, y.native)};
    }

    template <>
    inline auto hypot<f32>(f32 x, f32 y, f32 z) noexcept
        -> f32 {
        return {_khypot3d_f32(x.native, y.native, z.native)};
    }

    // Template specializations for f64
    template <>
    inline auto floor(f64 x) noexcept
        -> f64 {
        return {_kfloor_f64(x.native)};
    }

    template <>
    inline auto ceil(f64 x) noexcept
        -> f64 {
        return {_kceil_f64(x.native)};
    }

    template <>
    inline auto abs(f64 x) noexcept
        -> f64 {
        return {_kabs_f64(x.native)};
    }

    template <>
    inline auto sin(f64 x) noexcept
        -> f64 {
        return {_ksin_f64(x.native)};
    }

    template <>
    inline auto cos(f64 x) noexcept
        -> f64 {
        return {_kcos_f64(x.native)};
    }

    template <>
    inline auto tan(f64 x) noexcept
        -> f64 {
        return {_ktan_f64(x.native)};
    }

    template <>
    inline auto asin(f64 x) noexcept
        -> f64 {
        return {_kasin_f64(x.native)};
    }

    template <>
    inline auto acos(f64 x) noexcept
        -> f64 {
        return {_kacos_f64(x.native)};
    }

    template <>
    inline auto atan(f64 x) noexcept
        -> f64 {
        return {_katan_f64(x.native)};
    }

    template <>
    inline auto log(f64 x) noexcept
        -> f64 {
        return {_klog_f64(x.native)};
    }

    template <>
    inline auto log2(f64 x) noexcept
        -> f64 {
        return {_klog2_f64(x.native)};
    }

    template <>
    inline auto exp(f64 x) noexcept
        -> f64 {
        return {_kexp_f64(x.native)};
    }

    template <>
    inline auto exp2(f64 x) noexcept
        -> f64 {
        return {_kexp2_f64(x.native)};
    }

    template <>
    inline auto sqrt(f64 x) noexcept
        -> f64 {
        return {_ksqrt_f64(x.native)};
    }

    template <>
    inline auto cbrt(f64 x) noexcept
        -> f64 {
        return {_kcbrt_f64(x.native)};
    }

    template <>
    inline auto hypot(f64 x, f64 y) noexcept
        -> f64 {
        return {_khypot2d_f64(x.native, y.native)};
    }

    template <>
    inline auto hypot(f64 x, f64 y, f64 z) noexcept
        -> f64 {
        return {_khypot3d_f64(x.native, y.native, z.native)};
    }
}

#endif