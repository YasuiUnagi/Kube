#ifndef KUBE_MATH_CEIL_KERNEL_HH
#define KUBE_MATH_CEIL_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// Declaration of ceil function for "typename f32::native_type"
KUBE_HEADERONLY_INLINE auto ceil(typename f32::native_type) noexcept
    -> typename f32::native_type;

// Declaration of ceil function for "typename f64::native_type"
KUBE_HEADERONLY_INLINE auto ceil(typename f64::native_type) noexcept
    -> typename f64::native_type;
}

#endif