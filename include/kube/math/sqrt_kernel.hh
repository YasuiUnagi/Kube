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

#ifndef KUBE_MATH_SQRT_KERNEL_HH
#define KUBE_MATH_SQRT_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// Declaration of sqrt function for "f32tive_type"
KUBE_HEADERONLY_INLINE auto sqrt(f32) noexcept
    -> f32tive_type;

// Declaration of sqrt function for "f64tive_type"
KUBE_HEADERONLY_INLINE auto sqrt(f64) noexcept
    -> f64tive_type;
}

#endif