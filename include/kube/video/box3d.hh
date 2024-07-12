/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VIDEO_BOX3D_HH
#define KUBE_VIDEO_BOX3D_HH

#include <kube.hh>

namespace kube::video {

template < typename T >
struct alignas(T) Box3D final {

    // C-array.
    T array[3][2];

    // Construct from values.
    constexpr Box3D(
        T x1, T y1, T z1,
        T x2, T y2, T z2
    ) : array {
        {x1, y1, z1},
        {x2, y2, z2},
    } {
        if (this->x1() > this->x2()) { std::swap(this->x1(), this->x2()); }
        if (this->y1() > this->y2()) { std::swap(this->y1(), this->y2()); }
        if (this->z1() > this->z2()) { std::swap(this->z1(), this->z2()); }
    }

    // Accessor for X1 dimension
    constexpr decltype(auto) x1() const noexcept { return array[0][0]; }

    // Accessor for Y1 dimension
    constexpr decltype(auto) y1() const noexcept { return array[0][1]; }

    // Accessor for Z1 dimension
    constexpr decltype(auto) z1() const noexcept { return array[0][2]; }

    // Accessor for X2 dimension
    constexpr decltype(auto) x2() const noexcept { return array[1][0]; }

    // Accessor for Y2 dimension
    constexpr decltype(auto) y2() const noexcept { return array[1][1]; }

    // Accessor for Z2 dimension
    constexpr decltype(auto) z2() const noexcept { return array[1][2]; }
};

}

#endif