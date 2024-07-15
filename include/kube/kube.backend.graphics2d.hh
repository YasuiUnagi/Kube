#ifndef KUBE_BACKEND_GRAPHICS2D_HH
#define KUBE_BACKEND_GRAPHICS2D_HH

#include <kube/kube.hh>

// TODO
namespace kube::backend {

// TODO
KUBE_HEADERONLY_INLINE auto attachGraphicsBuffer2D(IGraphics2D g2d, IGraphicsBuffer2D gbuff2d) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto setColor3D(IGraphics2D g2d, f32 r, f32 g, f32 b) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto setColor3D(IGraphics2D g2d, f64 r, f64 g, f64 b) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto setColor4D(IGraphics2D g2d, f32 r, f32 g, f32 b, f32 a) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto setColor4D(IGraphics2D g2d, f64 r, f64 g, f64 b, f64 a) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto drawLine2D(IGraphics2D g2d, f32 x1, f32 y1, f32 x2, f32 y2) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto drawLine2D(IGraphics2D g2d, f64 x1, f64 y1, f64 x2, f64 y2) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto drawBox2D(IGraphics2D g2d, f32 x1, f32 y1, f32 x2, f32 y2) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto drawBox2D(IGraphics2D g2d, f64 x1, f64 y1, f64 x2, f64 y2) noexcept
    -> void;
}

#endif