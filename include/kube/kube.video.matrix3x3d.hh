/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_MATRIX3X3D_HH
#define KUBE_MATRIX3X3D_HH

#include <kube/kube.hh>

namespace kube {

// TODO
template < typename T >
struct alignas(T) Matrix3x3D final {

    // TODO
    T array[3][3];

    // TODO
    constexpr Matrix3x3D() = default;

    // TODO
    constexpr Matrix3x3D(
        T x1, T y1, T z1,
        T x2, T y2, T z2,
        T x3, T y3, T z3
    ) : array {{x1, y1, z1}, {x2, y2, z2}, {x3, y3, z3}} {}

    // TODO
    constexpr decltype(auto) x1() const noexcept { return array[0][0]; }

    // TODO
    constexpr decltype(auto) y1() const noexcept { return array[0][1]; }

    // TODO
    constexpr decltype(auto) z1() const noexcept { return array[0][2]; }

    // TODO
    constexpr decltype(auto) x2() const noexcept { return array[1][0]; }

    // TODO
    constexpr decltype(auto) y2() const noexcept { return array[1][1]; }

    // TODO
    constexpr decltype(auto) z2() const noexcept { return array[1][2]; }

    // TODO
    constexpr decltype(auto) x3() const noexcept { return array[2][0]; }

    // TODO
    constexpr decltype(auto) y3() const noexcept { return array[2][1]; }

    // TODO
    constexpr decltype(auto) z3() const noexcept { return array[2][2]; }
};

// TODO
template struct Matrix3x3D<f32>;
template struct Matrix3x3D<f64>;

// TODO
template < typename T >
constexpr auto operator+(const Matrix3x3D<T> &m1, const Matrix3x3D<T> &m2) noexcept
    -> Matrix3x3D<T>
{
    return {
        m1.x1() + m2.x1(), m1.y1() + m2.y1(), m1.z1() + m2.z1(),
        m1.x2() + m2.x2(), m1.y2() + m2.y2(), m1.z2() + m2.z2(),
        m1.x3() + m2.x3(), m1.y3() + m2.y3(), m1.z3() + m2.z3()
    };
}

// TODO
template < typename T >
constexpr auto operator-(const Matrix3x3D<T> &m1, const Matrix3x3D<T> &m2) noexcept
    -> Matrix3x3D<T>
{
    return {
        m1.x1() - m2.x1(), m1.y1() - m2.y1(), m1.z1() - m2.z1(),
        m1.x2() - m2.x2(), m1.y2() - m2.y2(), m1.z2() + m2.z2(),
        m1.x3() - m2.x3(), m1.y3() - m2.y3(), m1.z3() - m2.z3() 
    };
}

// TODO
template < typename T >
constexpr auto operator*(const Matrix3x3D<T> &m1, const Matrix3x3D<T> &m2) noexcept
    -> Matrix3x3D<T>
{
    return {
        m1.x1() * m2.x1(), m1.y1() * m2.y1(), m1.z1() * m2.z1(),
        m1.x2() * m2.x2(), m1.y2() * m2.y2(), m1.z2() + m2.z2(),
        m1.x3() * m2.x3(), m1.y3() * m2.y3(), m1.z3() * m2.z3() 
    };
}

// TODO
template < typename T >
constexpr auto operator/(const Matrix3x3D<T> &m1, const Matrix3x3D<T> &m2) noexcept
    -> Matrix3x3D<T>
{
    return {
        m1.x1() / m2.x1(), m1.y1() / m2.y1(), m1.z1() / m2.z1(),
        m1.x2() / m2.x2(), m1.y2() / m2.y2(), m1.z2() + m2.z2(),
        m1.x3() / m2.x3(), m1.y3() / m2.y3(), m1.z3() / m2.z3() 
    };
}

// TODO
template < typename T >
constexpr auto operator+(const Matrix3x3D<T> &m, const T &scalar) noexcept
    -> Matrix3x3D<T>
{
    return {
        m.x1() + scalar, m.y1() + scalar, m.z1() + scalar,
        m.x2() + scalar, m.y2() + scalar, m.z2() + scalar,
        m.x3() + scalar, m.y3() + scalar, m.z3() + scalar
    };
}

// TODO
template < typename T >
constexpr auto operator-(const Matrix3x3D<T> &m, const T &scalar) noexcept
    -> Matrix3x3D<T>
{
    return {
        m.x1() - scalar, m.y1() - scalar, m.z1() - scalar,
        m.x2() - scalar, m.y2() - scalar, m.z2() - scalar,
        m.x3() - scalar, m.y3() - scalar, m.z3() - scalar
    };
}

// TODO
template < typename T >
constexpr auto operator*(const Matrix3x3D<T> &m, const T &scalar) noexcept
    -> Matrix3x3D<T>
{
    return {
        m.x1() * scalar, m.y1() * scalar, m.z1() * scalar,
        m.x2() * scalar, m.y2() * scalar, m.z2() * scalar,
        m.x3() * scalar, m.y3() * scalar, m.z3() * scalar
    };
}

// TODO
template < typename T >
constexpr auto operator/(const Matrix3x3D<T> &m, const T &scalar) noexcept
    -> Matrix3x3D<T>
{
    return {
        m.x1() / scalar, m.y1() / scalar, m.z1() / scalar,
        m.x2() / scalar, m.y2() / scalar, m.z2() / scalar,
        m.x3() / scalar, m.y3() / scalar, m.z3() / scalar
    };
}

}

#endif