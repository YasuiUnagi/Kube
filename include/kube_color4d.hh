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

#include <kube.hh>

namespace kube {

    template < typename T >
    struct color4d final {

        T r, g, b, a;

        // Conversion operator to U.
        template < typename U >
        constexpr operator color4d<U>() const noexcept
            = delete;
    } ;

    // Conversion operator from f64 to f64::native_type.
    template <>
    constexpr color4d<f64>::operator color4d<f64::native_type>() const noexcept {
        return {r.native, g.native, b.native, a.native};
    }

    // Conversion operator from f32 to f32::native_type.
    template <>
    constexpr color4d<f32>::operator color4d<f32::native_type>() const noexcept {
        return {r.native, g.native, b.native, a.native};
    }

    // Conversion operator from f64::native_type to f64.
    template <>
    constexpr color4d<f64::native_type>::operator color4d<f64>() const noexcept {
        return {r, g, b, a};
    }

    // Conversion operator from f32::native_type to f32.
    template <>
    constexpr color4d<f32::native_type>::operator color4d<f32>() const noexcept {
        return {r, g, b, a};
    }
}

#endif