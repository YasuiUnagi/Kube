#ifndef KUBE_KERNEL_MATH_HH
#define KUBE_KERNEL_MATH_HH

#include <kube/kernel.hh>

namespace kube::kernel {

// Trigonometric functions
KUBE_HEADERONLY_INLINE f32 sin_f32(f32 radian) noexcept;
KUBE_HEADERONLY_INLINE f64 sin_f64(f64 radian) noexcept;
KUBE_HEADERONLY_INLINE f32 cos_f32(f32 radian) noexcept;
KUBE_HEADERONLY_INLINE f64 cos_f64(f64 radian) noexcept;
KUBE_HEADERONLY_INLINE f32 tan_f32(f32 radian) noexcept;
KUBE_HEADERONLY_INLINE f64 tan_f64(f64 radian) noexcept;

// Inverse trigonometric functions
KUBE_HEADERONLY_INLINE f32 asin_f32(f32 x) noexcept;
KUBE_HEADERONLY_INLINE f64 asin_f64(f64 x) noexcept;
KUBE_HEADERONLY_INLINE f32 acos_f32(f32 x) noexcept;
KUBE_HEADERONLY_INLINE f64 acos_f64(f64 x) noexcept;
KUBE_HEADERONLY_INLINE f32 atan_f32(f32 x) noexcept;
KUBE_HEADERONLY_INLINE f64 atan_f64(f64 x) noexcept;

// Absolute value
KUBE_HEADERONLY_INLINE f32 abs_f32(f32 x) noexcept;
KUBE_HEADERONLY_INLINE f64 abs_f64(f64 x) noexcept;

// Ceiling function
KUBE_HEADERONLY_INLINE f32 ceil_f32(f32 x) noexcept;
KUBE_HEADERONLY_INLINE f64 ceil_f64(f64 x) noexcept;

// Floor function
KUBE_HEADERONLY_INLINE f32 floor_f32(f32 x) noexcept;
KUBE_HEADERONLY_INLINE f64 floor_f64(f64 x) noexcept;

// Square root
KUBE_HEADERONLY_INLINE f32 sqrt_f32(f32 x) noexcept;
KUBE_HEADERONLY_INLINE f64 sqrt_f64(f64 x) noexcept;

// Cube root
KUBE_HEADERONLY_INLINE f32 cbrt_f32(f32 x) noexcept;
KUBE_HEADERONLY_INLINE f64 cbrt_f64(f64 x) noexcept;

// Hypothesis for 2d.
KUBE_HEADERONLY_INLINE f32 hypot2d_f32(f32 x, f32 y) noexcept;
KUBE_HEADERONLY_INLINE f64 hypot2d_f64(f64 x, f32 y) noexcept;

// Hypothesis for 2d.
KUBE_HEADERONLY_INLINE f32 hypot3d_f32(f32 x, f32 y, f32 z) noexcept;
KUBE_HEADERONLY_INLINE f64 hypot3d_f64(f64 x, f32 y, f32 z) noexcept;
}

#endif