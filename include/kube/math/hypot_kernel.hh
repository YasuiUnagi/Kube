#ifndef KUBE_MATH_HYPOT_KERNEL_HH
#define KUBE_MATH_HYPOT_KERNEL_HH

#include <kube.hh>

namespace kube::math::kernel {

// Declaration of round function for "typename f32::native_type"
KUBE_HEADERONLY_INLINE auto hypot(
    typename f32::native_type x,
    typename f32::native_type y
) noexcept
    -> typename f32::native_type;

KUBE_HEADERONLY_INLINE auto hypot(
    typename f32::native_type x,
    typename f32::native_type y,
    typename f32::native_type z
) noexcept
    -> typename f32::native_type;

// Declaration of round function for "typename f64::native_type"
KUBE_HEADERONLY_INLINE auto hypot(
    typename f64::native_type x,
    typename f64::native_type y
) noexcept
    -> typename f64::native_type;

KUBE_HEADERONLY_INLINE auto hypot(
    typename f64::native_type x,
    typename f64::native_type y,
    typename f64::native_type z
) noexcept
    -> typename f64::native_type;
}

#endif