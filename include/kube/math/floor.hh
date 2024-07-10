#ifndef KUBE_MATH_FLOOR_HH
#define KUBE_MATH_FLOOR_HH

#include <kube.hh>

namespace kube::math {

// Round down to the interval [0.0, 1.0)
template < typename T >
inline auto floor(T) noexcept
    -> T = delete;

template <>
inline auto floor(f32 x) noexcept
    -> f32 { return {kernel::floor(x.native)}; }

template <>
inline auto floor(f64 x) noexcept
    -> f64 { return {kernel::floor(x.native)}; }
}

#endif