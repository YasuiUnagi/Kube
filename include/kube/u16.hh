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

#ifndef KUBE_U16_HH
#define KUBE_U16_HH

#include <kube.hh>
#include <cstdint>

namespace kube {

// [IMPLEMENTS_DETAIL]
using _u16 = std::uint16_t;

// 32-bit floating-point type with enhanced type safety.
struct alignas(2) u16 final {

    // Native type alias.
    using native_type = _u16;

    // Preserve native type variables.
    native_type native;
};

// Implement of `add` operator.
constexpr auto operator+(u16 v1, u16 v2) noexcept
    -> u16 { return {static_cast<u16::native_type>(v1.native + v2.native)}; }

// Implement of `sub` operator.
constexpr auto operator-(u16 v1, u16 v2) noexcept
    -> u16 { return {static_cast<u16::native_type>(v1.native - v2.native)}; }

// Implement of `mul` operator.
constexpr auto operator*(u16 v1, u16 v2) noexcept
    -> u16 { return {static_cast<u16::native_type>(v1.native * v2.native)}; }

// Implement of `div` operator.
constexpr auto operator/(u16 v1, u16 v2) noexcept
    -> u16 { return {static_cast<u16::native_type>(v1.native / v2.native)}; }

// Implement of `mod` operator.
constexpr auto operator%(u16 v1, u16 v2) noexcept
    -> u16 { return {static_cast<u16::native_type>(v1.native % v2.native)}; }

// Implement of `add` operator.
constexpr auto operator<(u16 v1, u16 v2) noexcept
    -> bool { return v1.native < v2.native; }

// Implement of `add` operator.
constexpr auto operator>(u16 v1, u16 v2) noexcept
    -> bool { return v1.native > v2.native; }

// Implement of `add` operator.
constexpr auto operator<=(u16 v1, u16 v2) noexcept
    -> bool { return v1.native <= v2.native; }

// Implement of `add` operator.
constexpr auto operator>=(u16 v1, u16 v2) noexcept
    -> bool { return v1.native >= v2.native; }

// Implement of `add` operator.
constexpr auto operator==(u16 v1, u16 v2) noexcept
    -> bool { return v1.native == v2.native; }

// Implement of `add` operator.
constexpr auto operator!=(u16 v1, u16 v2) noexcept
    -> bool { return v1.native != v2.native; }

} // end of namespace kube

#endif