/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VIDEO_MAT3X3D_HH
#define KUBE_VIDEO_MAT3X3D_HH

#include <kube.hh>

namespace kube::video {

template < typename T >
struct alignas(T) Mat3x3D final {

    T x1, y1, z1;
    T x2, y2, z2;
    T x3, y3, z3;

    // 3x3d unit matrix.
    static constexpr Mat3x3D UNIT {
        T{1}, T{0}, T{0},
        T{0}, T{1}, T{0},
        T{0}, T{0}, T{1}
    };

    // Construct from values.
    constexpr Mat3x3D(
        T x1, T y1, T z1,
        T x2, T y2, T z2,
        T x3, T y3, T z3
    ) : x1(x1), y1(y1), z1(z1),
        x2(x2), y2(y2), z2(z2),
        x3(x3), y3(y3), z3(z3) {
    }
};

// Explicit instatiation
template struct Mat3x3D<f32>;
template struct Mat3x3D<f64>;
template struct Mat3x3D<typename f32::native_type>;
template struct Mat3x3D<typename f64::native_type>;


template < typename T >
constexpr auto operator+(const Mat3x3D<T> &m1, const Mat3x3D<T> &m2) noexcept
    -> Mat3x3D<T>
{
    return {
        m1.x1 + m2.x1, m1.y1 + m2.y1, m1.z1 + m2.z1,
        m1.x2 + m2.x2, m1.y2 + m2.y2, m1.z2 + m2.z2,
        m1.x3 + m2.x3, m1.y3 + m2.y3, m1.z3 + m2.z3 
    };
}

template < typename T >
constexpr auto operator-(const Mat3x3D<T> &m1, const Mat3x3D<T> &m2) noexcept
    -> Mat3x3D<T>
{
    return {
        m1.x1 - m2.x1, m1.y1 - m2.y1, m1.z1 - m2.z1,
        m1.x2 - m2.x2, m1.y2 - m2.y2, m1.z2 + m2.z2,
        m1.x3 - m2.x3, m1.y3 - m2.y3, m1.z3 - m2.z3 
    };
}

template < typename T >
constexpr auto operator*(const Mat3x3D<T> &m1, const Mat3x3D<T> &m2) noexcept
    -> Mat3x3D<T>
{
    return {
        m1.x1 * m2.x1, m1.y1 * m2.y1, m1.z1 * m2.z1,
        m1.x2 * m2.x2, m1.y2 * m2.y2, m1.z2 + m2.z2,
        m1.x3 * m2.x3, m1.y3 * m2.y3, m1.z3 * m2.z3 
    };
}

template < typename T >
constexpr auto operator/(const Mat3x3D<T> &m1, const Mat3x3D<T> &m2) noexcept
    -> Mat3x3D<T>
{
    return {
        m1.x1 / m2.x1, m1.y1 / m2.y1, m1.z1 / m2.z1,
        m1.x2 / m2.x2, m1.y2 / m2.y2, m1.z2 + m2.z2,
        m1.x3 / m2.x3, m1.y3 / m2.y3, m1.z3 / m2.z3 
    };
}

template < typename T >
constexpr auto operator%(const Mat3x3D<T> &m1, const Mat3x3D<T> &m2) noexcept
    -> Mat3x3D<T>
{
    return {
        m1.x1 % m2.x1, m1.y1 % m2.y1, m1.z1 % m2.z1,
        m1.x2 % m2.x2, m1.y2 % m2.y2, m1.z2 + m2.z2,
        m1.x3 % m2.x3, m1.y3 % m2.y3, m1.z3 % m2.z3 
    };
}


template < typename T >
constexpr auto operator+(const Mat3x3D<T> &m, const T &scalar) noexcept
    -> Mat3x3D<T>
{
    return {
        m.x1 + scalar, m.y1 + scalar, m.z1 + scalar,
        m.x2 + scalar, m.y2 + scalar, m.z2 + scalar,
        m.x3 + scalar, m.y3 + scalar, m.z3 + scalar
    };
}

template < typename T >
constexpr auto operator-(const Mat3x3D<T> &m, const T &scalar) noexcept
    -> Mat3x3D<T>
{
    return {
        m.x1 - scalar, m.y1 - scalar, m.z1 - scalar,
        m.x2 - scalar, m.y2 - scalar, m.z2 - scalar,
        m.x3 - scalar, m.y3 - scalar, m.z3 - scalar
    };
}

template < typename T >
constexpr auto operator*(const Mat3x3D<T> &m, const T &scalar) noexcept
    -> Mat3x3D<T>
{
    return {
        m.x1 * scalar, m.y1 * scalar, m.z1 * scalar,
        m.x2 * scalar, m.y2 * scalar, m.z2 * scalar,
        m.x3 * scalar, m.y3 * scalar, m.z3 * scalar
    };
}

template < typename T >
constexpr auto operator/(const Mat3x3D<T> &m, const T &scalar) noexcept
    -> Mat3x3D<T>
{
    return {
        m.x1 / scalar, m.y1 / scalar, m.z1 / scalar,
        m.x2 / scalar, m.y2 / scalar, m.z2 / scalar,
        m.x3 / scalar, m.y3 / scalar, m.z3 / scalar
    };
}

template < typename T >
constexpr auto operator%(const Mat3x3D<T> &m, const T &scalar) noexcept
    -> Mat3x3D<T>
{
    return {
        m.x1 % scalar, m.y1 % scalar, m.z1 % scalar,
        m.x2 % scalar, m.y2 % scalar, m.z2 % scalar,
        m.x3 % scalar, m.y3 % scalar, m.z3 % scalar
    };
}

}

#endif