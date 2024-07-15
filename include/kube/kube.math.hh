#ifndef KUBE_MATH_HH
#define KUBE_MATH_HH

#include <kube/kube.hh>

// TODO
namespace kube::backend {

// Sine function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto sin(f32) noexcept
    -> f32;

// Sine function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto sin(f64) noexcept
    -> f64;

// Cosine function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto cos(f32) noexcept
    -> f32;

// Cosine function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto cos(f64) noexcept
    -> f64;

// Tangent function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto tan(f32) noexcept
    -> f32;

// Tangent function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto tan(f64) noexcept
    -> f64;

// Arc sine function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto asin(f32) noexcept
    -> f32;

// Arc sine function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto asin(f64) noexcept
    -> f64;

// Arc cosine function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto acos(f32) noexcept
    -> f32;

// Arc cosine function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto acos(f64) noexcept
    -> f64;

// Arc tangent function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto atan(f32) noexcept
    -> f32;

// Arc tangent function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto atan(f64) noexcept
    -> f64;

// Hyperbolic sine function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto sinh(f32) noexcept
    -> f32;

// Hyperbolic sine function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto sinh(f64) noexcept
    -> f64;

// Hyperbolic cosine function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto cosh(f32) noexcept
    -> f32;

// Hyperbolic cosine function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto cosh(f64) noexcept
    -> f64;

// Hyperbolic tangent function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto tanh(f32) noexcept
    -> f32;

// Hyperbolic tangent function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto tanh(f64) noexcept
    -> f64;

// Inverse hyperbolic sine function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto asinh(f32) noexcept
    -> f32;

// Inverse hyperbolic sine function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto asinh(f64) noexcept
    -> f64;

// Inverse hyperbolic cosine function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto acosh(f32) noexcept
    -> f32;

// Inverse hyperbolic cosine function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto acosh(f64) noexcept
    -> f64;

// Inverse hyperbolic tangent function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto atanh(f32) noexcept
    -> f32;

// Inverse hyperbolic tangent function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto atanh(f64) noexcept
    -> f64;

// Exponential function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto exp(f32) noexcept
    -> f32;

// Exponential function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto exp(f64) noexcept
    -> f64;

// Natural logarithm function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto log(f32) noexcept
    -> f32;

// Natural logarithm function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto log(f64) noexcept
    -> f64;

// Base-10 logarithm function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto log10(f32) noexcept
    -> f32;

// Base-10 logarithm function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto log10(f64) noexcept
    -> f64;

// Square root function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto sqrt(f32) noexcept
    -> f32;

// Square root function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto sqrt(f64) noexcept
    -> f64;

// Cube root function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto cbrt(f32) noexcept
    -> f32;

// Cube root function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto cbrt(f64) noexcept
    -> f64;

// Power function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto pow(f32, f32) noexcept
    -> f32;

// Power function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto pow(f64, f64) noexcept
    -> f64;

// Absolute value function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto abs(f32) noexcept
    -> f32;

// Absolute value function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto abs(f64) noexcept
    -> f64;

// Floor function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto floor(f32) noexcept
    -> f32;

// Floor function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto floor(f64) noexcept
    -> f64;

// Ceiling function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto ceil(f32) noexcept
    -> f32;

// Ceiling function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto ceil(f64) noexcept
    -> f64;

// Rounding function for 32bit floating-point
KUBE_HEADERONLY_INLINE auto round(f32) noexcept
    -> f32;

// Rounding function for 64bit floating-point
KUBE_HEADERONLY_INLINE auto round(f64) noexcept
    -> f64;

// Hypotenuse function for 2D coordinates (32bit floating-point)
KUBE_HEADERONLY_INLINE auto hypot(f32, f32) noexcept
    -> f32;

// Hypotenuse function for 2D coordinates (64bit floating-point)
KUBE_HEADERONLY_INLINE auto hypot(f64, f64) noexcept
    -> f64;

// Hypotenuse function for 3D coordinates (32bit floating-point)
KUBE_HEADERONLY_INLINE auto hypot(f32, f32, f32) noexcept
    -> f32;

// Hypotenuse function for 3D coordinates (64bit floating-point)
KUBE_HEADERONLY_INLINE auto hypot(f64, f64, f64) noexcept
    -> f64;

}

