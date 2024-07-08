/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VEC2D_HH
#define KUBE_VEC2D_HH

#include <kube.hh>

namespace kube {

    template < typename T >
    struct alignas(T) vec2d final {

        T x, y;

        // Get 3d vector in which each element is mapped.
        constexpr auto map(T fn(T)) const noexcept
            -> vec2d { return {fn(x), fn(y)}; }

        // Co0nversion operator to U.
        template < typename U >
        constexpr operator vec2d<U>() const noexcept
            = delete;
    };

    // Conversion operator from f64 to f64::native_type.
    template <>
    template <>
    constexpr vec2d<f64>::operator vec2d<typename f64::native_type>() const noexcept {
        return {x, y};
    }

    // Conversion operator from f32 to f32::native_type.
    template <>
    template <>
    constexpr vec2d<f32>::operator vec2d<typename f32::native_type>() const noexcept {
        return {x.native, y.native};
    }

    // Conversion operator from f64:native_type to f64.
    template <>
    template <>
    constexpr vec2d<typename f64::native_type>::operator vec2d<f64>() const noexcept {
        return {{x}, {y}};
    }

    // Conversion operator from f32::native_type to f32.
    template <>
    template <>
    constexpr vec2d<typename f32::native_type>::operator vec2d<f32>() const noexcept {
        return {{x}, {y}};
    }

    // Implements for "add" of 2d vector.
    template < typename T >
    constexpr auto operator+(const vec2d<T> &v1, const vec2d<T> &v2) noexcept
        -> vec2d<T> { return { v1.x + v2.x, v1.y + v2.y}; }

    // Implements for "sub" of 2d vector.
    template < typename T >
    constexpr auto operator-(const vec2d<T> &v1, const vec2d<T> &v2) noexcept
        -> vec2d<T> { return {v1.x - v2.x, v1.y - v2.y}; }

    // Implements for "mul" of 2d vector.
    template < typename T >
    constexpr auto operator*(const vec2d<T> &v1, const vec2d<T> &v2) noexcept
        -> vec2d<T> { return {v1.x * v2.x, v1.y * v2.y}; }

    // Implements for "div" of 2d vector.
    template < typename T >
    constexpr auto operator/(const vec2d<T> &v1, const vec2d<T> &v2) noexcept
        -> vec2d<T> { return {v1.x / v2.x, v1.y / v2.y}; }

    // Implements for "mod" of 2d vector.
    template < typename T >
    constexpr auto operator%(const vec2d<T> &v1, const vec2d<T> &v2) noexcept
        -> vec2d<T> { return {v1.x % v2.x, v1.y % v2.y}; }

    // Implements for "add" of 2d vector.
    template < typename T >
    constexpr auto operator+(const vec2d<T> &v, const T &scalar) noexcept
        -> vec2d<T> { return {v.x + scalar, v.y + scalar}; }

    // Implements for "sub" of 2d vector.
    template < typename T >
    constexpr auto operator-(const vec2d<T> &v, const T &scalar) noexcept
        -> vec2d<T> { return {v.x - scalar, v.y - scalar}; }

    // Implements for "mul" of 2d vector.
    template < typename T >
    constexpr auto operator*(const vec2d<T> &v, const T &scalar) noexcept
        -> vec2d<T> { return {v.x * scalar, v.y * scalar}; }

    // Implements for "div" of 2d vector.
    template < typename T >
    constexpr auto operator/(const vec2d<T> &v, const T &scalar) noexcept
        -> vec2d<T> { return {v.x / scalar, v.y / scalar}; }

    // Implements for "mod" of 2d vector.
    template < typename T >
    constexpr auto operator%(const vec2d<T> &v, const T &scalar) noexcept
        -> vec2d<T> { return {v.x % scalar, v.y % scalar}; }

    // Explicit instatiation.
    template struct vec2d<f64>;
    template struct vec2d<f32>;
    template struct vec2d<typename f64::native_type>;
    template struct vec2d<typename f32::native_type>;

    // Hypothesis of 2d vector.
    template < typename T >
    inline auto hypot(vec2d<T> v) noexcept
        -> T = delete;
    
    // Hypothesis of 2d f64 vector.
    template <>
    inline auto hypot(vec2d<f64> v) noexcept
        -> f64 { return {kernel::hypot2d_f64(v.x, v.y)}; }

    // Hypothesis of 2d f32 vector.
    template <>
    inline auto hypot(vec2d<f32> v) noexcept
        -> f32 { return {kernel::hypot2d_f32(v.x, v.y)}; }
}

#endif