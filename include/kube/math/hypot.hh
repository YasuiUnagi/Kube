#ifndef KUBE_MATH_HYPOT_HH
#define KUBE_MATH_HYPOT_HH

#include <kube.hh>

namespace kube::math {

// Round down to the interval [0.0, 1.0)
template < typename T >
inline auto hypot(T, T) noexcept
    -> T = delete;

template < typename T >
inline auto hypot(T, T, T) noexcept
    -> T = delete;

template <>
inline auto hypot(f32 x, f32 y) noexcept
    -> f32 { return {kernel::hypot(x.native, y.native)}; }

template <>
inline auto hypot(f32 x, f32 y, f32 z) noexcept
    -> f32 { return {kernel::hypot(x.native, y.native, z.native)}; }

template <>
inline auto hypot(f64 x, f64 y) noexcept
    -> f64 { return {kernel::hypot(x.native, y.native)}; }

template <>
inline auto hypot(f64 x, f64 y, f64 z) noexcept
    -> f64 { return {kernel::hypot(x.native, y.native, z.native)}; }
}

#endif