/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VECTOR3D_HH
#define KUBE_VECTOR3D_HH

#include <kube/kube.hh>

namespace kube {

template < typename T >
struct alignas(T) Vector3D final {

    // TODO
    T array[3];

    // TODO
    constexpr Vector3D() = default;

    // TODO
    constexpr Vector3D(T x, T y, T z) : array {x, y, z} {}

    // TODO
    constexpr decltype(auto) x() const noexcept { return array[0]; }

    // TODO
    constexpr decltype(auto) y() const noexcept { return array[1]; }

    // TODO
    constexpr decltype(auto) z() const noexcept { return array[2]; }
};

// TODO
template struct Vector3D<f64>;
template struct Vector3D<f32>;

// TODO
template < typename T >
constexpr auto operator+(const Vector3D<T> &v1, const Vector3D<T> &v2) noexcept
    -> Vector3D<T> { return {v1.x() + v2.x(), v1.y() + v2.y(), v1.z() + v2.z()}; }

// TODO
template < typename T >
constexpr auto operator-(const Vector3D<T> &v1, const Vector3D<T> &v2) noexcept
    -> Vector3D<T> { return {v1.x() - v2.x(), v1.y() - v2.y(), v1.z() - v2.z()}; }

// TODO
template < typename T >
constexpr auto operator*(const Vector3D<T> &v1, const Vector3D<T> &v2) noexcept
    -> Vector3D<T> { return {v1.x() * v2.x(), v1.y() * v2.y(), v1.z() * v2.z()}; }

// TODO
template < typename T >
constexpr auto operator/(const Vector3D<T> &v1, const Vector3D<T> &v2) noexcept
    -> Vector3D<T> { return {v1.x() / v2.x(), v1.y() / v2.y(), v1.z() / v2.z()}; }

// TODO
template < typename T >
constexpr auto operator+(const Vector3D<T> &v, const T &scalar) noexcept
    -> Vector3D<T> { return {v.x() + scalar, v.y() + scalar, v.z() + scalar}; }

// TODO
template < typename T >
constexpr auto operator-(const Vector3D<T> &v, const T &scalar) noexcept
    -> Vector3D<T> { return {v.x() - scalar, v.y() - scalar, v.z() - scalar}; }

// TODO
template < typename T >
constexpr auto operator*(const Vector3D<T> &v, const T &scalar) noexcept
    -> Vector3D<T> { return {v.x() * scalar, v.y() * scalar, v.z() * scalar}; }

// TODO
template < typename T >
constexpr auto operator/(const Vector3D<T> &v, const T &scalar) noexcept
    -> Vector3D<T> { return {v.x() / scalar, v.y() / scalar, v.z() / scalar}; }

// TODO
template < typename T >
inline auto hypot(const Vector3D<T> &v) noexcept
    -> T = delete;

// TODO
template <>
inline auto hypot(const Vector3D<f64> &v) noexcept
    -> f64 { return {hypot(v.x(), v.y(), v.z())}; }

// TODO
template <>
inline auto hypot(const Vector3D<f32> &v) noexcept
    -> f32 { return {hypot(v.x(), v.y(), v.z())}; }

}

#endif