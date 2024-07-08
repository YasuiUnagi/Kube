/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_MAT2X2D_HH
#define KUBE_MAT2X2D_HH

#include <kube.hh>

namespace kube {
    
    template < typename T >
    struct alignas(T) Mat2x2D final {

        T x1, y1;
        T x2, y2;

        // 2x2d unit matrix.
        static constexpr Mat2x2D UNIT {
            T(1), T(0),
            T(0), T(1)
        };

        // Construct from two vectors.
        constexpr Mat2x2D(
            const Vec2D<T> &v1,
            const Vec2D<T> &v2
        ) : Mat2x2D(
            v1.x, v1.y,
            v2.x, v2.y
        ) {
        }

        // Construct from values.
        constexpr Mat2x2D(
            T x1, T y1,
            T x2, T y2
        ) : x1(x1), y1(y1),
            x2(x2), y2(y2) {
        }

        // Get transposed 2x2d matrix.
        constexpr auto transpose() const noexcept
            -> Mat2x2D {
            return {
                x1, x2,
                y1, y2};
        }

        // Get 2x2d matrix in which each element is mapped.
        constexpr auto map(T fn(T)) const noexcept
            -> Mat2x2D {
            return {
                fn(x1), fn(y1),
                fn(x2), fn(y2)};
        }
    };


    template < typename T >
    constexpr auto operator+(const Mat2x2D<T> &m1, const Mat2x2D<T> &m2) noexcept
        -> Mat2x2D<T>
    {
        return {
            m1.x1 + m2.x1, m1.y1 + m2.y1,
            m1.x2 + m2.x2, m1.y2 + m2.y2};
    }

    template < typename T >
    constexpr auto operator-(const Mat2x2D<T> &m1, const Mat2x2D<T> &m2) noexcept
        -> Mat2x2D<T>
    {
        return {
            m1.x1 - m2.x1, m1.y1 - m2.y1,
            m1.x2 - m2.x2, m1.y2 - m2.y2};
    }

    template < typename T >
    constexpr auto operator*(const Mat2x2D<T> &m1, const Mat2x2D<T> &m2) noexcept
        -> Mat2x2D<T>
    {
        return {
            m1.x1 * m2.x1, m1.y1 * m2.y1,
            m1.x2 * m2.x2, m1.y2 * m2.y2};
    }

    template < typename T >
    constexpr auto operator/(const Mat2x2D<T> &m1, const Mat2x2D<T> &m2) noexcept
        -> Mat2x2D<T>
    {
        return {
            m1.x1 / m2.x1, m1.y1 / m2.y1,
            m1.x2 / m2.x2, m1.y2 / m2.y2};
    }

    template < typename T >
    constexpr auto operator%(const Mat2x2D<T> &m1, const Mat2x2D<T> &m2) noexcept
        -> Mat2x2D<T>
    {
        return {
            m1.x1 % m2.x1, m1.y1 % m2.y1,
            m1.x2 % m2.x2, m1.y2 % m2.y2};
    }


    template < typename T >
    constexpr auto operator+(const Mat2x2D<T> &m, const T &scalar) noexcept
        -> Mat2x2D<T>
    {
        return {
            m.x1 + scalar, m.y1 + scalar,
            m.x2 + scalar, m.y2 + scalar};
    }

    template < typename T >
    constexpr auto operator-(const Mat2x2D<T> &m, const T &scalar) noexcept
        -> Mat2x2D<T>
    {
        return {
            m.x1 - scalar, m.y1 - scalar,
            m.x2 - scalar, m.y2 - scalar};
    }

    template < typename T >
    constexpr auto operator*(const Mat2x2D<T> &m, const T &scalar) noexcept
        -> Mat2x2D<T>
    {
        return {
            m.x1 * scalar, m.y1 * scalar,
            m.x2 * scalar, m.y2 * scalar};
    }

    template < typename T >
    constexpr auto operator/(const Mat2x2D<T> &m, const T &scalar) noexcept
        -> Mat2x2D<T>
    {
        return {
            m.x1 / scalar, m.y1 / scalar,
            m.x2 / scalar, m.y2 / scalar};
    }

    template < typename T >
    constexpr auto operator%(const Mat2x2D<T> &m, const T &scalar) noexcept
        -> Mat2x2D<T>
    {
        return {
            m.x1 % scalar, m.y1 % scalar,
            m.x2 % scalar, m.y2 % scalar};
    }

    // Get 2d rotation matrix.
    template < typename T >
    constexpr auto rot2d(T radian) noexcept
        -> Mat2x2D<T> {
        T _sin = sin(radian);
        T _cos = cos(radian); 
        return {
            +_cos, -_sin,
            +_sin, +_cos
        };
    }
}

#endif