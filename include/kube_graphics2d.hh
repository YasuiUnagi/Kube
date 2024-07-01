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

    struct graphics2d {


        constexpr virtual void change_color4d(const color4d<f64> &)
            = 0;
        
        constexpr virtual void change_color4d(const color4d<f32> &)
            = 0;

        constexpr virtual void change_color4d(const color4d<u32> &)
            = 0;

        constexpr virtual void change_color4d(const color4d<u16> &)
            = 0;

        constexpr virtual void change_color4d(const color4d<u8> &)
            = 0;


        constexpr virtual void change_color3d(const color3d<f64> &)
            = 0;

        constexpr virtual void change_color3d(const color3d<f32> &)
            = 0;

        constexpr virtual void change_color3d(const color3d<u32> &)
            = 0;

        constexpr virtual void change_color3d(const color3d<u16> &)
            = 0;

        constexpr virtual void change_color3d(const color3d<u8> &)
            = 0;


        constexpr virtual void draw_lin2d(
            const vec2d<f64> &v1,
            const vec2d<f64> &v2
        ) = 0;

        constexpr virtual void draw_lin2d(
            const vec2d<f32> &v1,
            const vec2d<f32> &v2
        ) = 0;

        constexpr virtual void draw_box2d(
            const vec2d<f64> &v1,
            const vec2d<f64> &v2
        ) = 0;

        constexpr virtual void draw_box2d(
            const vec2d<f32> &v1,
            const vec2d<f32> &v2
        ) = 0;
    } ;
}

#endif