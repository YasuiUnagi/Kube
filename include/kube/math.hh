/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_MATH_HH
#define KUBE_MATH_HH

#include <kube.hh>
#include <limits>

namespace kube::math {

template < typename T >
constexpr auto pi() noexcept
    -> T = delete;

template <>
constexpr auto pi() noexcept
    -> f32 { return {3.141592653589793238}; }

template <>
constexpr auto pi() noexcept
    -> f64 { return {3.141592653589793238}; }

template < typename T >
constexpr auto e() noexcept
    -> T = delete;

template <>
constexpr auto e() noexcept
    -> f32 { return {2.718281828459045235}; }

template <>
constexpr auto e() noexcept
    -> f64 { return {2.718281828459045235}; }
}

#include <kube/math/sin_kernel.hh>
#include <kube/math/sin.hh>
#include <kube/math/cos_kernel.hh>
#include <kube/math/cos.hh>
#include <kube/math/tan_kernel.hh>
#include <kube/math/tan.hh>
#include <kube/math/asin_kernel.hh>
#include <kube/math/asin.hh>
#include <kube/math/acos_kernel.hh>
#include <kube/math/acos.hh>
#include <kube/math/atan_kernel.hh>
#include <kube/math/atan.hh>
#include <kube/math/ceil_kernel.hh>
#include <kube/math/ceil.hh>
#include <kube/math/floor_kernel.hh>
#include <kube/math/floor.hh>
#include <kube/math/round_kernel.hh>
#include <kube/math/round.hh>
#include <kube/math/pow_kernel.hh>
#include <kube/math/pow.hh>
#include <kube/math/sqrt_kernel.hh>
#include <kube/math/sqrt.hh>
#include <kube/math/cbrt_kernel.hh>
#include <kube/math/cbrt.hh>
#include <kube/math/hypot_kernel.hh>
#include <kube/math/hypot.hh>
#include <kube/math/abs_kernel.hh>
#include <kube/math/abs.hh>

#endif