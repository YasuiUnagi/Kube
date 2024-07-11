/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VIDEO_MAT2X2D_HH
#define KUBE_VIDEO_MAT2X2D_HH

#include <kube.hh>

namespace kube::video {
    
template < typename T >
struct alignas(T) Mat2x2D final {

    T array[2][2];

    // 2x2d unit matrix.
    static constexpr Mat2x2D UNIT {
        T{1}, T{0},
        T{0}, T{1}
    };

    // Construct from values.
    constexpr Mat2x2D(
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
template struct Mat2x2D<f32>;
template struct Mat2x2D<f64>;
template struct Mat2x2D<typename f32::native_type>;
template struct Mat2x2D<typename f64::native_type>;


template < typename T >
constexpr auto operator+(const Mat2x2D<T> &m1, const Mat2x2D<T> &m2) noexcept
    -> Mat2x2D<T>
{
    return {
        m1.x1() + m2.x1(), m1.y1() + m2.y1(),
        m1.x2() + m2.x2(), m1.y2() + m2.y2()
    };
}

template < typename T >
constexpr auto operator-(const Mat2x2D<T> &m1, const Mat2x2D<T> &m2) noexcept
    -> Mat2x2D<T>
{
    return {
        m1.x1() - m2.x1(), m1.y1() - m2.y1(),
        m1.x2() - m2.x2(), m1.y2() - m2.y2()
    };
}

template < typename T >
constexpr auto operator*(const Mat2x2D<T> &m1, const Mat2x2D<T> &m2) noexcept
    -> Mat2x2D<T>
{
    return {
        m1.x1() * m2.x1(), m1.y1() * m2.y1(),
        m1.x2() * m2.x2(), m1.y2() * m2.y2()
    };
}

template < typename T >
constexpr auto operator/(const Mat2x2D<T> &m1, const Mat2x2D<T> &m2) noexcept
    -> Mat2x2D<T>
{
    return {
        m1.x1() / m2.x1(), m1.y1() / m2.y1(),
        m1.x2() / m2.x2(), m1.y2() / m2.y2()
    };
}

template < typename T >
constexpr auto operator%(const Mat2x2D<T> &m1, const Mat2x2D<T> &m2) noexcept
    -> Mat2x2D<T>
{
    return {
        m1.x1() % m2.x1(), m1.y1() % m2.y1(),
        m1.x2() % m2.x2(), m1.y2() % m2.y2()
    };
}


template < typename T >
constexpr auto operator+(const Mat2x2D<T> &m, const T &scalar) noexcept
    -> Mat2x2D<T>
{
    return {
        m.x1() + scalar, m.y1() + scalar,
        m.x2() + scalar, m.y2() + scalar
    };
}

template < typename T >
constexpr auto operator-(const Mat2x2D<T> &m, const T &scalar) noexcept
    -> Mat2x2D<T>
{
    return {
        m.x1() - scalar, m.y1() - scalar,
        m.x2() - scalar, m.y2() - scalar
    };
}

template < typename T >
constexpr auto operator*(const Mat2x2D<T> &m, const T &scalar) noexcept
    -> Mat2x2D<T>
{
    return {
        m.x1() * scalar, m.y1() * scalar,
        m.x2() * scalar, m.y2() * scalar
    };
}

template < typename T >
constexpr auto operator/(const Mat2x2D<T> &m, const T &scalar) noexcept
    -> Mat2x2D<T>
{
    return {
        m.x1() / scalar, m.y1() / scalar,
        m.x2() / scalar, m.y2() / scalar
    };
}

template < typename T >
constexpr auto operator%(const Mat2x2D<T> &m, const T &scalar) noexcept
    -> Mat2x2D<T>
{
    return {
        m.x1() % scalar, m.y1() % scalar,
        m.x2() % scalar, m.y2() % scalar
    };
}

}

#endif