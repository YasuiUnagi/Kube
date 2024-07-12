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

#ifndef KUBE_MATH_COS_KERNEL_HH
#define KUBE_MATH_COS_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// Declaration of cos function for "f32"
KUBE_HEADERONLY_INLINE auto cos(f32) noexcept
    -> f32;

// Declaration of cos function for "f64"
KUBE_HEADERONLY_INLINE auto cos(f64) noexcept
    -> f64;
}

#endif