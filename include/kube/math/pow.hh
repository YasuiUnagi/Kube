#ifndef KUBE_MATH_POW_HH
#define KUBE_MATH_POW_HH

#include <kube.hh>

namespace kube::math {

// Round down to the interval [0.0, 1.0)
template < typename T >
inline auto pow(T, T) noexcept
    -> T = delete;

template <>
inline auto pow(f32 x, f32 y) noexcept
    -> f32 { return {kernel::pow(x.native, y.native)}; }

template <>
inline auto pow(f64 x, f64 y) noexcept
    -> f64 { return {kernel::pow(x.native, y.native)}; }
}

#endif