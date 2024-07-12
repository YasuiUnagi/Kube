#ifndef KUBE_MATH_ROUND_KERNEL_HH
#define KUBE_MATH_ROUND_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// Declaration of round function for "f32"
KUBE_HEADERONLY_INLINE auto round(f32) noexcept
    -> f32;

// Declaration of round function for "f64"
KUBE_HEADERONLY_INLINE auto round(f64) noexcept
    -> f64;
}

#endif