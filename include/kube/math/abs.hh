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

#ifndef KUBE_MATH_ABS_HH
#define KUBE_MATH_ABS_HH

#include <kube.hh>

namespace kube::math {

template < typename T >
inline auto abs(T x) noexcept
    -> T = delete;

template <>
inline auto abs(f32 x) noexcept
    -> f32 { return {kernel::abs(x.native)}; }

template <>
inline auto abs(f64 x) noexcept
    -> f64 { return {kernel::abs(x.native)}; }
}

#endif