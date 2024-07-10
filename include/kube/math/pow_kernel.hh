#ifndef KUBE_MATH_POW_KERNEL_HH
#define KUBE_MATH_POW_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// Declaration of round function for "typename f32::native_type"
KUBE_HEADERONLY_INLINE auto pow(
    typename f32::native_type x,
    typename f32::native_type y
) noexcept
    -> typename f32::native_type;

// Declaration of round function for "typename f64::native_type"
KUBE_HEADERONLY_INLINE auto pow(
    typename f64::native_type x,
    typename f64::native_type y
) noexcept
    -> typename f64::native_type;
}

#endif