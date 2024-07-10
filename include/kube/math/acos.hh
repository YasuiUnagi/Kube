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

#ifndef KUBE_MATH_ACOS_HH
#define KUBE_MATH_ACOS_HH

#include <kube.hh>

namespace kube::math {

// Template of acos function for T
template < typename T >
inline auto acos(T x) noexcept
    -> T = delete;

template <>
inline auto acos(f32 x) noexcept
    -> f32 { return {kernel::acos(x.native)}; }

template <>
inline auto acos(f64 x) noexcept
    -> f64 { return {kernel::acos(x.native)}; }
}

#endif