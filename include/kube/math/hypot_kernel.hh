#ifndef KUBE_MATH_HYPOT_KERNEL_HH
#define KUBE_MATH_HYPOT_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// Declaration of round function for "f32pe"
KUBE_HEADERONLY_INLINE auto hypot(f32 x, f32 y) noexcept
    -> f32;

KUBE_HEADERONLY_INLINE auto hypot(f32 x, f32 y, f32 z) noexcept
    -> f32;

// Declaration of round function for "f64pe"
KUBE_HEADERONLY_INLINE auto hypot(f64 x, f64 y) noexcept
    -> f64;

KUBE_HEADERONLY_INLINE auto hypot(f64 x, f64 y, f64 z) noexcept
    -> f64;
}

#endif