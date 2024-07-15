/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_COLOR4D_HH
#define KUBE_COLOR4D_HH

#include <kube/kube.hh>

namespace kube {

template < typename T >
struct Color4D final {

    // TODO
    T array[4];

    // TODO
    constexpr Color4D(T r, T g, T b, T a) : array {r, g, b, a} {}

    // TODO
    constexpr decltype(auto) r() const noexcept { return array[0]; }

    // TODO
    constexpr decltype(auto) g() const noexcept { return array[1]; }

    // TODO
    constexpr decltype(auto) b() const noexcept { return array[2]; }

    // TODO
    constexpr decltype(auto) a() const noexcept { return array[3]; }
};

// Explicit instatiation.
template struct Color4D<f32>;
template struct Color4D<f64>;

}

#endif