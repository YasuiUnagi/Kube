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

#ifndef KUBE_F64_HH
#define KUBE_F64_HH

#include <kube.hh>

namespace kube {

// [IMPLEMENTS_DETAIL]
using _f64 = double;

// Wrapped for Type safty "f64".
struct alignas(8) f64 final {
    
    // Native type alias.
    using native_type = _f64;

    // Assersion for check native-type.
    static_assert(native_type(1.0) / native_type(2.0) > native_type(0.0));

    // Preserve native type variables.
    native_type native;

    // Conversion operator to native-type.
    constexpr operator auto() const noexcept { return native; }
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

} // end of namespace kube

#endif