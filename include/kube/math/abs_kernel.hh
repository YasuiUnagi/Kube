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

#ifndef KUBE_MATH_ABS_KERNEL_HH
#define KUBE_MATH_ABS_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// Kernel function of "abs" for "f32".
KUBE_HEADERONLY_INLINE auto abs(typename f32::native_type) noexcept
    -> typename f32::native_type;

// Kernel function of "abs" for "f64".
KUBE_HEADERONLY_INLINE auto abs(typename f64::native_type) noexcept
    -> typename f64::native_type;
}

#endif