#ifndef KUBE_MATH_CEIL_KERNEL_HH
#define KUBE_MATH_CEIL_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// Declaration of ceil function for "f32"
KUBE_HEADERONLY_INLINE auto ceil(f32) noexcept
    -> f32;

// Declaration of ceil function for "f64"
KUBE_HEADERONLY_INLINE auto ceil(f64) noexcept
    -> f64;
}

#endif