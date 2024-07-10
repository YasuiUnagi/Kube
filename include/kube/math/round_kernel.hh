#ifndef KUBE_MATH_ROUND_KERNEL_HH
#define KUBE_MATH_ROUND_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// Declaration of round function for "typename f32::native_type"
KUBE_HEADERONLY_INLINE auto round(typename f32::native_type) noexcept
    -> typename f32::native_type;

// Declaration of round function for "typename f64::native_type"
KUBE_HEADERONLY_INLINE auto round(typename f64::native_type) noexcept
    -> typename f64::native_type;
}

#endif