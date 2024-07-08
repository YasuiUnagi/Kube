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
template < typename T > struct Vec2D;

// Template of 3d vector type.
template < typename T > struct Vec3D;

// Template of 2x2d matrix type.
template < typename T > struct Mat2x2D;

// Template of 3x3d matrix type.
template < typename T > struct Mat3x3D;

// Template of 2d box type.
template < typename T > struct Box2D;

// Template of 3d box type.
template < typename T > struct Box3D;

// Template of 3d color(RGB) type.
template < typename T > struct Color3D;

// Template of 4d color(RGBA) type.
template < typename T > struct Color4D;

// Virtual struct for renderer2d object.
struct renderer2d;

// Virtual struct for window.
struct window;

// Virtual struct for window listener.
struct window_adapter;
}

#include <kube/kernel.hh>
#include <kube/scalar.hh>
#include <kube/math.hh>
#include <kube/vec2d.hh>
#include <kube/vec3d.hh>
#include <kube/mat2x2d.hh>
#include <kube/mat3x3d.hh>
#include <kube/box2d.hh>
#include <kube/box3d.hh>
#include <kube/color3d.hh>
#include <kube/color4d.hh>
#include <kube/window.hh>
#include <kube/window_adapter.hh>

#endif