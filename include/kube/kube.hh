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

#include <cstdint>
#include <cstddef>

// TODO
namespace kube {

// Type alias of 32bit lofating-point type.
using f32 = float;

// Type alias of 64bit lofating-point type.
using f64 = double;

// Type alias of 8bit unsigned-integer type.
using u8 = std::uint8_t;

// Type alias of 16bit unsigned-integer type.
using u16 = std::uint16_t;

// Type alias of 32bit unsigned-integer type.
using u32 = std::uint32_t;

// Type alias of 64bit unsigned-integer type.
using u64 = std::uint64_t;

// Type alias of pointer-sized unsigned-integer type.
using usize = std::uintptr_t;

// Type alias of 8bit signed-integer type.
using i8 = std::int8_t;

// Type alias of 16bit signed-integer type.
using i16 = std::int16_t;

// Type alias of 32bit signed-integer type.
using i32 = std::int32_t;

// Type alias of 64bit signed-integer type.
using i64 = std::int64_t;

// Type alias of pointer-sized unsigned-integer type.
using isize = std::intptr_t;

// TODO
struct GraphicsFactory;

// TODO
struct Graphics2D;

// TODO
struct Graphics3D;

// TODO
struct GraphicsBuffer2D;

// TODO
struct GraphicsBuffer3D;

// TODO
struct Container;

// TODO
struct ContainerAdapter;

}

#include <kube/kube.backend.hh>
#include <kube/kube.math.hh>
#include <kube/kube.box2d.hh>
#include <kube/kube.box3d.hh>
#include <kube/kube.color3d.hh>
#include <kube/kube.color4d.hh>
#include <kube/kube.graphicsfactory.hh>
#include <kube/kube.graphics2d.hh>
#include <kube/kube.graphics3d.hh>
#include <kube/kube.container.hh>

#endif