/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_COLOR3D_HH
#define KUBE_COLOR3D_HH

#include <kube/kube.hh>
#include <utility>

namespace kube::video {

template < typename T >
struct Color3D final {

    // C-array.
    T array[3];

    // Construct from values.
    constexpr Color3D(T r, T g, T b) : array {r, g, b} {}

    // Accessor for channel of red.
    constexpr decltype(auto) r() const noexcept { return array[0]; }

    // Accessor for channel of green.
    constexpr decltype(auto) g() const noexcept { return array[1]; }

    // Accessor for channel of blue.
    constexpr decltype(auto) b() const noexcept { return array[2]; }
};

// Explicit instatiation.
template struct Color3D<f32>;
template struct Color3D<f64>;

}

#endif