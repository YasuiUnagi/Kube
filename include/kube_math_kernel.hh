#ifndef KUBE_MATH_IMPL_HH
#define KUBE_MATH_IMPL_HH

#include <kube.hh>
#include <cmath>  // Include the standard math library

namespace kube {

    // Implementation of 64-bit floating point math functions

    KUBE_HEADERONLY_INLINE auto _kfloor_f64(typename f64::native_type x) noexcept
        -> typename f32::native_type {
        return std::floor(x);
    }

    KUBE_HEADERONLY_INLINE auto _kceil_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::ceil(x);
    }

    KUBE_HEADERONLY_INLINE auto _kabs_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::abs(x);
    }

    KUBE_HEADERONLY_INLINE auto _ksin_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::sin(x);
    }

    KUBE_HEADERONLY_INLINE auto _kcos_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::cos(x);
    }

    KUBE_HEADERONLY_INLINE auto _ktan_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::tan(x);
    }

    KUBE_HEADERONLY_INLINE auto _kasin_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::asin(x);
    }

    KUBE_HEADERONLY_INLINE auto _kacos_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::acos(x);
    }

    KUBE_HEADERONLY_INLINE auto _katan_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::atan(x);
    }
    
    KUBE_HEADERONLY_INLINE auto _klog_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::log(x);
    }

    KUBE_HEADERONLY_INLINE auto _klog2_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::log2(x);
    }

    KUBE_HEADERONLY_INLINE auto _kexp_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::exp(x);
    }

    KUBE_HEADERONLY_INLINE auto _kexp2_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::exp2(x);
    }

    KUBE_HEADERONLY_INLINE auto _ksqrt_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::sqrt(x);
    }

    KUBE_HEADERONLY_INLINE auto _kcbrt_f64(typename f64::native_type x) noexcept
        -> typename f64::native_type {
        return std::cbrt(x);
    }

    KUBE_HEADERONLY_INLINE auto _khypot2d_f64(
        typename f64::native_type x,
        typename f64::native_type y
    ) noexcept
        -> typename f64::native_type {
        return std::hypot(x, y);
    }

    KUBE_HEADERONLY_INLINE auto _khypot3d_f64(
        typename f64::native_type x,
        typename f64::native_type y,
        typename f64::native_type z
    ) noexcept
        -> typename f64::native_type {
        return std::hypot(x, y, z);
    }

    // Implementation of 32-bit floating point math functions

    KUBE_HEADERONLY_INLINE auto _kfloor_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::floor(x);
    }

    KUBE_HEADERONLY_INLINE auto _kceil_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::ceil(x);
    }

    KUBE_HEADERONLY_INLINE auto _kabs_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::abs(x);
    }

    KUBE_HEADERONLY_INLINE auto _ksin_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::sin(x);
    }

    KUBE_HEADERONLY_INLINE auto _kcos_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::cos(x);
    }

    KUBE_HEADERONLY_INLINE auto _ktan_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::tan(x);
    }

    KUBE_HEADERONLY_INLINE auto _kasin_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::asin(x);
    }

    KUBE_HEADERONLY_INLINE auto _kacos_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::acos(x);
    }

    KUBE_HEADERONLY_INLINE auto _katan_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::atan(x);
    }

    KUBE_HEADERONLY_INLINE auto _klog_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::log(x);
    }

    KUBE_HEADERONLY_INLINE auto _klog2_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::log2(x);
    }

    KUBE_HEADERONLY_INLINE auto _kexp_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::exp(x);
    }

    KUBE_HEADERONLY_INLINE auto _kexp2_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::exp2(x);
    }

    KUBE_HEADERONLY_INLINE auto _ksqrt_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::sqrt(x);
    }

    KUBE_HEADERONLY_INLINE auto _kcbrt_f32(typename f32::native_type x) noexcept
        -> typename f32::native_type {
        return std::cbrt(x);
    }

    KUBE_HEADERONLY_INLINE auto _khypot2d_f32(
        typename f32::native_type x,
        typename f32::native_type y
    ) noexcept
        -> typename f32::native_type {
        return std::hypot(x, y);
    }

    KUBE_HEADERONLY_INLINE auto _khypot3d_f32(
        typename f32::native_type x,
        typename f32::native_type y,
        typename f32::native_type z
    ) noexcept
        -> typename f32::native_type {
        return std::hypot(x, y, z);
    }
}

#endif
