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

#ifndef KUBE_I32_HH
#define KUBE_I32_HH

#include <kube.hh>
#include <cstdint>

namespace kube {

// [IMPLEMENTS_DETAIL]
using _i32 = std::int32_t;

// 32-bit floating-point type with enhanced type safety.
struct alignas(4) i32 final {

    // Native type alias.
    using native_type = _i32;

    // Preserve native type variables.
    native_type native;
};

// Implement of unary + operator.
constexpr auto operator+(i32 v) noexcept
    -> i32 { return {static_cast<i32::native_type>(+v.native)}; }

// Implement of unary - operator.
constexpr auto operator-(i32 v) noexcept
    -> i32 { return {static_cast<i32::native_type>(-v.native)}; }

// Implement of `add` operator.
constexpr auto operator+(i32 v1, i32 v2) noexcept
    -> i32 { return {static_cast<i32::native_type>(v1.native + v2.native)}; }

// Implement of `sub` operator.
constexpr auto operator-(i32 v1, i32 v2) noexcept
    -> i32 { return {static_cast<i32::native_type>(v1.native - v2.native)}; }

// Implement of `mul` operator.
constexpr auto operator*(i32 v1, i32 v2) noexcept
    -> i32 { return {static_cast<i32::native_type>(v1.native * v2.native)}; }

// Implement of `div` operator.
constexpr auto operator/(i32 v1, i32 v2) noexcept
    -> i32 { return {static_cast<i32::native_type>(v1.native / v2.native)}; }

// Implement of `mod` operator.
constexpr auto operator%(i32 v1, i32 v2) noexcept
    -> i32 { return {static_cast<i32::native_type>(v1.native % v2.native)}; }

// Implement of `add` operator.
constexpr auto operator<(i32 v1, i32 v2) noexcept
    -> bool { return v1.native < v2.native; }

// Implement of `add` operator.
constexpr auto operator>(i32 v1, i32 v2) noexcept
    -> bool { return v1.native > v2.native; }

// Implement of `add` operator.
constexpr auto operator<=(i32 v1, i32 v2) noexcept
    -> bool { return v1.native <= v2.native; }

// Implement of `add` operator.
constexpr auto operator>=(i32 v1, i32 v2) noexcept
    -> bool { return v1.native >= v2.native; }

// Implement of `add` operator.
constexpr auto operator==(i32 v1, i32 v2) noexcept
    -> bool { return v1.native == v2.native; }

// Implement of `add` operator.
constexpr auto operator!=(i32 v1, i32 v2) noexcept
    -> bool { return v1.native != v2.native; }

} // end of namespace kube

#endif