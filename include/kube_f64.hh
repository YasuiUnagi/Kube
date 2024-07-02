/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_F64_HH
#define KUBE_F64_HH

#include <kube.hh>

namespace kube {

    using _kf64 = double;

    // 64-bit floating-point type with enhanced type safety.
    struct alignas(8) f64 final {
        
        // Native type alias.
        using native_type = _kf64;

        // Assersion for check native-type.
        static_assert(native_type(1.0) / native_type(2.0) > native_type(0.0));

        // Preserve native type variables.
        native_type native;
    };

    // Implement of unary + operator.
    constexpr auto operator+(f64 v) noexcept
        -> f64 { return {+v.native}; }

    // Implement of unary - operator.
    constexpr auto operator-(f64 v) noexcept
        -> f64 { return {-v.native}; }

    // Implement of `add` operator.
    constexpr auto operator+(f64 v1, f64 v2) noexcept
        -> f64 { return {static_cast<f64::native_type>(v1.native + v2.native)}; }
    
    // Implement of `sub` operator.
    constexpr auto operator-(f64 v1, f64 v2) noexcept
        -> f64 { return {static_cast<f64::native_type>(v1.native - v2.native)}; }

    // Implement of `mul` operator.
    constexpr auto operator*(f64 v1, f64 v2) noexcept
        -> f64 { return {static_cast<f64::native_type>(v1.native * v2.native)}; }

    // Implement of `div` operator.
    constexpr auto operator/(f64 v1, f64 v2) noexcept
        -> f64 { return {static_cast<f64::native_type>(v1.native / v2.native)}; }

    // Implement of `add` operator.
    constexpr auto operator<(f64 v1, f64 v2) noexcept
        -> bool { return v1.native < v2.native; }

    // Implement of `add` operator.
    constexpr auto operator>(f64 v1, f64 v2) noexcept
        -> bool { return v1.native > v2.native; }

    // Implement of `add` operator.
    constexpr auto operator<=(f64 v1, f64 v2) noexcept
        -> bool { return v1.native <= v2.native; }

    // Implement of `add` operator.
    constexpr auto operator>=(f64 v1, f64 v2) noexcept
        -> bool { return v1.native >= v2.native; }

    // Implement of `add` operator.
    constexpr auto operator==(f64 v1, f64 v2) noexcept
        -> bool { return v1.native == v2.native; }

    // Implement of `add` operator.
    constexpr auto operator!=(f64 v1, f64 v2) noexcept
        -> bool { return v1.native != v2.native; }
}

#endif