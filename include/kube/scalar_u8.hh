/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_SCALAR_U8_HH
#define KUBE_SCALAR_U8_HH

#include <kube.hh>

namespace kube {

// 32-bit floating-point type with enhanced type safety.
struct alignas(1) u8 final {

    // Native type alias.
    using native_type = kernel::u8;

    // Preserve native type variables.
    native_type native;

    // Conversion operator to 64bit floating-point.
    // Conversion operator to 64bit floating-point.
    constexpr operator f64() const noexcept {
        return {static_cast<typename f64::native_type>(native)};
    }

    // Conversion operator to 32bit floating-point.
    constexpr operator f32() const noexcept {
        return {static_cast<typename f32::native_type>(native)};
    }

    // Conversion operator to 64bit signed-integer.
    constexpr operator i64() const noexcept {
        return {static_cast<typename i64::native_type>(native)};
    }

    // Conversion operator to 32bit signed-integer.
    constexpr operator i32() const noexcept {
        return {static_cast<typename i32::native_type>(native)};
    }

    // Conversion operator to 16bit signed-integer.
    constexpr operator i16() const noexcept {
        return {static_cast<typename i16::native_type>(native)};
    }

    // Conversion operator to 64bit unsigned-integer.
    constexpr operator u64() const noexcept {
        return {static_cast<typename u64::native_type>(native)};
    }

    // Conversion operator to 32bit unsigned-integer.
    constexpr operator u32() const noexcept {
        return {static_cast<typename u32::native_type>(native)};
    }

    // Conversion operator to 16bit unsigned-integer.
    constexpr operator u16() const noexcept {
        return {static_cast<typename u16::native_type>(native)};
    }
};

using _ku8 = typename u8::native_type;

// Implement of `add` operator.
constexpr auto operator+(u8 v1, u8 v2) noexcept
    -> u8 { return {static_cast<typename u8::native_type>(v1.native + v2.native)}; }

// Implement of `sub` operator.
constexpr auto operator-(u8 v1, u8 v2) noexcept
    -> u8 { return {static_cast<typename u8::native_type>(v1.native - v2.native)}; }

// Implement of `mul` operator.
constexpr auto operator*(u8 v1, u8 v2) noexcept
    -> u8 { return {static_cast<typename u8::native_type>(v1.native * v2.native)}; }

// Implement of `div` operator.
constexpr auto operator/(u8 v1, u8 v2) noexcept
    -> u8 { return {static_cast<typename u8::native_type>(v1.native / v2.native)}; }

// Implement of `mod` operator.
constexpr auto operator%(u8 v1, u8 v2) noexcept
    -> u8 { return {static_cast<typename u8::native_type>(v1.native % v2.native)}; }

// Implement of `add` operator.
constexpr auto operator<(u8 v1, u8 v2) noexcept
    -> bool { return v1.native < v2.native; }

// Implement of `add` operator.
constexpr auto operator>(u8 v1, u8 v2) noexcept
    -> bool { return v1.native > v2.native; }

// Implement of `add` operator.
constexpr auto operator<=(u8 v1, u8 v2) noexcept
    -> bool { return v1.native <= v2.native; }

// Implement of `add` operator.
constexpr auto operator>=(u8 v1, u8 v2) noexcept
    -> bool { return v1.native >= v2.native; }

// Implement of `add` operator.
constexpr auto operator==(u8 v1, u8 v2) noexcept
    -> bool { return v1.native == v2.native; }

// Implement of `add` operator.
constexpr auto operator!=(u8 v1, u8 v2) noexcept
    -> bool { return v1.native != v2.native; }

template <>
constexpr auto min() noexcept
    -> u8 { return {std::numeric_limits<typename u8::native_type>::min()}; }

template <>
constexpr auto max() noexcept
    -> u8 { return {std::numeric_limits<typename u8::native_type>::max()}; }

template <>
constexpr auto min(u8 a, u8 b) noexcept
    -> u8 { return a < b ? a : b; }

template <>
constexpr auto max(u8 a, u8 b) noexcept
    -> u8 { return a > b ? a : b; }

} // end of namespace kube

#endif