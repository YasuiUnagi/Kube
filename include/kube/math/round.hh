#ifndef KUBE_MATH_ROUND_HH
#define KUBE_MATH_ROUND_HH

#include <kube.hh>

namespace kube::math {

template < typename T >
inline auto round(T) noexcept
    -> T = delete;

template <>
inline auto round(f32 x) noexcept
    -> f32 { return {kernel::round(x.native)}; }

template <>
inline auto round(f64 x) noexcept
    -> f64 { return {kernel::round(x.native)}; }
}

#endif