#ifndef KUBE_KERNEL_HH
#define KUBE_KERNEL_HH

#include <kube.hh>

namespace kube::kernel {

// Aliases of builtin floating-point.
using f64 = double;
using f32 = float;

// Aliases of builtin signed-integer.
using i64 = std::int64_t;
using i32 = std::int32_t;
using i16 = std::int16_t;
using i8 = std::int8_t;

// Aliases of builtin unsigned-integer.
using u64 = std::uint64_t;
using u32 = std::uint32_t;
using u16 = std::uint16_t;
using u8 = std::uint8_t;

// Interface of 2d graphics object.
struct graphics;

// Interface of 2d graphics object.
struct graphics2d;

// Interface of 3d graphics object.
struct graphics3d;

// Interface of window object.
struct window;

}

#include <kube/kernel/math.hh>
#include <kube/kernel/window.hh>
#include <kube/kernel/graphics.hh>
#include <kube/kernel/graphics2d.hh>
#include <kube/kernel/graphics3d.hh>

#endif
