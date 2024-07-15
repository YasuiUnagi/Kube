/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VECTOR2D_HH
#define KUBE_VECTOR2D_HH

#include <kube/kube.hh>

namespace kube {

// TODO
template < typename T >
struct alignas(T) Vector2D final {

    // TODO
    T array[2];

    // TODO
    constexpr Vector2D() = default;

    // TODO
    constexpr Vector2D(T x, T y) : array {x, y} {}

    // TODO
    constexpr decltype(auto) x() const noexcept { return array[0]; }

    // TODO
    constexpr decltype(auto) y() const noexcept { return array[1]; }
};

// TODO
template struct Vector2D<f64>;
template struct Vector2D<f32>;

// TODO
template < typename T >
constexpr auto operator+(const Vector2D<T> &v1, const Vector2D<T> &v2) noexcept
    -> Vector2D<T> { return {v1.x() + v2.x(), v1.y() + v2.y()}; }

// TODO
template < typename T >
constexpr auto operator-(const Vector2D<T> &v1, const Vector2D<T> &v2) noexcept
    -> Vector2D<T> { return {v1.x() - v2.x(), v1.y() - v2.y()}; }

// TODO
template < typename T >
constexpr auto operator*(const Vector2D<T> &v1, const Vector2D<T> &v2) noexcept
    -> Vector2D<T> { return {v1.x() * v2.x(), v1.y() * v2.y()}; }

// TODO
template < typename T >
constexpr auto operator/(const Vector2D<T> &v1, const Vector2D<T> &v2) noexcept
    -> Vector2D<T> { return {v1.x() / v2.x(), v1.y() / v2.y()}; }

// TODO
template < typename T >
constexpr auto operator+(const Vector2D<T> &v, const T &scalar) noexcept
    -> Vector2D<T> { return {v.x() + scalar, v.y() + scalar}; }

// TODO
template < typename T >
constexpr auto operator-(const Vector2D<T> &v, const T &scalar) noexcept
    -> Vector2D<T> { return {v.x() - scalar, v.y() - scalar}; }

// TODO
template < typename T >
constexpr auto operator*(const Vector2D<T> &v, const T &scalar) noexcept
    -> Vector2D<T> { return {v.x() * scalar, v.y() * scalar}; }

// TODO
template < typename T >
constexpr auto operator/(const Vector2D<T> &v, const T &scalar) noexcept
    -> Vector2D<T> { return {v.x() / scalar, v.y() / scalar}; }

// TODO
template < typename T >
inline auto hypot(const Vector2D<T> &v) noexcept
    -> T = delete;

// TODO
template <>
inline auto hypot(const Vector2D<f64> &v) noexcept
    -> f64 { return {hypot(v.x(), v.y())}; }

// TODO
template <>
inline auto hypot(const Vector2D<f32> &v) noexcept
    -> f32 { return {hypot(v.x(), v.y())}; }

}

#endif