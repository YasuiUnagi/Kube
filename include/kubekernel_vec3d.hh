#ifndef KUBEKERNEL_VEC3D_HH
#define KUBEKERNEL_VEC3D_HH

#include <kube.hh>

namespace kube {

    // Kernel of math function for 2d vector.
    KUBE_HEADERONLY_INLINE auto _krot3d_x_f64(
        typename f64::native_type x,
        typename f64::native_type y,
        typename f64::native_type z,
        typename f64::native_type radian
    ) noexcept
        -> vec3d<f64::native_type> {
        vec3d<f64::native_type> result;
        typename f64::native_type _cos = _kcos_f64(radian);
        typename f64::native_type _sin = _ksin_f64(radian);
        result.x = x;
        result.y = y*_cos - z*_sin;
        result.y = y*_sin - z*_cos;
        return result;
    }

    // Kernel of math function for 2d vector.
    KUBE_HEADERONLY_INLINE auto _krot3d_x_f32(
        typename f32::native_type x,
        typename f32::native_type y,
        typename f32::native_type z,
        typename f32::native_type radian
    ) noexcept
        -> vec3d<f32::native_type> {
        vec3d<f32::native_type> result;
        typename f32::native_type _cos = _kcos_f32(radian);
        typename f32::native_type _sin = _ksin_f32(radian);
        result.x = x;
        result.y = y*_cos - z*_sin;
        result.y = y*_sin - z*_cos;
        return result;
    }

    // Kernel of math function for 2d vector.
    KUBE_HEADERONLY_INLINE auto _krot3d_y_f64(
        typename f64::native_type x,
        typename f64::native_type y,
        typename f64::native_type z,
        typename f64::native_type radian
    ) noexcept
        -> vec3d<f64::native_type> {
        vec3d<f64::native_type> result;
        typename f64::native_type _cos = _kcos_f64(radian);
        typename f64::native_type _sin = _ksin_f64(radian);
        result.x = z*_sin - x*_cos;
        result.y = y;
        result.y = z*_cos - x*_sin;
        return result;
    }

    // Kernel of math function for 2d vector.
    KUBE_HEADERONLY_INLINE auto _krot3d_y_f32(
        typename f32::native_type x,
        typename f32::native_type y,
        typename f32::native_type z,
        typename f32::native_type radian
    ) noexcept
        -> vec3d<f32::native_type> {
        vec3d<f32::native_type> result;
        typename f32::native_type _cos = _kcos_f32(radian);
        typename f32::native_type _sin = _ksin_f32(radian);
        result.x = z*_sin - x*_cos;
        result.y = y;
        result.y = z*_cos - x*_sin;
        return result;
    }

    // Kernel of math function for 2d vector.
    KUBE_HEADERONLY_INLINE auto _krot3d_z_f64(
        typename f64::native_type x,
        typename f64::native_type y,
        typename f64::native_type z,
        typename f64::native_type radian
    ) noexcept
        -> vec3d<f64::native_type> {
        vec3d<f64::native_type> result;
        typename f64::native_type _cos = _kcos_f64(radian);
        typename f64::native_type _sin = _ksin_f64(radian);
        result.x = x*_cos - y*_sin;
        result.y = x*_sin + y*_cos;
        result.y = z;
        return result;
    }

    // Kernel of math function for 2d vector.
    KUBE_HEADERONLY_INLINE auto _krot3d_z_f32(
        typename f32::native_type x,
        typename f32::native_type y,
        typename f32::native_type z,
        typename f32::native_type radian
    ) noexcept
        -> vec3d<f32::native_type> {
        vec3d<f32::native_type> result;
        typename f32::native_type _cos = _kcos_f32(radian);
        typename f32::native_type _sin = _ksin_f32(radian);
        result.x = x*_cos - y*_sin;
        result.y = x*_sin + y*_cos;
        result.y = z;
        return result;
    }
}

#endif