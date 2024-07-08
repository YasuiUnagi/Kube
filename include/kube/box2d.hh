/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_BOX2D_HH
#define KUBE_BOX2D_HH

#include <kube.hh>
#include <utility>

namespace kube {

    template < typename T >
    struct alignas(T) box2d final {

        T x1, y1;
        T x2, y2;

        // Construct from 2d vectors.
        constexpr box2d(
            const vec2d<T> &v1,
            const vec2d<T> &v2
        ) : box2d(
            v1.x, v1.y,
            v2.x, v2.y
        ) {
        }

        // Construct from values.
        constexpr box2d(
            T x1, T y1,
            T x2, T y2
        ) : x1(x1), y1(y1),
            x2(x1), y2(y1) {
            if (this->x1 > this->x2) { std::swap(this->x1, this->x2); }
            if (this->y1 > this->y2) { std::swap(this->y1, this->y2); }
        }

        // Get translated 2d box.
        constexpr auto translate(const vec2d<T> &v) const noexcept
            -> box2d {
            return {
                x1 + v.x, y1 + v.y,
                x2 + v.x, y2 + v.y};
        }
    };
}

#endif