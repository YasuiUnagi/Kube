/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VIDEO_COLOR4D_HH
#define KUBE_VIDEO_COLOR4D_HH

#include <kube.hh>

namespace kube::video {

template < typename T >
struct Color4D final {

    T r, g, b, a;

    // Conversion operator to U.
    template < typename U >
    constexpr operator Color4D<U>() const noexcept
        = delete;
};

// Explicit instatiation.
template struct Color4D<f32>;
template struct Color4D<f64>;

}

#endif