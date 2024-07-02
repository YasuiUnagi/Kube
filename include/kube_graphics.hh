/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_GRAPHICS_HH
#define KUBE_GRAPHICS_HH

#include <kube.hh>

namespace kube {

    // Kernel of 2d graphics for change 4d color.
    KUBE_HEADERONLY_INLINE void _kuse_color4d_f64(
        typename f64::native_type r,
        typename f64::native_type g,
        typename f64::native_type b,
        typename f64::native_type a
    ) noexcept;

    // Kernel of 2d graphics for change 4d color.
    KUBE_HEADERONLY_INLINE void _kuse_color4d_f32(
        typename f32::native_type r,
        typename f32::native_type g,
        typename f32::native_type b,
        typename f32::native_type a
    ) noexcept;

    // Kernel of 2d graphics for change 4d color.
    KUBE_HEADERONLY_INLINE void _kuse_color3d_f64(
        typename f64::native_type r,
        typename f64::native_type g,
        typename f64::native_type b
    ) noexcept;

    // Kernel of 2d graphics for change 4d color.
    KUBE_HEADERONLY_INLINE void _kuse_color3d_f32(
        typename f32::native_type r,
        typename f32::native_type g,
        typename f32::native_type b
    ) noexcept;

    // Kernel of 2d graphics
    KUBE_HEADERONLY_INLINE void _kdraw_line2d_f64(
        typename f64::native_type x1,
        typename f64::native_type y1,
        typename f64::native_type x2,
        typename f64::native_type y2
    ) noexcept;

    // Kernel of 2d graphics.
    KUBE_HEADERONLY_INLINE void _kdraw_line2d_f32(
        typename f32::native_type x1,
        typename f32::native_type y1,
        typename f32::native_type x2,
        typename f32::native_type y2
    ) noexcept;

    // Kernel of 2d graphics.
    KUBE_HEADERONLY_INLINE void _kdraw_box2d_f64(
        typename f64::native_type x1,
        typename f64::native_type y1,
        typename f64::native_type x2,
        typename f64::native_type y2
    ) noexcept;

    // Kernel of 2d graphics.
    KUBE_HEADERONLY_INLINE void _kdraw_box2d_f32(
        typename f64::native_type x1,
        typename f64::native_type y1,
        typename f64::native_type x2,
        typename f64::native_type y2
    ) noexcept;

    // Kernel of 2d graphics
    KUBE_HEADERONLY_INLINE void _kdraw_line3d_f64(
        typename f64::native_type x1,
        typename f64::native_type y1,
        typename f64::native_type z1,
        typename f64::native_type x2,
        typename f64::native_type y2,
        typename f64::native_type z2
    ) noexcept;

    // Kernel of 2d graphics.
    KUBE_HEADERONLY_INLINE void _kdraw_line3d_f32(
        typename f32::native_type x1,
        typename f32::native_type y1,
        typename f32::native_type z1,
        typename f32::native_type x2,
        typename f32::native_type y2,
        typename f32::native_type z2
    ) noexcept;

    // Kernel of 2d graphics.
    KUBE_HEADERONLY_INLINE void _kdraw_box3d_f64(
        typename f64::native_type x1,
        typename f64::native_type y1,
        typename f64::native_type z1,
        typename f64::native_type x2,
        typename f64::native_type y2,
        typename f64::native_type z2
    ) noexcept;

    // Kernel of 2d graphics.
    KUBE_HEADERONLY_INLINE void _kdraw_box3d_f32(
        typename f32::native_type x1,
        typename f32::native_type y1,
        typename f32::native_type z1,
        typename f32::native_type x2,
        typename f32::native_type y2,
        typename f32::native_type z2
    ) noexcept;

    struct graphics {
        
        // Change color.
        void use_color4d(f64 r, f64 g, f64 b, f64 a) noexcept {
            return _kuse_color4d_f64(r.native, g.native, b.native, a.native);
        }

        void use_color4d(f32 r, f32 g, f32 b, f32 a) noexcept {
            return _kuse_color4d_f32(r.native, g.native, b.native, a.native);
        }

        void use_color4d(const color4d<f64> &color) noexcept {
            return use_color4d(color.r, color.g, color.b, color.a);
        }

        void use_color4d(const color4d<f32> &color) noexcept {
            return use_color4d(color.r, color.g, color.b, color.a);
        }


        void use_color3d(f64 r, f64 g, f64 b) noexcept {
            return _kuse_color3d_f64(r.native, g.native, b.native);    
        }

