/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_GRAPHICS3D_HH
#define KUBE_GRAPHICS3D_HH

#include <kube/kube.hh>

// TODO
namespace kube {

// TODO
struct GraphicsBuffer3D final {

private:

    // TODO
    backend::IGraphicsBuffer3D iBuffer3D = nullptr;

public:

    // TODO
    GraphicsBuffer3D(GraphicsBuffer3D &) = delete;
    GraphicsBuffer3D(GraphicsBuffer3D&&) = delete;
    GraphicsBuffer3D(const GraphicsBuffer3D &) = delete;
    GraphicsBuffer3D(const GraphicsBuffer3D&&) = delete;

    // TODO
    GraphicsBuffer3D &operator=(Graphics2D &) = delete;
    GraphicsBuffer3D &operator=(GraphicsBuffer3D&&) = delete;
    GraphicsBuffer3D &operator=(const GraphicsBuffer3D &) = delete;
    GraphicsBuffer3D &operator=(const GraphicsBuffer3D&&) = delete;

    // TODO
    GraphicsBuffer3D() = default;

    // TODO
    ~GraphicsBuffer3D() { this->exitObject(); }

    // TODO
    auto initObject(u32 xPixels, u32 yPixels, const GraphicsFactory &factory = DEFAULT_GRAPHICSFACTORY) noexcept
        -> void
    {
        // TODO
        if (iBuffer3D != nullptr) { backend::deleteGraphicsBuffer3D(iBuffer3D); }

        // TODO
        iBuffer3D = backend::createGraphicsBuffer3D(factory.asObject(), xPixels, yPixels);
    }

    // TODO
    auto exitObject() noexcept
        -> void
    {
        // TODO
        if (iBuffer3D == nullptr) { return; }

        // TODO
        backend::deleteGraphicsBuffer3D(iBuffer3D);

        // TODO
        iBuffer3D = nullptr;
    }

    // TODO
    auto asObject() const noexcept
        -> backend::IGraphicsBuffer3D { return iBuffer3D; }
};


// TODO
struct Graphics3D final {

private:

    // TODO
    backend::IGraphics3D i3D = nullptr;

public:

    // TODO
    Graphics3D(Graphics3D &) = delete;
    Graphics3D(Graphics3D&&) = delete;
    Graphics3D(const Graphics3D &) = delete;
    Graphics3D(const Graphics3D&&) = delete;

    // TODO
    Graphics3D &operator=(Graphics3D &) = delete;
    Graphics3D &operator=(Graphics3D&&) = delete;
    Graphics3D &operator=(const Graphics3D &) = delete;
    Graphics3D &operator=(const Graphics3D&&) = delete;

    // TODO
    Graphics3D() = default;

    // TODO
    ~Graphics3D() { exitObject(); }

    // TODO
    auto asObject() const noexcept
        -> backend::IGraphics3D
    {
        return i3D;
    }

    // TODO
    auto initObject(const GraphicsFactory &factory = DEFAULT_GRAPHICSFACTORY) noexcept
        -> void
    {
        // TODO
        if (i3D != nullptr) { backend::deleteGraphics3D(i3D); }

        // TODO
        i3D = backend::createGraphics3D(factory.asObject());
    }

    // TODO
    auto exitObject() noexcept
        -> void
    {
        // TODO
        if (i3D == nullptr) { return; }

        // TODO
        backend::deleteGraphics3D(i3D);

        // TODO
        i3D = nullptr;
    }

    // TODO
    auto attachGraphicsBuffer(GraphicsBuffer3D &buffer) const noexcept
        -> void
    {
        backend::attachGraphicsBuffer3D(i3D, buffer.asObject());
    }

    // TODO
    auto setColor3D(f32 r, f32 g, f32 b) const noexcept
        -> void
    {
        backend::setColor3D(i3D, r, g, b);
    }

    // TODO
    auto setColor3D(f64 r, f64 g, f64 b) const noexcept
        -> void
    {
        backend::setColor3D(i3D, r, g, b);
    }

    // TODO
    auto setColor3D(f32 r, f32 g, f32 b, f32 a) const noexcept
        -> void
    {
        backend::setColor4D(i3D, r, g, b, a);
    }

    // TODO
    auto setColor3D(f64 r, f64 g, f64 b, f64 a) const noexcept
        -> void
    {
        backend::setColor4D(i3D, r, g, b, a);
    }

    // TODO
    auto drawLine3D(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2) const noexcept
        -> void
    {
        backend::drawLine3D(i3D, x1, y1, z1, x2, y2, z1);
    }

    // TODO
    auto drawLine3D(f64 x1, f64 y1, f64 z1, f64 x2, f64 y2, f64 z2) const noexcept
        -> void
    {
        backend::drawLine3D(i3D, x1, y1, z1, x2, y2, z1);
    }
    
    // TODO
    auto drawBox3D(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2) const noexcept
        -> void
    {
        backend::drawBox3D(i3D, x1, y1, z1, x2, y2, z1);
    }

    // TODO
    auto drawBox3D(f64 x1, f64 y1, f64 z1, f64 x2, f64 y2, f64 z2) const noexcept
        -> void
    {
        backend::drawBox3D(i3D, x1, y1, z1, x2, y2, z1);
    }
};

}

#endif