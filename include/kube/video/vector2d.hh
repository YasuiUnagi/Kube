/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VIDEO_VECTOR2D_HH
#define KUBE_VIDEO_VECTOR2D_HH

#include <kube.hh>

namespace kube::video {

template < typename T >
struct alignas(T) Vector2D final {

    // C-array.
    T array[2];

    // Construct from XY dimensions.
    constexpr Vector2D(T x, T y) : array {x, y} {
    }

    // Accessor for X dimension.
    constexpr decltype(auto) x() const noexcept { return array[0]; }

    // Accessor for Y dimension.
    constexpr decltype(auto) y() const noexcept { return array[1]; }
};

// Explicit instatiation.
template struct Vector2D<f64>;
template struct Vector2D<f32>;

// Implements for "add" of 2d vector.
template < typename T >
constexpr auto operator+(const Vector2D<T> &v1, const Vector2D<T> &v2) noexcept
    -> Vector2D<T> { return {v1.x() + v2.x(), v1.y() + v2.y()}; }

// Implements for "sub" of 2d vector.
template < typename T >
constexpr auto operator-(const Vector2D<T> &v1, const Vector2D<T> &v2) noexcept
    -> Vector2D<T> { return {v1.x() - v2.x(), v1.y() - v2.y()}; }

// Implements for "mul" of 2d vector.
template < typename T >
constexpr auto operator*(const Vector2D<T> &v1, const Vector2D<T> &v2) noexcept
    -> Vector2D<T> { return {v1.x() * v2.x(), v1.y() * v2.y()}; }

// Implements for "div" of 2d vector.
template < typename T >
constexpr auto operator/(const Vector2D<T> &v1, const Vector2D<T> &v2) noexcept
    -> Vector2D<T> { return {v1.x() / v2.x(), v1.y() / v2.y()}; }

// Implements for "add" of 2d vector.
template < typename T >
constexpr auto operator+(const Vector2D<T> &v, const T &scalar) noexcept
    -> Vector2D<T> { return {v.x() + scalar, v.y() + scalar}; }

// Implements for "sub" of 2d vector.
template < typename T >
constexpr auto operator-(const Vector2D<T> &v, const T &scalar) noexcept
    -> Vector2D<T> { return {v.x() - scalar, v.y() - scalar}; }

// Implements for "mul" of 2d vector.
template < typename T >
constexpr auto operator*(const Vector2D<T> &v, const T &scalar) noexcept
    -> Vector2D<T> { return {v.x() * scalar, v.y() * scalar}; }

// Implements for "div" of 2d vector.
template < typename T >
constexpr auto operator/(const Vector2D<T> &v, const T &scalar) noexcept
    -> Vector2D<T> { return {v.x() / scalar, v.y() / scalar}; }

// Hypothesis of 2d vector.
template < typename T >
inline auto hypot(const Vector2D<T> &v) noexcept
    -> T = delete;

// Hypothesis of 2d f64 vector.
template <>
inline auto hypot(const Vector2D<f64> &v) noexcept
    -> f64 { return {math::hypot(v.x(), v.y())}; }

// Hypothesis of 2d f32 vector.
template <>
inline auto hypot(const Vector2D<f32> &v) noexcept
    -> f32 { return {math::hypot(v.x(), v.y())}; }

}

#endif