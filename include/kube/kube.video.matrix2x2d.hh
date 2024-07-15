/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_MATRIX2X2D_HH
#define KUBE_MATRIX2X2D_HH

#include <kube/kube.hh>

namespace kube {

// TODO
template < typename T >
struct alignas(T) Matrix2x2D final {

    // TODO
    T array[2][2];

    // TODO
    constexpr Matrix2x2D() = default;

    // TODO
    constexpr Matrix2x2D(
        T x1, T y1,
        T x2, T y2
    ) : array {{x1, y1}, {x2, y2}} {}

    // TODO
    constexpr decltype(auto) x1() const noexcept { return array[0][0]; }

    // TODO
    constexpr decltype(auto) y1() const noexcept { return array[0][1]; }

    // TODO
    constexpr decltype(auto) x2() const noexcept { return array[1][0]; }

    // TODO
    constexpr decltype(auto) y2() const noexcept { return array[1][1]; }
};

// TODO
template struct Matrix2x2D<f32>;
template struct Matrix2x2D<f64>;

// TODO
template < typename T >
constexpr auto operator+(const Matrix2x2D<T> &m1, const Matrix2x2D<T> &m2) noexcept
    -> Matrix2x2D<T>
{
    return {
        m1.x1() + m2.x1(), m1.y1() + m2.y1(),
        m1.x2() + m2.x2(), m1.y2() + m2.y2()
    };
}

// TODO
template < typename T >
constexpr auto operator-(const Matrix2x2D<T> &m1, const Matrix2x2D<T> &m2) noexcept
    -> Matrix2x2D<T>
{
    return {
        m1.x1() - m2.x1(), m1.y1() - m2.y1(),
        m1.x2() - m2.x2(), m1.y2() - m2.y2()
    };
}

// TODO
template < typename T >
constexpr auto operator*(const Matrix2x2D<T> &m1, const Matrix2x2D<T> &m2) noexcept
    -> Matrix2x2D<T>
{
    return {
        m1.x1() * m2.x1(), m1.y1() * m2.y1(),
        m1.x2() * m2.x2(), m1.y2() * m2.y2()
    };
}

// TODO
template < typename T >
constexpr auto operator/(const Matrix2x2D<T> &m1, const Matrix2x2D<T> &m2) noexcept
    -> Matrix2x2D<T>
{
    return {
        m1.x1() / m2.x1(), m1.y1() / m2.y1(),
        m1.x2() / m2.x2(), m1.y2() / m2.y2()
    };
}

// TODO
template < typename T >
constexpr auto operator+(const Matrix2x2D<T> &m, const T &scalar) noexcept
    -> Matrix2x2D<T>
{
    return {
        m.x1() + scalar, m.y1() + scalar,
        m.x2() + scalar, m.y2() + scalar
    };
}

// TODO
template < typename T >
constexpr auto operator-(const Matrix2x2D<T> &m, const T &scalar) noexcept
    -> Matrix2x2D<T>
{
    return {
        m.x1() - scalar, m.y1() - scalar,
        m.x2() - scalar, m.y2() - scalar
    };
}

// TODO
template < typename T >
constexpr auto operator*(const Matrix2x2D<T> &m, const T &scalar) noexcept
    -> Matrix2x2D<T>
{
    return {
        m.x1() * scalar, m.y1() * scalar,
        m.x2() * scalar, m.y2() * scalar
    };
}

// TODO
template < typename T >
constexpr auto operator/(const Matrix2x2D<T> &m, const T &scalar) noexcept
    -> Matrix2x2D<T>
{
    return {
        m.x1() / scalar, m.y1() / scalar,
        m.x2() / scalar, m.y2() / scalar
    };
}

}

#endif