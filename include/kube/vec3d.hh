/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VEC3D_HH
#define KUBE_VEC3D_HH

#include <kube.hh>

namespace kube {

    template < typename T >
    struct alignas(T) Vec3D final {

        T x, y, z;

        // Get 3d vector in which each element is mapped.
        constexpr auto map(T fn(T)) const noexcept
            -> Vec3D { return {fn(x), fn(y), fn(z)}; }

        // Co0nversion operator to U.
        template < typename U >
        constexpr operator Vec3D<U>() const noexcept
            = delete;
    };

    // Conversion operator to f64 to f64::native_type.
    template <>
    template <>
    constexpr Vec3D<f64>::operator Vec3D<f64::native_type>() const noexcept {
        return {x.native, y.native, z.native};
    }

    // Conversion operator to f32 to f32::native_type.
    template <>
    template <>
    constexpr Vec3D<f32>::operator Vec3D<f32::native_type>() const noexcept {
        return {x.native, y.native, z.native};
    }

    // Conversion operator to f64::native_type to f64.
    template <>
    template <>
    constexpr Vec3D<f64::native_type>::operator Vec3D<f64>() const noexcept {
        return {x, y, z};
    }

    // Conversion operator to f32::native_type to f32.
    template <>
    template <>
    constexpr Vec3D<f32::native_type>::operator Vec3D<f32>() const noexcept {
        return {x, y, z};
    }

    // Implements for "add" of 3d vector.
    template < typename T >
    constexpr auto operator+(const Vec3D<T> &v1, const Vec3D<T> &v2) noexcept
        -> Vec3D<T> { return { v1.x() + v2.x(), v1.y() + v2.y(), v1.z() + v2.z()}; }

    // Implements for "sub" of 3d vector.
    template < typename T >
    constexpr auto operator-(const Vec3D<T> &v1, const Vec3D<T> &v2) noexcept
        -> Vec3D<T> { return { v1.x() - v2.x(), v1.y() - v2.y(), v1.z() - v2.z()}; }

    // Implements for "mul" of 3d vector.
    template < typename T >
    constexpr auto operator*(const Vec3D<T> &v1, const Vec3D<T> &v2) noexcept
        -> Vec3D<T> { return { v1.x() * v2.x(), v1.y() * v2.y(), v1.z() * v2.z()}; }

    // Implements for "div" of 3d vector.
    template < typename T >
    constexpr auto operator/(const Vec3D<T> &v1, const Vec3D<T> &v2) noexcept
        -> Vec3D<T> { return { v1.x() / v2.x(), v1.y() / v2.y(), v1.z() / v2.z()}; }

    // Implements for "mod" of 3d vector.
    template < typename T >
    constexpr auto operator%(const Vec3D<T> &v1, const Vec3D<T> &v2) noexcept
        -> Vec3D<T> { return { v1.x() % v2.x(), v1.y() % v2.y(), v1.z() % v2.z()}; }

    // Implements for "add" of 3d vector.
    template < typename T >
    constexpr auto operator+(const Vec3D<T> &v, const T &scalar) noexcept
        -> Vec3D<T> { return { v.x + scalar, v.y + scalar, v.z + scalar}; }

    // Implements for "sub" of 3d vector.
    template < typename T >
    constexpr auto operator-(const Vec3D<T> &v, const T &scalar) noexcept
        -> Vec3D<T> { return { v.x - scalar, v.y - scalar, v.z - scalar}; }

    // Implements for "mul" of 3d vector.
    template < typename T >
    constexpr auto operator*(const Vec3D<T> &v, const T &scalar) noexcept
        -> Vec3D<T> { return { v.x * scalar, v.y * scalar, v.z * scalar}; }

    // Implements for "div" of 3d vector.
    template < typename T >
    constexpr auto operator/(const Vec3D<T> &v, const T &scalar) noexcept
        -> Vec3D<T> { return { v.x / scalar, v.y / scalar, v.z / scalar}; }

    // Implements for "mod" of 3d vector.
    template < typename T >
    constexpr auto operator%(const Vec3D<T> &v, const T &scalar) noexcept
        -> Vec3D<T> { return { v.x % scalar, v.y % scalar, v.z % scalar}; }

    // Explicit instatiation.
    template struct Vec3D<f64>;
    template struct Vec3D<f32>;
    template struct Vec3D<typename f64::native_type>;
    template struct Vec3D<typename f32::native_type>;

    // Hypothesis of 3d vector.
    template < typename T >
    inline auto hypot(Vec3D<T> v) noexcept
        -> T = delete;

    // Hypothesis of 3d f64 vector.
    template <>
    inline auto hypot(Vec3D<f64> v) noexcept
        -> f64 { return {kernel::hypot3d_f64(v.x, v.y, v.z)}; }

    // Hypothesis of 3d f32 vector.
    template <>
    inline auto hypot(Vec3D<f32> v) noexcept
        -> f32 { return {kernel::hypot3d_f32(v.x, v.y, v.z)}; }
}

#endif