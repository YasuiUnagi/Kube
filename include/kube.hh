/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_HH
#define KUBE_HH

#ifndef KUBE_HEADERONLY
#define KUBE_HEADERONLY_INLINE inline
#else
#define KUBE_HEADERONLY_INLINE
#endif

namespace kube {

    // Wrapper for builtin type of 64bit floating point.
    struct f64;

    // Wrapper for builtin type of 32bit floating point.
    struct f32;

    // Wrapper for builtin type of 64bit signed integer.
    struct i64;

    // Wrapper for builtin type of 32bit signed integer.
    struct i32;

    // Wrapper for builtin type of 16bit signed integer.
    struct i16;

    // Wrapper for builtin type of 8bit signed integer.
    struct i8;

    // Wrapper for builtin type of 64bit unsigned integer.
    struct u64;

    // Wrapper for builtin type of 32bit unsigned integer.
    struct u32;

    // Wrapper for builtin type of 16bit unsigned integer.
    struct u16;

    // Wrapper for builtin type of 8bit unsigned integer.
    struct u8;

    // Template of 2d vector type.
    template < typename T > struct vec2d;

    // Template of 2d vector type for 64bit floating point.
    // template struct vec2d<f64>;

    // Template of 2d vector type for 32bit floating point.
    // template struct vec2d<f32>;

    // Template of 3d vector type.
    template < typename T > struct vec3d;

    // Template of 3d vector type for 64bit floating point.
    // template struct vec3d<f64>;

    // Template of 3d vector type for 32bit floating point.
    // template struct vec3d<f32>;

    // Template of 2x2d matrix type.
    template < typename T > struct mat2x2d;

    // Template of 2x2d matrix type for 64bit floating point.
    // template struct mat2x2d<f64>;

    // Template of 2x2d matrix type for 32bit floating point.
    // template struct mat2x2d<f32>;

    // Template of 3x3d matrix type.
    template < typename T > struct mat3x3d;

    // Template of 3x3d matrix type for 64bit floating point.
    // template struct mat3x3d<f64>;

    // Template of 3x3d matrix type for 32bit floating point.
    // template struct mat3x3d<f32>;

    // Template of 2d box type.
    template < typename T > struct box2d;

    // Template of 2d box type for 64bit floating point.
    // template struct box2d<f64>;

    // Template of 2d box type for 32bit floating point.
    // template struct box2d<f32>;

    // Template of 3d box type.
    template < typename T > struct box3d;

    // Template of 2d box type for 64bit floating point.
    // template struct box3d<f64>;

    // Template of 2d box type for 32bit floating point.
    // template struct box3d<f32>;

    // Template of 3d color(RGB) type.
    template < typename T > struct color3d;

    // Template of 3d color(RGB) type for 64bit floating point.
    // template struct color3d<f64>;

    // Template of 3d color(RGB) type for 64bit floating point.
    // template struct color3d<f32>;

    // Template of 4d color(RGBA) type.
    template < typename T > struct color4d;

    // Template of 4d color(RGBA) type for 64bit floating point.
    // template struct color3d<f64>;

    // Template of 4d color(RGBA) type for 64bit floating point.
    // template struct color3d<f32>;

    // Virtual struct for 2d graphics object.
    struct graphics2d;

    // Virtual struct for 3d graphics object.
    struct graphics3d;

    // Virtual struct for window.
    struct window;

    // Virtual struct for window listener.
    struct window_listener;
}

#include <kube_f64.hh>
#include <kube_f32.hh>
#include <kube_i64.hh>
#include <kube_i32.hh>
#include <kube_i16.hh>
#include <kube_i8.hh>
#include <kube_u64.hh>
#include <kube_u32.hh>
#include <kube_u16.hh>
#include <kube_u8.hh>
#include <kube_math.hh>
#include <kube_vec2d.hh>
#include <kube_vec3d.hh>
#include <kube_mat2x2d.hh>
#include <kube_mat3x3d.hh>
#include <kube_box2d.hh>
#include <kube_box3d.hh>
#include <kube_color3d.hh>
#include <kube_color4d.hh>
#include <kube_graphics2d.hh>
#include <kube_graphics3d.hh>
#include <kube_window.hh>
#include <kube_window_listener.hh>

#endif