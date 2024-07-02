/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBEKERNEL_GRAPHICS_HH
#define KUBEKERNEL_GRAPHICS_HH

#include <kube.hh>
#include <GL/gl.h>
#include <GL/glext.h>

namespace kube {

// Kernel of 2d graphics for change 4d color.
KUBE_HEADERONLY_INLINE void _kuse_color4d_f64(_kf64 r, _kf64 g, _kf64 b, _kf64 a) noexcept {
    ::glColor4d(r, g, b, a);
}

// Kernel of 2d graphics for change 4d color.
KUBE_HEADERONLY_INLINE void _kuse_color4d_f32(_kf32 r, _kf32 g, _kf32 b, _kf32 a) noexcept {
    ::glColor4f(r, g, b, a);
}

// Kernel of 2d graphics for change 4d color.
KUBE_HEADERONLY_INLINE void _kuse_color3d_f64(_kf64 r, _kf64 g, _kf64 b) noexcept {
    ::glColor3d(r, g, b);
}

// Kernel of 2d graphics for change 4d color.
KUBE_HEADERONLY_INLINE void _kuse_color3d_f32(_kf32 r, _kf32 g, _kf32 b) noexcept {
    ::glColor3f(r, g, b);
}

// Kernel of 2d graphics
KUBE_HEADERONLY_INLINE void _kdraw_line2d_f64(
    _kf64 x1, _kf64 y1,
    _kf64 x2, _kf64 y2
) noexcept {
    ::glBegin(GL_LINE);
    ::glVertex2d(x1, y1);
    ::glVertex2d(x2, y2);
    ::glEnd();
}

// Kernel of 2d graphics.
KUBE_HEADERONLY_INLINE void _kdraw_line2d_f32(
    _kf32 x1, _kf32 y1,
    _kf32 x2, _kf32 y2
) noexcept {
    ::glBegin(GL_LINE);
    ::glVertex2f(x1, y1);
    ::glVertex2f(x2, y2);
    ::glEnd();
}

// Kernel of 2d graphics.
KUBE_HEADERONLY_INLINE void _kdraw_box2d_f64(
    _kf64 x1, _kf64 y1,
    _kf64 x2, _kf64 y2
) noexcept {
    ::glRectd(x1, y1, x2, y2);
}

// Kernel of 2d graphics.
KUBE_HEADERONLY_INLINE void _kdraw_box2d_f32(
    _kf64 x1, _kf64 y1,
    _kf64 x2, _kf64 y2
) noexcept {
    ::glRectf(x1, y1, x2, y2);
}

// Kernel of 2d graphics
KUBE_HEADERONLY_INLINE void _kdraw_line3d_f64(
    _kf64 x1, _kf64 y1, _kf64 z1,
    _kf64 x2, _kf64 y2, _kf64 z2
) noexcept {
    ::glBegin(GL_LINE);
    ::glVertex2d(x1 / z1, y1 / z1);
    ::glVertex2d(x2 / z2, y2 / z2);
    ::glEnd();
}

// Kernel of 2d graphics.
KUBE_HEADERONLY_INLINE void _kdraw_line3d_f32(
    _kf32 x1, _kf32 y1, _kf32 z1,
    _kf32 x2, _kf32 y2, _kf32 z2
) noexcept {
    ::glBegin(GL_LINE);
    ::glVertex2f(x1 / z1, y1 / z1);
    ::glVertex2f(x2 / z2, y2 / z2);
    ::glEnd();
}

// Kernel of 2d graphics.
KUBE_HEADERONLY_INLINE void _kdraw_box3d_f64(
    _kf64 x1, _kf64 y1, _kf64 z1,
    _kf64 x2, _kf64 y2, _kf64 z2
) noexcept {
    
    if (x1 > x2) { std::swap(x1, x2); }
    if (y1 > y2) { std::swap(y1, y2); }
    if (z1 > z2) { std::swap(z1, z2); }

    ::glBegin(GL_LINES);
    ::glVertex3d(x1, y1, z1);
    ::glVertex3d(x2, y1, z1);
    ::glVertex3d(x2, y1, z1);
    ::glVertex3d(x2, y1, z2);
    ::glVertex3d(x2, y1, z2);
    ::glVertex3d(x1, y1, z2);
    ::glVertex3d(x1, y1, z2);
    ::glVertex3d(x1, y1, z1);
    ::glVertex3d(x1, y2, z1);
    ::glVertex3d(x2, y2, z1);
    ::glVertex3d(x2, y2, z1);
    ::glVertex3d(x2, y2, z2);
    ::glVertex3d(x2, y2, z2);
    ::glVertex3d(x1, y2, z2);
    ::glVertex3d(x1, y2, z2);
    ::glVertex3d(x1, y2, z1);
    ::glVertex3d(x1, y1, z1);
    ::glVertex3d(x1, y2, z1);
    ::glVertex3d(x2, y1, z1);
    ::glVertex3d(x2, y2, z1);
    ::glVertex3d(x2, y1, z2);
    ::glVertex3d(x2, y2, z2);
    ::glVertex3d(x1, y1, z2);
    ::glVertex3d(x1, y2, z2);
    ::glEnd();
}

// Kernel of 2d graphics.
KUBE_HEADERONLY_INLINE void _kdraw_box3d_f32(
    _kf32 x1, _kf32 y1, _kf32 z1,
    _kf32 x2, _kf32 y2, _kf32 z2
) noexcept {

    if (x1 > x2) { std::swap(x1, x2); }
    if (y1 > y2) { std::swap(y1, y2); }
    if (z1 > z2) { std::swap(z1, z2); }

    ::glBegin(GL_LINES);
    ::glVertex3f(x1, y1, z1);
    ::glVertex3f(x2, y1, z1);
    ::glVertex3f(x2, y1, z1);
    ::glVertex3f(x2, y1, z2);
    ::glVertex3f(x2, y1, z2);
    ::glVertex3f(x1, y1, z2);
    ::glVertex3f(x1, y1, z2);
    ::glVertex3f(x1, y1, z1);
    ::glVertex3f(x1, y2, z1);
    ::glVertex3f(x2, y2, z1);
    ::glVertex3f(x2, y2, z1);
    ::glVertex3f(x2, y2, z2);
    ::glVertex3f(x2, y2, z2);
    ::glVertex3f(x1, y2, z2);
    ::glVertex3f(x1, y2, z2);
    ::glVertex3f(x1, y2, z1);
    ::glVertex3f(x1, y1, z1);
    ::glVertex3f(x1, y2, z1);
    ::glVertex3f(x2, y1, z1);
    ::glVertex3f(x2, y2, z1);
    ::glVertex3f(x2, y1, z2);
    ::glVertex3f(x2, y2, z2);
    ::glVertex3f(x1, y1, z2);
    ::glVertex3f(x1, y2, z2);
    ::glEnd();
}
}

#endif