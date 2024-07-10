/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VIDEO_COLOR3D_HH
#define KUBE_VIDEO_COLOR3D_HH

#include <kube.hh>

namespace kube::video {

    template < typename T >
    struct Color3D final {

        T r, g, b;

        // Conversion operator to U
        template < typename U >
        constexpr operator Color3D<U>() const noexcept
            ;
    } ;

    template struct Color3D<f32>;
    template struct Color3D<f64>;
    template struct Color3D<typename f32::native_type>;
    template struct Color3D<typename f64::native_type>;

    // Conversion operator from f64 to f64::native_type.
    template <>
    template <>
    constexpr Color3D<f32>::operator Color3D<typename f32::native_type>() const noexcept {
        return {r, g, b};
    }

    // Conversion operator from f32 to f32::native_type.
    template <>
    template <>
    constexpr Color3D<f32>::operator Color3D<typename f32::native_type>() const noexcept {
        return {r, g, b};
    }

    // Conversion operator from f64::native_type to f64.
    template <>
    template <>
    constexpr Color3D<f64::native_type>::operator Color3D<f64>() const noexcept {
        return {{r}, {g}, {b}};
    }

    // Conversion operator from f32::native_type to f32.
    template <>
    template <>
    constexpr Color3D<f32::native_type>::operator Color3D<f32>() const noexcept {
        return {{r}, {g}, {b}};
    }
}

#endif