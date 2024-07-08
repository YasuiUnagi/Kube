#ifndef KUBE_KERNEL_GRAPHICS2D_HH
#define KUBE_KERNEL_GRAPHICS2D_HH

#include <kube/kernel.hh>

namespace kube::kernel {

struct Graphics2D {

    Canvas *canvas;


    virtual void initSession() noexcept
        = 0;

    virtual void exitSession() noexcept
        = 0;

    virtual void useColor3D(f32 r, f32 g, f32 b) noexcept
        = 0;

    virtual void useColor3D(f64 r, f64 g, f64 b) noexcept
        = 0;

    virtual void useColor4D(f32 r, f32 g, f32 b, f32 a) noexcept
        = 0;

    virtual void useColor4D(f64 r, f64 g, f64 b, f64 a) noexcept
        = 0;

    virtual void drawLine2D(
        f32 x1, f32 y1,
        f32 x2, f32 y2
    ) noexcept
        = 0;

    virtual void drawLine2D(
        f64 x1, f64 y1,
        f64 x2, f64 y2
    ) noexcept
        = 0;

    virtual void drawBox2D(
        f32 x1, f32 y1,
        f32 x2, f32 y2
    ) noexcept
        = 0;

    virtual void drawBox2D(
        f64 x1, f64 y1,
        f64 x2, f64 y2
    ) noexcept
        = 0;
};

}

#endif