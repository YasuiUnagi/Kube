/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_SCALAR_I8_HH
#define KUBE_SCALAR_I8_HH

#include <kube.hh>
#include <limits>

namespace kube {

// 32-bit floating-point type with enhanced type safety.
struct alignas(1) i8 final {

    // Native type alias.
    using native_type = kernel::i8;

    // Preserve native type variables.
    native_type native;

    // Conversion operator to 64bit floating-point.
    constexpr operator f64() const noexcept {
        return {static_cast<f64::native_type>(native)};
    }

    // Conversion operator to 32bit floating-point.
    constexpr operator f32() const noexcept {
        return {static_cast<f32::native_type>(native)};
    }

    // Conversion operator to 64bit signed-integer.
    constexpr operator i64() const noexcept {
        return {static_cast<i64::native_type>(native)};
    }

    // Conversion operator to 32bit signed-integer.
    constexpr operator i32() const noexcept {
        return {static_cast<i32::native_type>(native)};
    }

    // Conversion operator to 16bit signed-integer.
    constexpr operator i16() const noexcept {
        return {static_cast<i16::native_type>(native)};
    }
};

// Implement of unary + operator.
constexpr auto operator+(i8 v) noexcept
    -> i8 { return {static_cast<i8::native_type>(+v.native)}; }

// Implement of unary - operator.
constexpr auto operator-(i8 v) noexcept
    -> i8 { return {static_cast<i8::native_type>(-v.native)}; }

// Implement of `add` operator.
constexpr auto operator+(i8 v1, i8 v2) noexcept
    -> i8 { return {static_cast<i8::native_type>(v1.native + v2.native)}; }

// Implement of `sub` operator.
constexpr auto operator-(i8 v1, i8 v2) noexcept
    -> i8 { return {static_cast<i8::native_type>(v1.native - v2.native)}; }

// Implement of `mul` operator.
constexpr auto operator*(i8 v1, i8 v2) noexcept
    -> i8 { return {static_cast<i8::native_type>(v1.native * v2.native)}; }

// Implement of `div` operator.
constexpr auto operator/(i8 v1, i8 v2) noexcept
    -> i8 { return {static_cast<i8::native_type>(v1.native / v2.native)}; }

// Implement of `mod` operator.
constexpr auto operator%(i8 v1, i8 v2) noexcept
    -> i8 { return {static_cast<i8::native_type>(v1.native % v2.native)}; }

// Implement of `add` operator.
constexpr auto operator<(i8 v1, i8 v2) noexcept
    -> bool { return v1.native < v2.native; }

// Implement of `add` operator.
constexpr auto operator>(i8 v1, i8 v2) noexcept
    -> bool { return v1.native > v2.native; }

// Implement of `add` operator.
constexpr auto operator<=(i8 v1, i8 v2) noexcept
    -> bool { return v1.native <= v2.native; }

// Implement of `add` operator.
constexpr auto operator>=(i8 v1, i8 v2) noexcept
    -> bool { return v1.native >= v2.native; }

// Implement of `add` operator.
constexpr auto operator==(i8 v1, i8 v2) noexcept
    -> bool { return v1.native == v2.native; }

// Implement of `add` operator.
constexpr auto operator!=(i8 v1, i8 v2) noexcept
    -> bool { return v1.native != v2.native; }

template <>
constexpr auto min() noexcept
    -> i8 { return {std::numeric_limits<typename i8::native_type>::min()}; }

template <>
constexpr auto max() noexcept
    -> i8 { return {std::numeric_limits<typename i8::native_type>::max()}; }

template <>
constexpr auto min(i8 a, i8 b) noexcept
    -> i8 { return a < b ? a : b; }

template <>
constexpr auto max(i8 a, i8 b) noexcept
    -> i8 { return a > b ? a : b; }

} // end of namespace kube

#endif