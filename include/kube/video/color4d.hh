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
    } ;

    // Conversion operator from f64 to f64::native_type.
    template <>
    template <>
    constexpr Color4D<f64>::operator Color4D<f64::native_type>() const noexcept {
        return {r, g, b, a};
    }

    // Conversion operator from f32 to f32::native_type.
    template <>
    template <>
    constexpr Color4D<f32>::operator Color4D<f32::native_type>() const noexcept {
        return {r, g, b, a};
    }

    // Conversion operator from f64::native_type to f64.
    template <>
    template <>
    constexpr Color4D<f64::native_type>::operator Color4D<f64>() const noexcept {
        return {{r}, {g}, {b}, {a}};
    }

    // Conversion operator from f32::native_type to f32.
    template <>
    template <>
    constexpr Color4D<f32::native_type>::operator Color4D<f32>() const noexcept {
        return {{r}, {g}, {b}, {a}};
    }
}

#endif