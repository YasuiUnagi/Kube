#ifndef KUBE_MATH_POW_KERNEL_HH
#define KUBE_MATH_POW_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// f32"
KUBE_HEADERONLY_INLINE auto pow(f32 x, f32 y) noexcept
    -> f32;

// f64"
KUBE_HEADERONLY_INLINE auto pow(f64 x, f64 y) noexcept
    -> f64;
}

#endif