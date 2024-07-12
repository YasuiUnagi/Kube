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

// Type alias of 8bit signed-integer type.
using i8 = std::int8_t;

// Type alias of 16bit signed-integer type.
using i16 = std::int16_t;

// Type alias of 32bit signed-integer type.
using i32 = std::int32_t;

// Type alias of 64bit signed-integer type.
using i64 = std::int64_t;

}

#include <kube/math.hh>
#include <kube/video.hh>

#endif