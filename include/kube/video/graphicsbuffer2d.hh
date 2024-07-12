#ifndef KUBE_VIDEO_GRAPHICSBUFFER2D_HH
#define KUBE_VIDEO_GRAPHICSBUFFER2D_HH

#include <kube/video.hh>

namespace kube::video {

struct GraphicsBuffer2D final {

    // Handle of 2d graphics buffer.
    kernel::IGraphicsBuffer2D *handle = nullptr;

    // Initialize 2d graphics buffer from pixelsizes.
    auto initObject(u32 xpixelsize, u32 ypixelsize) noexcept
        -> void
    {
        // Delete old 2d buffer if handle is not nullptr.
        if (handle != nullptr) { kernel::deleteGraphicsBuffer2D(handle); }

        // Create new 2d buffer.
        handle = kernel::createGraphicsBuffer2D(xpixelsize, ypixelsize);
    }

    auto exitObject() noexcept
        -> void
    {
        // Return if handle is already nullptr.
        if (handle == nullptr) { return; }

        // Delete 2d buffer.
        kernel::deleteGraphicsBuffer2D(handle);

        // Assign nullptr to handle.
        handle = nullptr;
    }
};

}

#endif