#ifndef KUBE_VIDEO_WINDOW_KERNEL_HH
#define KUBE_VIDEO_WINDOW_KERNEL_HH

#include <kube.hh>

namespace kube::video::kernel {

// For create window.
KUBE_HEADERONLY_INLINE auto createWindow(u32 xpixelsize, u32 ypixelsize) noexcept
    -> IWindow *;

// Dor delete window.
KUBE_HEADERONLY_INLINE auto deleteWindow(IWindow *handle) noexcept
    -> void;

// For attach 2d graphics object.
KUBE_HEADERONLY_INLINE auto attachGraphics2D(IWindow *handle, IGraphics2D *g2d) noexcept
    -> void;

// For attach 3d graphics object.
KUBE_HEADERONLY_INLINE auto attachGraphics3D(IWindow *handle, IGraphics3D *g3d) noexcept
    -> void;
}

#endif