// TODO
namespace kube {

// TODO
template < typename T >
inline constexpr T pi;

// TODO
template <>
inline constexpr f32 pi<f32> {3.1415926535897932384626};

// TODO
template <>
inline constexpr f64 pi<f64> {3.1415926535897932384626};

// TODO
template < typename T >
inline constexpr T tau;

// TODO
template <>
inline constexpr f32 tau<f32> {3.1415926535897932384626*2.0};

// TODO
template <>
inline constexpr f64 tau<f64> {3.1415926535897932384626*2.0};

// TODO
template < typename T >
inline constexpr T e;

// TODO
template <>
inline constexpr f32 e<f32> {2.718281828459045235360287471352};

// TODO
template <>
inline constexpr f32 e<f64> {2.718281828459045235360287471352};

// Template of sin function for T
template <typename T>
inline auto sin(T x) noexcept
    -> T = delete;

template <>
inline auto sin(f32 x) noexcept
    -> f32 { return {backend::sin(x)}; }

template <>
inline auto sin(f64 x) noexcept
    -> f64 { return {backend::sin(x)}; }

// Template of cos function for T
template <typename T>
inline auto cos(T x) noexcept
    -> T = delete;

template <>
inline auto cos(f32 x) noexcept
    -> f32 { return {backend::cos(x)}; }

template <>
inline auto cos(f64 x) noexcept
    -> f64 { return {backend::cos(x)}; }

// Template of tan function for T
template <typename T>
inline auto tan(T x) noexcept
    -> T = delete;

template <>
inline auto tan(f32 x) noexcept
    -> f32 { return {backend::tan(x)}; }

template <>
inline auto tan(f64 x) noexcept
    -> f64 { return {backend::tan(x)}; }

// Template of asin function for T
template <typename T>
inline auto asin(T x) noexcept
    -> T = delete;

template <>
inline auto asin(f32 x) noexcept
    -> f32 { return {backend::asin(x)}; }

template <>
inline auto asin(f64 x) noexcept
    -> f64 { return {backend::asin(x)}; }

// Template of acos function for T
template <typename T>
inline auto acos(T x) noexcept
    -> T = delete;

template <>
inline auto acos(f32 x) noexcept
    -> f32 { return {backend::acos(x)}; }

template <>
inline auto acos(f64 x) noexcept
    -> f64 { return {backend::acos(x)}; }

// Template of atan function for T
template <typename T>
inline auto atan(T x) noexcept
    -> T = delete;

template <>
inline auto atan(f32 x) noexcept
    -> f32 { return {backend::atan(x)}; }

template <>
inline auto atan(f64 x) noexcept
    -> f64 { return {backend::atan(x)}; }

// Template of sinh function for T
template <typename T>
inline auto sinh(T x) noexcept
    -> T = delete;

template <>
inline auto sinh(f32 x) noexcept
    -> f32 { return {backend::sinh(x)}; }

template <>
inline auto sinh(f64 x) noexcept
    -> f64 { return {backend::sinh(x)}; }

// Template of cosh function for T
template <typename T>
inline auto cosh(T x) noexcept
    -> T = delete;

template <>
inline auto cosh(f32 x) noexcept
    -> f32 { return {backend::cosh(x)}; }

template <>
inline auto cosh(f64 x) noexcept
    -> f64 { return {backend::cosh(x)}; }

// Template of tanh function for T
template <typename T>
inline auto tanh(T x) noexcept
    -> T = delete;

template <>
inline auto tanh(f32 x) noexcept
    -> f32 { return {backend::tanh(x)}; }

template <>
inline auto tanh(f64 x) noexcept
    -> f64 { return {backend::tanh(x)}; }

// Template of asinh function for T
template <typename T>
inline auto asinh(T x) noexcept
    -> T = delete;

template <>
inline auto asinh(f32 x) noexcept
    -> f32 { return {backend::asinh(x)}; }

template <>
inline auto asinh(f64 x) noexcept
    -> f64 { return {backend::asinh(x)}; }

// Template of acosh function for T
template <typename T>
inline auto acosh(T x) noexcept
    -> T = delete;

template <>
inline auto acosh(f32 x) noexcept
    -> f32 { return {backend::acosh(x)}; }

template <>
inline auto acosh(f64 x) noexcept
    -> f64 { return {backend::acosh(x)}; }

// Template of atanh function for T
template <typename T>
inline auto atanh(T x) noexcept
    -> T = delete;

template <>
inline auto atanh(f32 x) noexcept
    -> f32 { return {backend::atanh(x)}; }

template <>
inline auto atanh(f64 x) noexcept
    -> f64 { return {backend::atanh(x)}; }

// Template of exp function for T
template <typename T>
inline auto exp(T x) noexcept
    -> T = delete;

template <>
inline auto exp(f32 x) noexcept
    -> f32 { return {backend::exp(x)}; }

template <>
inline auto exp(f64 x) noexcept
    -> f64 { return {backend::exp(x)}; }

// Template of log function for T
template <typename T>
inline auto log(T x) noexcept
    -> T = delete;

template <>
inline auto log(f32 x) noexcept
    -> f32 { return {backend::log(x)}; }

template <>
inline auto log(f64 x) noexcept
    -> f64 { return {backend::log(x)}; }

// Template of log10 function for T
template <typename T>
inline auto log10(T x) noexcept
    -> T = delete;

template <>
inline auto log10(f32 x) noexcept
    -> f32 { return {backend::log10(x)}; }

template <>
inline auto log10(f64 x) noexcept
    -> f64 { return {backend::log10(x)}; }

// Template of sqrt function for T
template <typename T>
inline auto sqrt(T x) noexcept
    -> T = delete;

template <>
inline auto sqrt(f32 x) noexcept
    -> f32 { return {backend::sqrt(x)}; }

template <>
inline auto sqrt(f64 x) noexcept
    -> f64 { return {backend::sqrt(x)}; }

// Template of cbrt function for T
template <typename T>
inline auto cbrt(T x) noexcept
    -> T = delete;

template <>
inline auto cbrt(f32 x) noexcept
    -> f32 { return {backend::cbrt(x)}; }

template <>
inline auto cbrt(f64 x) noexcept
    -> f64 { return {backend::cbrt(x)}; }

// Template of pow function for T
template <typename T>
inline auto pow(T x, T y) noexcept
    -> T = delete;

template <>
inline auto pow(f32 x, f32 y) noexcept
    -> f32 { return {backend::pow(x, y)}; }

template <>
inline auto pow(f64 x, f64 y) noexcept
    -> f64 { return {backend::pow(x, y)}; }

// Template of abs function for T
template <typename T>
inline auto abs(T x) noexcept
    -> T = delete;

template <>
inline auto abs(f32 x) noexcept
    -> f32 { return {backend::abs(x)}; }

template <>
inline auto abs(f64 x) noexcept
    -> f64 { return {backend::abs(x)}; }

// Template of floor function for T
template <typename T>
inline auto floor(T x) noexcept
    -> T = delete;

template <>
inline auto floor(f32 x) noexcept
    -> f32 { return {backend::floor(x)}; }

template <>
inline auto floor(f64 x) noexcept
    -> f64 { return {backend::floor(x)}; }

// Template of ceil function for T
template <typename T>
inline auto ceil(T x) noexcept
    -> T = delete;

template <>
inline auto ceil(f32 x) noexcept
    -> f32 { return {backend::ceil(x)}; }

template <>
inline auto ceil(f64 x) noexcept
    -> f64 { return {backend::ceil(x)}; }

// Template of round function for T
template <typename T>
inline auto round(T x) noexcept
    -> T = delete;

template <>
inline auto round(f32 x) noexcept
    -> f32 { return {backend::round(x)}; }

template <>
inline auto round(f64 x) noexcept
    -> f64 { return {backend::round(x)}; }

// Template of hypot function for T
template <typename T>
inline auto hypot(T x, T y) noexcept
    -> T = delete;

template <>
inline auto hypot(f32 x, f32 y) noexcept
    -> f32 { return {backend::hypot(x, y)}; }

template <>
inline auto hypot(f64 x, f64 y) noexcept
    -> f64 { return {backend::hypot(x, y)}; }

// Template of hypot function for 3D coordinates for T
template <typename T>
inline auto hypot(T x, T y, T z) noexcept
    -> T = delete;

template <>
inline auto hypot(f32 x, f32 y, f32 z) noexcept
    -> f32 { return {backend::hypot(x, y, z)}; }

template <>
inline auto hypot(f64 x, f64 y, f64 z) noexcept
    -> f64 { return {backend::hypot(x, y, z)}; }

}

#endif