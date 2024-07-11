/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VIDEO_VEC3D_HH
#define KUBE_VIDEO_VEC3D_HH

#include <kube.hh>

namespace kube::video {

    template < typename T >
    struct alignas(T) Vec3D final {

        T array[3];

        // Construct from XYZ dimensions.
        constexpr Vec3D(T x, T y, T z) : array {x, y, z} {
        }

        // Accessor for X dimension.
        constexpr decltype(auto) x() const noexcept { return array[0]; }

        // Accessor for Y dimension.
        constexpr decltype(auto) y() const noexcept { return array[1]; }

        // Accessor for Z dimension.
        constexpr decltype(auto) z() const noexcept { return array[2]; }

        // Co0nversion operator to U.
        template < typename U >
        constexpr operator Vec3D<U>() const noexcept
            = delete;
    };

    // Explicit instatiation.
    template struct Vec3D<f64>;
    template struct Vec3D<f32>;
    template struct Vec3D<typename f64::native_type>;
    template struct Vec3D<typename f32::native_type>;

    // Conversion operator to f64 to f64::native_type.
    template <>
    template <>
    constexpr Vec3D<f64>::operator Vec3D<f64::native_type>() const noexcept {
        return {x(), y(), z()};
    }

    // Conversion operator to f32 to f32::native_type.
    template <>
    template <>
    constexpr Vec3D<f32>::operator Vec3D<f32::native_type>() const noexcept {
        return {x(), y(), z()};
    }

    // Conversion operator to f64::native_type to f64.
    template <>
    template <>
    constexpr Vec3D<typename f64::native_type>::operator Vec3D<f64>() const noexcept {
        return {{x()}, {y()}, {z()}};
    }

    // Conversion operator to f32::native_type to f32.
    template <>
    template <>
    constexpr Vec3D<typename f32::native_type>::operator Vec3D<f32>() const noexcept {
        return {{x()}, {y()}, {z()}};
    }

    // Implements for "add" of 3d vector.
    template < typename T >
    constexpr auto operator+(const Vec3D<T> &v1, const Vec3D<T> &v2) noexcept
        -> Vec3D<T> { return {v1.x() + v2.x(), v1.y() + v2.y(), v1.z() + v2.z()}; }

    // Implements for "sub" of 3d vector.
    template < typename T >
    constexpr auto operator-(const Vec3D<T> &v1, const Vec3D<T> &v2) noexcept
        -> Vec3D<T> { return {v1.x() - v2.x(), v1.y() - v2.y(), v1.z() - v2.z()}; }

    // Implements for "mul" of 3d vector.
    template < typename T >
    constexpr auto operator*(const Vec3D<T> &v1, const Vec3D<T> &v2) noexcept
        -> Vec3D<T> { return {v1.x() * v2.x(), v1.y() * v2.y(), v1.z() * v2.z()}; }

    // Implements for "div" of 3d vector.
    template < typename T >
    constexpr auto operator/(const Vec3D<T> &v1, const Vec3D<T> &v2) noexcept
        -> Vec3D<T> { return {v1.x() / v2.x(), v1.y() / v2.y(), v1.z() / v2.z()}; }

    // Implements for "mod" of 3d vector.
    template < typename T >
    constexpr auto operator%(const Vec3D<T> &v1, const Vec3D<T> &v2) noexcept
        -> Vec3D<T> { return {v1.x() % v2.x(), v1.y() % v2.y(), v1.z() % v2.z()}; }

    // Implements for "add" of 3d vector.
    template < typename T >
    constexpr auto operator+(const Vec3D<T> &v, const T &scalar) noexcept
        -> Vec3D<T> { return {v.x() + scalar, v.y() + scalar, v.z() + scalar}; }

    // Implements for "sub" of 3d vector.
    template < typename T >
    constexpr auto operator-(const Vec3D<T> &v, const T &scalar) noexcept
        -> Vec3D<T> { return {v.x() - scalar, v.y() - scalar, v.z() - scalar}; }

    // Implements for "mul" of 3d vector.
    template < typename T >
    constexpr auto operator*(const Vec3D<T> &v, const T &scalar) noexcept
        -> Vec3D<T> { return {v.x() * scalar, v.y() * scalar, v.z() * scalar}; }

    // Implements for "div" of 3d vector.
    template < typename T >
    constexpr auto operator/(const Vec3D<T> &v, const T &scalar) noexcept
        -> Vec3D<T> { return {v.x() / scalar, v.y() / scalar, v.z() / scalar}; }

    // Implements for "mod" of 3d vector.
    template < typename T >
    constexpr auto operator%(const Vec3D<T> &v, const T &scalar) noexcept
        -> Vec3D<T> { return {v.x() % scalar, v.y() % scalar, v.z() % scalar}; }

    // Hypothesis of 3d vector.
    template < typename T >
    inline auto hypot(const Vec3D<T> &v) noexcept
        -> T = delete;

    // Hypothesis of 3d f64 vector.
    template <>
    inline auto hypot(const Vec3D<f64> &v) noexcept
        -> f64 { return {math::hypot(v.x(), v.y(), v.z())}; }

    // Hypothesis of 3d f32 vector.
    template <>
    inline auto hypot(const Vec3D<f32> &v) noexcept
        -> f32 { return {math::hypot(v.x(), v.y(), v.z())}; }
}

#endif