/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_GRAPHICS2D_HH
#define KUBE_GRAPHICS2D_HH

#include <kube/kube.hh>

// TODO
namespace kube {

// TODO
struct GraphicsBuffer2D final {

private:

    // TODO
    backend::IGraphicsBuffer2D iBuffer2D = nullptr;

public:

    // TODO
    GraphicsBuffer2D(GraphicsBuffer2D &) = delete;
    GraphicsBuffer2D(GraphicsBuffer2D&&) = delete;
    GraphicsBuffer2D(const GraphicsBuffer2D &) = delete;
    GraphicsBuffer2D(const GraphicsBuffer2D&&) = delete;

    // TODO
    GraphicsBuffer2D &operator=(Graphics2D &) = delete;
    GraphicsBuffer2D &operator=(GraphicsBuffer2D&&) = delete;
    GraphicsBuffer2D &operator=(const GraphicsBuffer2D &) = delete;
    GraphicsBuffer2D &operator=(const GraphicsBuffer2D&&) = delete;

    // TODO
    GraphicsBuffer2D() = default;

    // TODO
    ~GraphicsBuffer2D() { exitObject(); }

    // TODO
    auto asObject() const noexcept
        -> backend::IGraphicsBuffer2D
    {
        return iBuffer2D;
    }

    // TODO
    auto initObject(u32 xPixels, u32 yPixels, const GraphicsFactory &factory = DEFAULT_GRAPHICSFACTORY) noexcept
        -> void
    {
        // TODO
        if (iBuffer2D != nullptr) { backend::deleteGraphicsBuffer2D(iBuffer2D); }

        // TODO
        iBuffer2D = backend::createGraphicsBuffer2D(factory.asObject(), xPixels, yPixels);
    }

    // TODO
    auto exitObject() noexcept
        -> void
    {
        // TODO
        if (iBuffer2D == nullptr) { return; }

        // TODO
        backend::deleteGraphicsBuffer2D(iBuffer2D);

        // TODO
        iBuffer2D = nullptr;
    }
};

// TODO
struct Graphics2D final {

private:

    // TODO
    backend::IGraphics2D i2D = nullptr;

public:

    // TODO
    Graphics2D(Graphics2D &) = delete;
    Graphics2D(Graphics2D&&) = delete;
    Graphics2D(const Graphics2D &) = delete;
    Graphics2D(const Graphics2D&&) = delete;

    // TODO
    Graphics2D &operator=(Graphics2D &) = delete;
    Graphics2D &operator=(Graphics2D&&) = delete;
    Graphics2D &operator=(const Graphics2D &) = delete;
    Graphics2D &operator=(const Graphics2D&&) = delete;

    // TODO
    Graphics2D() = default;

    // TODO
    ~Graphics2D() { this->exitObject(); }

    // TODO
    auto asObject() const noexcept
        -> backend::IGraphics2D
    {
        return i2D;
    }

    // TODO
    auto initObject(const GraphicsFactory &factory) noexcept
        -> void
    {
        // TODO
        if (i2D != nullptr) { backend::deleteGraphics2D(i2D); }

        // TODO
        i2D = backend::createGraphics2D(factory.asObject());
    }

    // TODO
    auto exitObject() noexcept
        -> void
    {
        // TODO
        if (i2D == nullptr) { return; }

        // TODO
        backend::deleteGraphics2D(i2D);

        // TODO
        i2D = nullptr;
    }

    // TODO
    auto attachGraphicsBuffer2D(GraphicsBuffer2D &buffer) const noexcept
        -> void
    {
        backend::attachGraphicsBuffer2D(i2D, buffer.asObject());
    }

    // TODO
    auto setColor3D(f32 r, f32 g, f32 b) const noexcept
        -> void
    {
        backend::setColor3D(i2D, r, g, b);
    }

    // TODO
    auto setColor3D(f64 r, f64 g, f64 b) const noexcept
        -> void
    {
        backend::setColor3D(i2D, r, g, b);
    }

    // TODO
    auto setColor3D(f32 r, f32 g, f32 b, f32 a) const noexcept
        -> void
    {
        backend::setColor4D(i2D, r, g, b, a);
    }

    // TODO
    auto setColor3D(f64 r, f64 g, f64 b, f64 a) const noexcept
        -> void
    {
        backend::setColor4D(i2D, r, g, b, a);
    }

    // TODO
    auto drawLine2D(f32 x1, f32 y1, f32 x2, f32 y2) const noexcept
        -> void
    {
        backend::drawLine2D(i2D, x1, y1, x2, y2);
    }

    // TODO
    auto drawLine2D(f64 x1, f64 y1, f64 x2, f64 y2) const noexcept
        -> void
    {
        backend::drawLine2D(i2D, x1, y1, x2, y2);
    }
    
    // TODO
    auto drawBox2D(f32 x1, f32 y1, f32 x2, f32 y2) const noexcept
        -> void
    {
        backend::drawBox2D(i2D, x1, y1, x2, y2);
    }

    // TODO
    auto drawBox2D(f64 x1, f64 y1, f64 x2, f64 y2) const noexcept
        -> void
    {
        backend::drawBox2D(i2D, x1, y1, x2, y2);
    }
};

}

#endif