#ifndef KUBE_MATH_CEIL_HH
#define KUBE_MATH_CEIL_HH

#include <kube.hh>

namespace kube::math {

// Round down to the interval [0.0, 1.0)
template < typename T >
inline auto ceil(T) noexcept
    -> T = delete;

template <>
inline auto ceil(f32 x) noexcept
    -> f32 { return {kernel::ceil(x.native)}; }

template <>
inline auto ceil(f64 x) noexcept
    -> f64 { return {kernel::ceil(x.native)}; }
}

#endif