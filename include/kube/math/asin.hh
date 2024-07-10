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

#ifndef KUBE_MATH_ASIN_HH
#define KUBE_MATH_ASIN_HH

#include <kube.hh>

namespace kube::math {

// Template of asin function for T
template < typename T >
inline auto asin(T x) noexcept
    -> T = delete;

template <>
inline auto asin(f32 x) noexcept
    -> f32 { return {kernel::asin(x.native)}; }

template <>
inline auto asin(f64 x) noexcept
    -> f64 { return {kernel::asin(x.native)}; }
}

#endif