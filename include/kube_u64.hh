/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_U64_HH
#define KUBE_U64_HH

#include <kube.hh>
#include <cstdint>

namespace kube {

    // 64-bit floating-point type with enhanced type safety.
    struct alignas(8) u64 final {

        // Native type alias.
        using native_type = std::uint64_t;

        // Preserve native type variables.
        native_type native;
    };

    // Implement of `add` operator.
    constexpr auto operator+(u64 v1, u64 v2) noexcept
        -> u64 { return {static_cast<u64::native_type>(v1.native + v2.native)}; }
    
    // Implement of `sub` operator.
    constexpr auto operator-(u64 v1, u64 v2) noexcept
        -> u64 { return {static_cast<u64::native_type>(v1.native - v2.native)}; }

    // Implement of `mul` operator.
    constexpr auto operator*(u64 v1, u64 v2) noexcept
        -> u64 { return {static_cast<u64::native_type>(v1.native * v2.native)}; }

    // Implement of `div` operator.
    constexpr auto operator/(u64 v1, u64 v2) noexcept
        -> u64 { return {static_cast<u64::native_type>(v1.native / v2.native)}; }

    // Implement of `mod` operator.
    constexpr auto operator%(u64 v1, u64 v2) noexcept
        -> u64 { return {static_cast<u64::native_type>(v1.native % v2.native)}; }

    // Implement of `add` operator.
    constexpr auto operator<(u64 v1, u64 v2) noexcept
        -> bool { return v1.native < v2.native; }

    // Implement of `add` operator.
    constexpr auto operator>(u64 v1, u64 v2) noexcept
        -> bool { return v1.native > v2.native; }

    // Implement of `add` operator.
    constexpr auto operator<=(u64 v1, u64 v2) noexcept
        -> bool { return v1.native <= v2.native; }

    // Implement of `add` operator.
    constexpr auto operator>=(u64 v1, u64 v2) noexcept
        -> bool { return v1.native >= v2.native; }

    // Implement of `add` operator.
    constexpr auto operator==(u64 v1, u64 v2) noexcept
        -> bool { return v1.native == v2.native; }

    // Implement of `add` operator.
    constexpr auto operator!=(u64 v1, u64 v2) noexcept
        -> bool { return v1.native != v2.native; }
}

#endif