/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_MAT2X2D_IMPL_HH
#define KUBE_MAT2X2D_IMPL_HH

#include <kube.hh>

namespace kube {

    template < typename T >
    constexpr mat2x2d<T>::mat2x2d(
        const vec2d<T> &v1,
        const vec2d<T> &v2)
    : mat2x2d(
        v1.x, v1.y,
        v2.x, v2.y)
    {
    }
}

#endif