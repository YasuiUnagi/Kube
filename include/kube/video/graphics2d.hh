#ifndef KUBE_VIDEO_GRAPHICS2D_HH
#define KUBE_VIDEO_GRAPHICS2D_HH

#include <kube.hh>

namespace kube::video {

struct Graphics2D final {

    // Handle of 2d graphics object.
    kernel::IGraphics2D *handle = nullptr;

    // Create 2d graphics object.
    auto initObject() noexcept
        -> void
    {
        // Delete Graphics object if handle is not nullptr.
        if (handle != nullptr) { kernel::deleteGraphics2D(handle); }

        // Create Graphocs object.
        handle = kernel::createGraphics2D();
    }

    // Delete 2d graphics object.
    auto exitObject() noexcept
        -> void
    {
        // Return if handle is already nullptr.
        if (handle == nullptr) { return; }

        // Delete Graphics object.
        kernel::deleteGraphics2D(handle);

        // Assign nullptr to handle.
        handle = nullptr;
    }

    // For attach 2d graphics buffer.
    auto attachGraphicsBuffer2D(GraphicsBuffer2D &buffer) const noexcept
        -> void { kernel::attachGraphicsBuffer2D(handle, buffer.handle); }

    // For detach 2d graphics buffer.
    auto detachGraphicsBuffer2D() const noexcept
        -> void { kernel::detachGraphicsBuffer2D(handle); }

    // For set color 3d.
    auto setColor3D(f32 r, f32 g, f32 b) const noexcept
        -> void { kernel::setColor3D(handle, r, g, b); }

    // For set color 3d.
    auto setColor3D(f64 r, f64 g, f64 b) const noexcept
        -> void { kernel::setColor3D(handle, r, g, b); }

    // For set color 4d.
    auto setColor3D(f32 r, f32 g, f32 b, f32 a) const noexcept
        -> void { kernel::setColor4D(handle, r, g, b, a); }

    // For set color 4d.
    auto setColor3D(f64 r, f64 g, f64 b, f64 a) const noexcept
        -> void { kernel::setColor4D(handle, r, g, b, a); }

    // For draw 2d line.
    auto drawLine2D(f32 x1, f32 y1, f32 x2, f32 y2) const noexcept
        -> void { kernel::drawLine2D(handle, x1, y1, x2, y2); }

    // For draw 2d line.
    auto drawLine2D(f64 x1, f64 y1, f64 x2, f64 y2) const noexcept
        -> void { kernel::drawLine2D(handle, x1, y1, x2, y2); }
    
    // For draw 2d box.
    auto drawBox2D(f32 x1, f32 y1, f32 x2, f32 y2) const noexcept
        -> void { kernel::drawBox2D(handle, x1, y1, x2, y2); }

    // For draw 2d box.
    auto drawBox2D(f64 x1, f64 y1, f64 x2, f64 y2) const noexcept
        -> void { kernel::drawBox2D(handle, x1, y1, x2, y2); }
};

}

#endif