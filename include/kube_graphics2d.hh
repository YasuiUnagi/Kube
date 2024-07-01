/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_GRAPHICS2D_HH
#define KUBE_GRAPHICS2D_HH

#include <kube.hh>

namespace kube {

    // Kernel of 2d graphics for change 4d color.
    KUBE_HEADERONLY_INLINE void _kgraph_change_color4d_f32(
        typename f32::native_type r,
        typename f32::native_type g,
        typename f32::native_type b,
        typename f32::native_type a
    ) noexcept;

    // Kernel of 2d graphics for change 4d color.
    KUBE_HEADERONLY_INLINE void _kgraph_change_color4d_f64(
        typename f64::native_type r,
        typename f64::native_type g,
        typename f64::native_type b,
        typename f64::native_type a
    ) noexcept;

    struct graphics2d {
        
        // Change color by 4d color.
        void change_color4d(const color4d<f64> &);
        void change_color4d(const color4d<f32> &);

        // Change color by 3d color.
        void change_color3d(const color3d<f64> &);
        void change_color3d(const color3d<f32> &);

    
        void draw_lin2d(
            const vec2d<f64> &v1,
            const vec2d<f64> &v2
        );

        void draw_lin2d(
            const vec2d<f32> &v1,
            const vec2d<f32> &v2
        );

        void draw_box2d(
            const vec2d<f64> &v1,
            const vec2d<f64> &v2
        );

        void draw_box2d(
            const vec2d<f32> &v1,
            const vec2d<f32> &v2
        );
    } ;
}

#endif