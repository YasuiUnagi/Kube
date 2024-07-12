#ifndef KUBE_VIDEO_GRAPHICS2D_KERNEL_HH
#define KUBE_VIDEO_GRAPHICS2D_KERNEL_HH

#include <kube.hh>

namespace kube::video::kernel {

// For create 2d graphics object.
KUBE_HEADERONLY_INLINE auto createGraphics2D() noexcept
    -> IGraphics2D *;

// For delete 2d graphics object.
KUBE_HEADERONLY_INLINE auto deleteGraphics2D(IGraphics2D *g2d) noexcept
    -> void;

// For attach 2d buffer.
KUBE_HEADERONLY_INLINE auto attachGraphicsBuffer2D(IGraphics2D *g2d, IGraphicsBuffer2D *g2d_buff) noexcept
    -> void;

// For attach 2d buffer.
KUBE_HEADERONLY_INLINE auto detachGraphicsBuffer2D(IGraphics2D *g2d) noexcept
    -> void;

// Pick 3d color by f32 channels.
KUBE_HEADERONLY_INLINE auto setColor3D(IGraphics2D *g2d, f32 r, f32 g, f32 b) noexcept
    -> void;

// Pick 3d color by f64 channels.
KUBE_HEADERONLY_INLINE auto setColor3D(IGraphics2D *g2d, f64 r, f64 g, f64 b) noexcept
    -> void;

// Pick 4d color by f32 channels.
KUBE_HEADERONLY_INLINE auto setColor4D(IGraphics2D *g2d, f32 r, f32 g, f32 b, f32 a) noexcept
    -> void;

// Pick 4d color by f64 channels.
KUBE_HEADERONLY_INLINE auto setColor4D(IGraphics2D *g2d, f64 r, f64 g, f64 b, f64 a) noexcept
    -> void;

KUBE_HEADERONLY_INLINE auto drawLine2D(IGraphics2D *g2d, f32 x1, f32 y1, f32 x2, f32 y2) noexcept
    -> void;

KUBE_HEADERONLY_INLINE auto drawLine2D(IGraphics2D *g2d, f64 x1, f64 y1, f64 x2, f64 y2) noexcept
    -> void;

KUBE_HEADERONLY_INLINE auto drawBox2D(IGraphics2D *g2d, f32 x1, f32 y1, f32 x2, f32 y2) noexcept
    -> void;

KUBE_HEADERONLY_INLINE auto drawBox2D(IGraphics2D *g2d, f64 x1, f64 y1, f64 x2, f64 y2) noexcept
    -> void;

}

#endif