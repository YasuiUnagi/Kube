/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_COLOR3D_HH
#define KUBE_COLOR3D_HH

#include <kube.hh>

namespace kube {

    template < typename T >
    struct color3d final {

        T r, g, b;


        constexpr color3d(T r, T g, T b)
            : r(r), g(g), b(b)
        {
        }
    } ;
}

#endif