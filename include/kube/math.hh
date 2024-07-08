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
        -> f32 { return {kernel::floor_f32(x.native)}; }

    template <>
    inline auto ceil(f32 x) noexcept
        -> f32 { return {kernel::ceil_f32(x.native)}; }

    template <>
    inline auto abs(f32 x) noexcept
        -> f32 { return {kernel::abs_f32(x.native)}; }

    template <>
    inline auto sin(f32 x) noexcept
        -> f32 { return {kernel::sin_f32(x.native)}; }

    template <>
    inline auto cos(f32 x) noexcept
        -> f32 { return {kernel::cos_f32(x.native)}; }

    template <>
    inline auto tan(f32 x) noexcept
        -> f32 { return {kernel::tan_f32(x.native)}; }

    template <>
    inline auto asin(f32 x) noexcept
        -> f32 { return {kernel::asin_f32(x.native)}; }

    template <>
    inline auto acos(f32 x) noexcept
        -> f32 { return {kernel::acos_f32(x.native)}; }

    template <>
    inline auto atan(f32 x) noexcept
        -> f32 { return {kernel::atan_f32(x.native)}; }

    template <>
    inline auto sqrt(f32 x) noexcept
        -> f32 { return {kernel::sqrt_f32(x.native)}; }

    template <>
    inline auto cbrt(f32 x) noexcept
        -> f32 { return {kernel::cbrt_f32(x.native)}; }

    // Template specializations for f64
    template <>
    inline auto floor(f64 x) noexcept
        -> f64 { return {kernel::floor_f64(x.native)}; }

    template <>
    inline auto ceil(f64 x) noexcept
        -> f64 { return {kernel::ceil_f64(x.native)}; }

    template <>
    inline auto abs(f64 x) noexcept
        -> f64 { return {kernel::abs_f64(x.native)}; }

    template <>
    inline auto sin(f64 x) noexcept
        -> f64 { return {kernel::sin_f64(x.native)}; }

    template <>
    inline auto cos(f64 x) noexcept
        -> f64 { return {kernel::cos_f64(x.native)}; }

    template <>
    inline auto tan(f64 x) noexcept
        -> f64 { return {kernel::tan_f64(x.native)}; }

    template <>
    inline auto asin(f64 x) noexcept
        -> f64 { return {kernel::asin_f64(x.native)}; }

    template <>
    inline auto acos(f64 x) noexcept
        -> f64 { return {kernel::acos_f64(x.native)}; }

    template <>
    inline auto atan(f64 x) noexcept
        -> f64 { return {kernel::atan_f64(x.native)}; }

    template <>
    inline auto sqrt(f64 x) noexcept
        -> f64 { return {kernel::sqrt_f64(x.native)}; }

    template <>
    inline auto cbrt(f64 x) noexcept
        -> f64 { return {kernel::cbrt_f64(x.native)}; }

    template <>
    inline auto hypot(f64 x, f64 y) noexcept
        -> f64 { return {kernel::hypot2d_f64(x.native, y.native)}; }

    template <>
    inline auto hypot(f64 x, f64 y, f64 z) noexcept
        -> f64 { return {kernel::hypot3d_f64(x.native, y.native, z.native)}; }
}

#endif