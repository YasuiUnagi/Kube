/*
 * Copyright (c) 2024 YasuiUnagi <yasuiunagi276951438@gmail.com>
 * All rights reserved.
 *
 * This code is authored by YasuiUnagi and is the intellectual property of YasuiUnagi.
 * YasuiUnagi retains full ownership and copyright of this code.
 *
 * Usage of this code is entirely at your own risk and responsibility.
 *
 * For any inquiries or issues, please contact YasuiUnagi via Discord.
 */

#ifndef KUBE_F32_HH
#define KUBE_F32_HH

#include <kube.hh>

namespace kube {

// [IMPLEMENTS_DETAIL]
using _f32 = float;

// 32-bit floating-point type with enhanced type safety.
struct alignas(4) f32 final {

    // Native type alias.
    using native_type = _f32;

    // Assersion for check native-type.
    static_assert(native_type(1.0) / native_type(2.0) > native_type(0.0));

    // Preserve native-type variables.
    native_type native;

    // Conversion operator to native-type.
    constexpr operator auto() const noexcept { return native; }
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

} // end of namespace kube

#endif