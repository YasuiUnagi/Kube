/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VIDEO_VECTOR3D_HH
#define KUBE_VIDEO_VECTOR3D_HH

#include <kube.hh>

namespace kube::video {

template < typename T >
struct alignas(T) Vector3D final {

    // C-array.
    T array[3];

    // Construct from XYZ dimensions.
    constexpr Vector3D(T x, T y, T z) : array {x, y, z} {
    }

    // Accessor for X dimension.
    constexpr decltype(auto) x() const noexcept { return array[0]; }

    // Accessor for Y dimension.
    constexpr decltype(auto) y() const noexcept { return array[1]; }

    // Accessor for Z dimension.
    constexpr decltype(auto) z() const noexcept { return array[2]; }
};

// Explicit instatiation.
template struct Vector3D<f64>;
template struct Vector3D<f32>;

// Implements for "add" of 3d vector.
template < typename T >
constexpr auto operator+(const Vector3D<T> &v1, const Vector3D<T> &v2) noexcept
    -> Vector3D<T> { return {v1.x() + v2.x(), v1.y() + v2.y(), v1.z() + v2.z()}; }

// Implements for "sub" of 3d vector.
template < typename T >
constexpr auto operator-(const Vector3D<T> &v1, const Vector3D<T> &v2) noexcept
    -> Vector3D<T> { return {v1.x() - v2.x(), v1.y() - v2.y(), v1.z() - v2.z()}; }

// Implements for "mul" of 3d vector.
template < typename T >
constexpr auto operator*(const Vector3D<T> &v1, const Vector3D<T> &v2) noexcept
    -> Vector3D<T> { return {v1.x() * v2.x(), v1.y() * v2.y(), v1.z() * v2.z()}; }

// Implements for "div" of 3d vector.
template < typename T >
constexpr auto operator/(const Vector3D<T> &v1, const Vector3D<T> &v2) noexcept
    -> Vector3D<T> { return {v1.x() / v2.x(), v1.y() / v2.y(), v1.z() / v2.z()}; }

// Implements for "add" of 3d vector.
template < typename T >
constexpr auto operator+(const Vector3D<T> &v, const T &scalar) noexcept
    -> Vector3D<T> { return {v.x() + scalar, v.y() + scalar, v.z() + scalar}; }

// Implements for "sub" of 3d vector.
template < typename T >
constexpr auto operator-(const Vector3D<T> &v, const T &scalar) noexcept
    -> Vector3D<T> { return {v.x() - scalar, v.y() - scalar, v.z() - scalar}; }

// Implements for "mul" of 3d vector.
template < typename T >
constexpr auto operator*(const Vector3D<T> &v, const T &scalar) noexcept
    -> Vector3D<T> { return {v.x() * scalar, v.y() * scalar, v.z() * scalar}; }

// Implements for "div" of 3d vector.
template < typename T >
constexpr auto operator/(const Vector3D<T> &v, const T &scalar) noexcept
    -> Vector3D<T> { return {v.x() / scalar, v.y() / scalar, v.z() / scalar}; }

// Hypothesis of 3d vector.
template < typename T >
inline auto hypot(const Vector3D<T> &v) noexcept
    -> T = delete;

// Hypothesis of 3d f64 vector.
template <>
inline auto hypot(const Vector3D<f64> &v) noexcept
    -> f64 { return {math::hypot(v.x(), v.y(), v.z())}; }

// Hypothesis of 3d f32 vector.
template <>
inline auto hypot(const Vector3D<f32> &v) noexcept
    -> f32 { return {math::hypot(v.x(), v.y(), v.z())}; }

}

#endif