/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_VEC2D_KERNEL_HH
#define KUBE_VEC2D_KERNEL_HH

#include <kube.hh>

namespace kube {

    // Kernel of math function for 2d vector.
    KUBE_HEADERONLY_INLINE auto _krot2d_f64(
        typename f64::native_type x,
        typename f64::native_type y,
        typename f64::native_type radian
    ) noexcept
        -> vec2d<f64::native_type> {
        typename f64::native_type _cos = _kcos_f64(radian);
        typename f64::native_type _sin = _ksin_f64(radian);
        return {
            x*_cos - y*_sin,
            x*_sin + y*_cos
        };
    }

    // Kernel of math function for 2d vector.
    KUBE_HEADERONLY_INLINE auto _krot2d_f32(
        typename f32::native_type x,
        typename f32::native_type y,
        typename f32::native_type radian
    ) noexcept
        -> vec2d<f32::native_type> {
        typename f32::native_type _cos = _kcos_f32(radian);
        typename f32::native_type _sin = _ksin_f32(radian);
        return {
            x*_cos - y*_sin,
            x*_sin + y*_cos
        };
    }
}

#endif