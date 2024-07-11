/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VIDEO_BOX2D_HH
#define KUBE_VIDEO_BOX2D_HH

#include <kube.hh>
#include <utility>

namespace kube::video {

    template < typename T >
    struct alignas(T) Box2D final {

        T x1, y1;
        T x2, y2;

        // Construct from values.
        constexpr Box2D(
            T x1, T y1,
            T x2, T y2
        ) : x1(x1), y1(y1),
            x2(x2), y2(y2) {
            if (this->x1 > this->x2) { std::swap(this->x1, this->x2); }
            if (this->y1 > this->y2) { std::swap(this->y1, this->y2); }
        }

        // Get translated 2d box.
        constexpr auto translate(const Vec2D<T> &v) const noexcept
            -> Box2D {
            return {
                x1 + v.x(), y1 + v.y(),
                x2 + v.x(), y2 + v.y()};
        }
    };
}

#endif