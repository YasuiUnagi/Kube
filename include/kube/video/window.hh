#ifndef KUBE_VIDEO_WINDOW_HH
#define KUBE_VIDEO_WINDOW_HH

#include <kube.hh>

namespace kube::video {

struct Window final {

    // Handle of window.
    kernel::IWindow *handle;

    // For create window.
    auto initObject(u32 xpixelsize, u32 ypixelsize) noexcept
        -> void
    {
        // TODO: write comment.
        if (handle != nullptr) { kernel::deleteWindow(handle); }

        // TODO: write comment.
        handle = kernel::createWindow(xpixelsize, ypixelsize);
    }

    // For delete window.
    auto exitObject() noexcept
        -> void
    {
        // TODO: write comment.
        if (handle != nullptr) { return; }

        // TODO: write comment.
        kernel::deleteWindow(handle);

        // TODO: write comment.
        handle = nullptr;
    }

    // TODO: write comment.
    auto attachGraphics2D(Graphics2D *g2d) const noexcept
        -> void { kernel::attachGraphics2D(handle, g2d->handle); }

    // TODO: write comment.
    auto attachGraphics3D(Graphics3D *g3d) const noexcept
        -> void { kernel::attachGraphics3D(handle, nullptr); }

};

}

#endif