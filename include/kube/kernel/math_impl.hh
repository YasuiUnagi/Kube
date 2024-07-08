#ifndef KUBEKERNEL_MATH_IMPL_HH
#define KUBEKERNEL_MATH_IMPL_HH

#include <kube/kernel.hh>
#include <cmath>

namespace kube::kernel {

KUBE_HEADERONLY_INLINE f32 sin_f32(f32 radian) noexcept {
    return std::sin(radian);
}

KUBE_HEADERONLY_INLINE f64 sin_f64(f64 radian) noexcept {
    return std::sin(radian);
}

KUBE_HEADERONLY_INLINE f32 cos_f32(f32 radian) noexcept {
    return std::cos(radian);
}

KUBE_HEADERONLY_INLINE f64 cos_f64(f64 radian) noexcept {
    return std::cos(radian);
}

KUBE_HEADERONLY_INLINE f32 tan_f32(f32 radian) noexcept {
    return std::tan(radian);
}

KUBE_HEADERONLY_INLINE f64 tan_f64(f64 radian) noexcept {
    return std::tan(radian);
}

KUBE_HEADERONLY_INLINE f32 asin_f32(f32 x) noexcept {
    return std::asin(x);
}

KUBE_HEADERONLY_INLINE f64 asin_f64(f64 x) noexcept {
    return std::asin(x);
}

KUBE_HEADERONLY_INLINE f32 acos_f32(f32 x) noexcept {
    return std::acos(x);
}

KUBE_HEADERONLY_INLINE f64 acos_f64(f64 x) noexcept {
    return std::acos(x);
}

KUBE_HEADERONLY_INLINE f32 atan_f32(f32 x) noexcept {
    return std::atan(x);
}

KUBE_HEADERONLY_INLINE f64 atan_f64(f64 x) noexcept {
    return std::atan(x);
}

KUBE_HEADERONLY_INLINE f32 abs_f32(f32 x) noexcept {
    return std::fabs(x);
}

KUBE_HEADERONLY_INLINE f64 abs_f64(f64 x) noexcept {
    return std::fabs(x);
}

KUBE_HEADERONLY_INLINE f32 ceil_f32(f32 x) noexcept {
    return std::ceil(x);
}

KUBE_HEADERONLY_INLINE f64 ceil_f64(f64 x) noexcept {
    return std::ceil(x);
}

KUBE_HEADERONLY_INLINE f32 floor_f32(f32 x) noexcept {
    return std::floor(x);
}

KUBE_HEADERONLY_INLINE f64 floor_f64(f64 x) noexcept {
    return std::floor(x);
}

KUBE_HEADERONLY_INLINE f32 sqrt_f32(f32 x) noexcept {
    return std::sqrt(x);
}

KUBE_HEADERONLY_INLINE f64 sqrt_f64(f64 x) noexcept {
    return std::sqrt(x);
}

KUBE_HEADERONLY_INLINE f32 cbrt_f32(f32 x) noexcept {
    return std::cbrt(x);
}

KUBE_HEADERONLY_INLINE f64 cbrt_f64(f64 x) noexcept {
    return std::cbrt(x);
}

KUBE_HEADERONLY_INLINE f32 hypot2d_f32(f32 x, f32 y) noexcept {
    return std::hypot(x, y);
}

KUBE_HEADERONLY_INLINE f64 hypot2d_f64(f64 x, f32 y) noexcept {
    return std::hypot(x, y);   
}

KUBE_HEADERONLY_INLINE f32 hypot3d_f32(f32 x, f32 y, f32 z) noexcept {
    return std::hypot(x, y, z);
}

KUBE_HEADERONLY_INLINE f64 hypot3d_f64(f64 x, f32 y, f32 z) noexcept {
    return std::hypot(x, y, z);
}
}

#endif
