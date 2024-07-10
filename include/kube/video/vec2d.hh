/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VIDEO_VEC2D_HH
#define KUBE_VIDEO_VEC2D_HH

#include <kube.hh>

namespace kube::video {

    template < typename T >
    struct alignas(T) Vec2D final {

        T x, y;

        // Co0nversion operator to U.
        template < typename U >
        constexpr operator Vec2D<U>() const noexcept
            = delete;
    };

    // Conversion operator from f64 to f64::native_type.
    template <>
    template <>
    constexpr Vec2D<f64>::operator Vec2D<typename f64::native_type>() const noexcept {
        return {x, y};
    }

    // Conversion operator from f32 to f32::native_type.
    template <>
    template <>
    constexpr Vec2D<f32>::operator Vec2D<typename f32::native_type>() const noexcept {
        return {x, y};
    }

    // Conversion operator from f64:native_type to f64.
    template <>
    template <>
    constexpr Vec2D<typename f64::native_type>::operator Vec2D<f64>() const noexcept {
        return {{x}, {y}};
    }

    // Conversion operator from f32::native_type to f32.
    template <>
    template <>
    constexpr Vec2D<typename f32::native_type>::operator Vec2D<f32>() const noexcept {
        return {{x}, {y}};
    }

    // Implements for "add" of 2d vector.
    template < typename T >
    constexpr auto operator+(const Vec2D<T> &v1, const Vec2D<T> &v2) noexcept
        -> Vec2D<T> { return {v1.x + v2.x, v1.y + v2.y}; }

    // Implements for "sub" of 2d vector.
    template < typename T >
    constexpr auto operator-(const Vec2D<T> &v1, const Vec2D<T> &v2) noexcept
        -> Vec2D<T> { return {v1.x - v2.x, v1.y - v2.y}; }

    // Implements for "mul" of 2d vector.
    template < typename T >
    constexpr auto operator*(const Vec2D<T> &v1, const Vec2D<T> &v2) noexcept
        -> Vec2D<T> { return {v1.x * v2.x, v1.y * v2.y}; }

    // Implements for "div" of 2d vector.
    template < typename T >
    constexpr auto operator/(const Vec2D<T> &v1, const Vec2D<T> &v2) noexcept
        -> Vec2D<T> { return {v1.x / v2.x, v1.y / v2.y}; }

    // Implements for "mod" of 2d vector.
    template < typename T >
    constexpr auto operator%(const Vec2D<T> &v1, const Vec2D<T> &v2) noexcept
        -> Vec2D<T> { return {v1.x % v2.x, v1.y % v2.y}; }

    // Implements for "add" of 2d vector.
    template < typename T >
    constexpr auto operator+(const Vec2D<T> &v, const T &scalar) noexcept
        -> Vec2D<T> { return {v.x + scalar, v.y + scalar}; }

    // Implements for "sub" of 2d vector.
    template < typename T >
    constexpr auto operator-(const Vec2D<T> &v, const T &scalar) noexcept
        -> Vec2D<T> { return {v.x - scalar, v.y - scalar}; }

    // Implements for "mul" of 2d vector.
    template < typename T >
    constexpr auto operator*(const Vec2D<T> &v, const T &scalar) noexcept
        -> Vec2D<T> { return {v.x * scalar, v.y * scalar}; }

    // Implements for "div" of 2d vector.
    template < typename T >
    constexpr auto operator/(const Vec2D<T> &v, const T &scalar) noexcept
        -> Vec2D<T> { return {v.x / scalar, v.y / scalar}; }

    // Implements for "mod" of 2d vector.
    template < typename T >
    constexpr auto operator%(const Vec2D<T> &v, const T &scalar) noexcept
        -> Vec2D<T> { return {v.x % scalar, v.y % scalar}; }

    // Explicit instatiation.
    template struct Vec2D<f64>;
    template struct Vec2D<f32>;
    template struct Vec2D<typename f64::native_type>;
    template struct Vec2D<typename f32::native_type>;

    // Hypothesis of 2d vector.
    template < typename T >
    inline auto hypot(Vec2D<T> v) noexcept
        -> T = delete;
    
    // Hypothesis of 2d f64 vector.
    template <>
    inline auto hypot(Vec2D<f64> v) noexcept
        -> f64 { return {math::hypot(v.x, v.y)}; }

    // Hypothesis of 2d f32 vector.
    template <>
    inline auto hypot(Vec2D<f32> v) noexcept
        -> f32 { return {math::hypot(v.x, v.y)}; }
}

#endif