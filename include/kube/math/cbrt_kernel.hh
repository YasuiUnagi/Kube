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

#ifndef KUBE_MATH_CBRT_KERNEL_HH
#define KUBE_MATH_CBRT_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// Declaration of cbrt function for "typename f32::native_type"
KUBE_HEADERONLY_INLINE auto cbrt(typename f32::native_type) noexcept
    -> typename f32::native_type;

// Declaration of cbrt function for "typename f64::native_type"
KUBE_HEADERONLY_INLINE auto cbrt(typename f64::native_type) noexcept
    -> typename f64::native_type;
}

#endif