        void use_color3d(f32 r, f32 g, f32 b) noexcept {
            return _kuse_color3d_f32(r.native, g.native, b.native);
        }

        void use_color3d(const color3d<f64> &color) noexcept {
            return use_color3d(color.r, color.g, color.b);
        }

        void use_color3d(const color3d<f32> &color) noexcept {
            return use_color3d(color.r, color.g, color.b);
        }
        
        // Draw 2d line.
        void draw_line2d(f64 x1, f64 y1, f64 x2, f64 y2) noexcept {
            return _kdraw_line2d_f64(x1.native, y1.native, x2.native, y2.native);
        }

        void draw_line2d(f32 x1, f32 y1, f32 x2, f32 y2) noexcept {
            return _kdraw_line2d_f32(x1.native, y1.native, x2.native, y2.native);
        }

        void draw_line2d(const vec2d<f64> &v1, const vec2d<f64> &v2) noexcept {
            return draw_line2d(v1.x, v1.y, v2.x, v2.y);
        }

        void draw_line2d(const vec2d<f32> &v1, const vec2d<f32> &v2) noexcept {
            return draw_line2d(v1.x, v1.y, v2.x, v2.y);
        }

        // Draw 2d box.
        void draw_box2d(f64 x1, f64 y1, f64 x2, f64 y2) noexcept {
            return _kdraw_box2d_f64(x1.native, y1.native, x2.native, y2.native);
        }

        void draw_box2d(f32 x1, f32 y1, f32 x2, f32 y2) noexcept {
            return _kdraw_box2d_f64(x1.native, y1.native, x2.native, y2.native);
        }

        void draw_box2d(const vec2d<f64> &v1, const vec2d<f64> &v2) noexcept {
            return draw_box2d(v1.x, v1.y, v2.x, v2.y);
        }

        void draw_box2d(const vec2d<f32> &v1, const vec2d<f32> &v2) noexcept {
            return draw_box2d(v1.x, v1.y, v2.x, v2.y);
        }

        void draw_box2d(const box2d<f64> &box) noexcept {
            return draw_box2d(box.x1, box.y1, box.x2, box.y2);
        }

        void draw_box2d(const box2d<f32> &box) noexcept {
            return draw_box2d(box.x1, box.y1, box.x2, box.y2);
        }


        void draw_line3d(f64 x1, f64 y1, f64 z1, f64 x2, f64 y2, f64 z2) noexcept {
            return _kdraw_line3d_f64(x1.native, y1.native, z1.native, x2.native, y2.native, z2.native);
        }

        void draw_line3d(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2) noexcept {
            return _kdraw_line3d_f32(x1.native, y1.native, z1.native, x2.native, y2.native, z2.native);
        }

        void draw_line3d(const vec3d<f64> &v1, const vec3d<f64> &v2) noexcept {
            return draw_line3d(v1.x, v1.y, v1.z, v2.x, v2.y, v2.z);
        }

        void draw_line3d(const vec3d<f32> &v1, const vec3d<f32> &v2) noexcept {
            return draw_line3d(v1.x, v1.y, v1.z, v2.x, v2.y, v2.z);
        }

        // Draw 2d box.
        void draw_box3d(f64 x1, f64 y1, f64 z1, f64 x2, f64 y2, f64 z2) noexcept {
            return _kdraw_box3d_f64(x1.native, y1.native, z1.native, x2.native, y2.native, z2.native);
        }

        void draw_box3d(f32 x1, f32 y1, f64 z1, f32 x2, f32 y2, f64 z2) noexcept {
            return _kdraw_box3d_f64(x1.native, y1.native, z1.native, x2.native, y2.native, z2.native);
        }

        void draw_box3d(const vec3d<f64> &v1, const vec3d<f64> &v2) noexcept {
            return draw_box3d(v1.x, v1.y, v1.z, v2.x, v2.y, v2.z);
        }

        void draw_box3d(const vec3d<f32> &v1, const vec3d<f32> &v2) noexcept {
            return draw_box3d(v1.x, v1.y, v1.z, v2.x, v2.y, v2.z);
        }

        void draw_box3d(const box3d<f64> &box) noexcept {
            return draw_box3d(box.x1, box.y1, box.z1, box.x2, box.y2, box.z2);
        }

        void draw_box3d(const box3d<f32> &box) noexcept {
            return draw_box3d(box.x1, box.y1, box.z1, box.x2, box.y2, box.z2);
        }
    } ;
}

#endif