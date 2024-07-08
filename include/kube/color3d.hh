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

#include <kube.hh>

namespace kube {

    template < typename T >
    struct color3d final {

        T r, g, b;

        // Conversion operator to U
        template < typename U >
        constexpr operator color3d<U>() const noexcept
            = delete;
    } ;

    // Conversion operator from f64 to f64::native_type.
    template <>
    template <>
    constexpr color3d<f64>::operator color3d<f64::native_type>() const noexcept {
        return {r.native, g.native, b.native};
    }

    // Conversion operator from f32 to f32::native_type.
    template <>
    template <>
    constexpr color3d<f32>::operator color3d<f32::native_type>() const noexcept {
        return {r.native, g.native, b.native};
    }

    // Conversion operator from f64::native_type to f64.
    template <>
    template <>
    constexpr color3d<f64::native_type>::operator color3d<f64>() const noexcept {
        return {r, g, b};
    }

    // Conversion operator from f32::native_type to f32.
    template <>
    template <>
    constexpr color3d<f32::native_type>::operator color3d<f32>() const noexcept {
        return {r, g, b};
    }
}

#endif