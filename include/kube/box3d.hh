/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_BOX3D_HH
#define KUBE_BOX3D_HH

#include <kube.hh>
#include <utility>

namespace kube {

    template < typename T >
    struct alignas(T) Box3D final {

        T x1, y1, z1;
        T x2, y2, z2;

        // Construct from 3d vectors.
        constexpr Box3D(
            const Vec3D<T> &v1,
            const Vec3D<T> &v2
        ) : Box3D(
            v1.x, v1.y, v1.z,
            v2.x, v2.y, v2.z
        ) {
        }

        // Construct from values.
        constexpr Box3D(
            T x1, T y1, T z1,
            T x2, T y2, T z2
        ) : x1(x1), y1(y1), z1(z1),
            x2(x2), y2(y2), z2(z2) {
            if (this->x1 > this->x2) { std::swap(this->x1, this->x2); }
            if (this->y1 > this->y2) { std::swap(this->y1, this->y2); }
            if (this->z1 > this->z2) { std::swap(this->z1, this->z2); }
        }

        // Get translated 3d vector.
        constexpr auto translate(const Vec3D<T> &v) const noexcept
            -> Box3D {
            return {
                x1 + v.x, y1 + v.y, z1 + v.z,
                x2 + v.x, y2 + v.y, z2 + v.z};
        }
    };
}

#endif