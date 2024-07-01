/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_F32_HH
#define KUBE_F32_HH

#include <kube.hh>

namespace kube {

    // 32-bit floating-point type with enhanced type safety.
    struct alignas(4) f32 final {

        // Native type alias.
        using native_type = float;

        // Assersion for check native-type.
        static_assert(native_type(1.0) / native_type(2.0) > native_type(0.0));

        // Preserve native-type variables.
        native_type native;

        // Conversion opetrator for 64bit floating-point.
        constexpr operator f64() const noexcept {
            return {static_cast<f64::native_type>(native)};
        }
    };

    // Implement of unary + operator.
    constexpr auto operator+(f32 v) noexcept
        -> f32 { return {+v.native}; }

    // Implement of unary - operator.
    constexpr auto operator-(f32 v) noexcept
        -> f32 { return {-v.native}; }

    // Implement of `add` operator.
    constexpr auto operator+(f32 v1, f32 v2) noexcept
        -> f32 { return {static_cast<f32::native_type>(v1.native + v2.native)}; }
    
    // Implement of `sub` operator.
    constexpr auto operator-(f32 v1, f32 v2) noexcept
        -> f32 { return {static_cast<f32::native_type>(v1.native - v2.native)}; }

    // Implement of `mul` operator.
    constexpr auto operator*(f32 v1, f32 v2) noexcept
        -> f32 { return {static_cast<f32::native_type>(v1.native * v2.native)}; }

    // Implement of `div` operator.
    constexpr auto operator/(f32 v1, f32 v2) noexcept
        -> f32 { return {static_cast<f32::native_type>(v1.native / v2.native)}; }

    // Implement of `add` operator.
    constexpr auto operator<(f32 v1, f32 v2) noexcept
        -> bool { return v1.native < v2.native; }

    // Implement of `add` operator.
    constexpr auto operator>(f32 v1, f32 v2) noexcept
        -> bool { return v1.native > v2.native; }

    // Implement of `add` operator.
    constexpr auto operator<=(f32 v1, f32 v2) noexcept
        -> bool { return v1.native <= v2.native; }

    // Implement of `add` operator.
    constexpr auto operator>=(f32 v1, f32 v2) noexcept
        -> bool { return v1.native >= v2.native; }

    // Implement of `add` operator.
    constexpr auto operator==(f32 v1, f32 v2) noexcept
        -> bool { return v1.native == v2.native; }

    // Implement of `add` operator.
    constexpr auto operator!=(f32 v1, f32 v2) noexcept
        -> bool { return v1.native != v2.native; }
}

#endif