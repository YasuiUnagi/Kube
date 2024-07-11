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
        T(1.0), T(0.0), T(0.0),
        T(0.0), T(1.0), T(0.0),
        T(0.0), T(0.0), T(1.0)
    };

    // Construct from 3d vectors.
    constexpr Mat3x3D(
        const Vec3D<T> &v1,
        const Vec3D<T> &v2,
        const Vec3D<T> &v3
    ) : x1(v1.x), y1(v1.y), z1(v1.z),
        x2(v2.x), y2(v2.y), z2(v2.z),
        x3(v3.x), y3(v3.y), z3(v3.z) {
    }

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

// Get 3d rotation matrix in X axis.
template < typename T >
constexpr auto rot_x(T radian) noexcept
    -> Mat3x3D<T>
{
    T vs = sin<T>(radian);
    T vc = cos<T>(radian);
    return {
        T(1.0), T(0.0), T(0.0),
        T(0.0), T(+vc), T(-vs),
        T(0.0), T(+vs), T(+vc)
    };
}

// Get 3d rotation matrix in Y axis.
template < typename T >
constexpr auto rot_y(T radian) noexcept
    -> Mat3x3D<T>
{
    T vs = sin<T>(radian);
    T vc = cos<T>(radian);
    return {
        T(+vc), T(0.0), T(+vs),
        T(0.0), T(1.0), T(0.0),
        T(-vs), T(0.0), T(+vc)
    };
}

// Get 3d rotation matrix in Z axis.
template < typename T >
constexpr auto rot_z(T radian) noexcept
    -> Mat3x3D<T>
{
    T vs = sin<T>(radian);
    T vc = cos<T>(radian);
    return {
        T(+vc), T(-vs), T(0.0),
        T(+vs), T(+vc), T(0.0),
        T(0.0), T(0.0), T(1.0)
    };
}
}

#endif