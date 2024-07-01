/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_MAT3X3D_IMPL_HH
#define KUBE_MAT3X3D_IMPL_HH

#include <kube.hh>

namespace kube {

    template < typename T >
    constexpr mat3x3d<T>::mat3x3d(
        const vec3d<T> &v1,
        const vec3d<T> &v2,
        const vec3d<T> &v3)
    : mat3x3d(
        v1.x, v1.y, v1.z,
        v2.x, v2.y, v2.z,
        v3.x, v3.y, v3.z)
    {
    }
}

#endif