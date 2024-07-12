/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VIDEO_MATRIX2X2D_HH
#define KUBE_VIDEO_MATRIX2X2D_HH

#include <kube.hh>

namespace kube::video {
    
template < typename T >
struct alignas(T) Matrix2x2D final {

    // C-array.
    T array[2][2];

    // 2x2d unit matrix.
    static constexpr Matrix2x2D unit {
        T{1}, T{0},
        T{0}, T{1}
    };

    // Construct from values.
    constexpr Matrix2x2D(
        T x1, T y1,
        T x2, T y2
    ) : array {
        {x1, y1},
        {x2, y2}
    } {
    }

    // Accessor for X1 component.
    constexpr decltype(auto) x1() const noexcept { return array[0][0]; }

    // Accessor for Y1 component.
    constexpr decltype(auto) y1() const noexcept { return array[0][1]; }

    // Accessor for X2 component.
    constexpr decltype(auto) x2() const noexcept { return array[1][0]; }

    // Accessor for Y2 component.
    constexpr decltype(auto) y2() const noexcept { return array[1][1]; }
};

// Explicit instatiation
template struct Matrix2x2D<f32>;
template struct Matrix2x2D<f64>;

// Implements of "add" for 2x2d matrix.
template < typename T >
constexpr auto operator+(const Matrix2x2D<T> &m1, const Matrix2x2D<T> &m2) noexcept
    -> Matrix2x2D<T>
{
    return {
        m1.x1() + m2.x1(), m1.y1() + m2.y1(),
        m1.x2() + m2.x2(), m1.y2() + m2.y2()
    };
}

// Implements of "sub" for 2x2d matrix.
template < typename T >
constexpr auto operator-(const Matrix2x2D<T> &m1, const Matrix2x2D<T> &m2) noexcept
    -> Matrix2x2D<T>
{
    return {
        m1.x1() - m2.x1(), m1.y1() - m2.y1(),
        m1.x2() - m2.x2(), m1.y2() - m2.y2()
    };
}

// Implements of "mul" for 2x2d matrix.
template < typename T >
constexpr auto operator*(const Matrix2x2D<T> &m1, const Matrix2x2D<T> &m2) noexcept
    -> Matrix2x2D<T>
{
    return {
        m1.x1() * m2.x1(), m1.y1() * m2.y1(),
        m1.x2() * m2.x2(), m1.y2() * m2.y2()
    };
}

// Implements of "div" for 2x2d matrix.
template < typename T >
constexpr auto operator/(const Matrix2x2D<T> &m1, const Matrix2x2D<T> &m2) noexcept
    -> Matrix2x2D<T>
{
    return {
        m1.x1() / m2.x1(), m1.y1() / m2.y1(),
        m1.x2() / m2.x2(), m1.y2() / m2.y2()
    };
}

// Implements of "add" for 2x2d matrix with scalar.
template < typename T >
constexpr auto operator+(const Matrix2x2D<T> &m, const T &scalar) noexcept
    -> Matrix2x2D<T>
{
    return {
        m.x1() + scalar, m.y1() + scalar,
        m.x2() + scalar, m.y2() + scalar
    };
}

// Implements of "sub" for 2x2d matrix with scalar.
template < typename T >
constexpr auto operator-(const Matrix2x2D<T> &m, const T &scalar) noexcept
    -> Matrix2x2D<T>
{
    return {
        m.x1() - scalar, m.y1() - scalar,
        m.x2() - scalar, m.y2() - scalar
    };
}

// Implements of "mul" for 2x2d matrix with scalar.
template < typename T >
constexpr auto operator*(const Matrix2x2D<T> &m, const T &scalar) noexcept
    -> Matrix2x2D<T>
{
    return {
        m.x1() * scalar, m.y1() * scalar,
        m.x2() * scalar, m.y2() * scalar
    };
}

// Implements of "div" for 2x2d matrix with scalar.
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