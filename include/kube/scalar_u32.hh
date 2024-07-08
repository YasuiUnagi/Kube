/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_SCALAR_U32_HH
#define KUBE_SCALAR_U32_HH

#include <kube.hh>
#include <cstdint>

namespace kube {

// 32-bit floating-point type with enhanced type safety.
struct alignas(4) u32 final {

    // Native type alias.
    using native_type = kernel::u32;

    // Preserve native type variables.
    native_type native;

    // Conversion operator to 64bit floating-point.
    constexpr operator f64() const noexcept {
        return {static_cast<f64::native_type>(native)};
    }

    // Conversion operator to 64bit signed-integer.
    constexpr operator i64() const noexcept {
        return {static_cast<i64::native_type>(native)};
    }

    // Conversion operator to 64bit unsigned-integer.
    constexpr operator u64() const noexcept {
        return {static_cast<u64::native_type>(native)};
    }
};

// Implement of `add` operator.
constexpr auto operator+(u32 v1, u32 v2) noexcept
    -> u32 { return {static_cast<u32::native_type>(v1.native + v2.native)}; }

// Implement of `sub` operator.
constexpr auto operator-(u32 v1, u32 v2) noexcept
    -> u32 { return {static_cast<u32::native_type>(v1.native - v2.native)}; }

// Implement of `mul` operator.
constexpr auto operator*(u32 v1, u32 v2) noexcept
    -> u32 { return {static_cast<u32::native_type>(v1.native * v2.native)}; }

// Implement of `div` operator.
constexpr auto operator/(u32 v1, u32 v2) noexcept
    -> u32 { return {static_cast<u32::native_type>(v1.native / v2.native)}; }

// Implement of `mod` operator.
constexpr auto operator%(u32 v1, u32 v2) noexcept
    -> u32 { return {static_cast<u32::native_type>(v1.native % v2.native)}; }

// Implement of `add` operator.
constexpr auto operator<(u32 v1, u32 v2) noexcept
    -> bool { return v1.native < v2.native; }

// Implement of `add` operator.
constexpr auto operator>(u32 v1, u32 v2) noexcept
    -> bool { return v1.native > v2.native; }

// Implement of `add` operator.
constexpr auto operator<=(u32 v1, u32 v2) noexcept
    -> bool { return v1.native <= v2.native; }

// Implement of `add` operator.
constexpr auto operator>=(u32 v1, u32 v2) noexcept
    -> bool { return v1.native >= v2.native; }

// Implement of `add` operator.
constexpr auto operator==(u32 v1, u32 v2) noexcept
    -> bool { return v1.native == v2.native; }

// Implement of `add` operator.
constexpr auto operator!=(u32 v1, u32 v2) noexcept
    -> bool { return v1.native != v2.native; }

template <>
constexpr auto min() noexcept
    -> u32 { return {std::numeric_limits<typename u32::native_type>::min()}; }

template <>
constexpr auto max() noexcept
    -> u32 { return {std::numeric_limits<typename u32::native_type>::max()}; }

template <>
constexpr auto min(u32 a, u32 b) noexcept
    -> u32 { return a < b ? a : b; }

template <>
constexpr auto max(u32 a, u32 b) noexcept
    -> u32 { return a > b ? a : b; }

} // end of namespace kube

#endif