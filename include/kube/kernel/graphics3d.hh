#ifndef KUBE_KERNEL_GRAPHICS3D_HH
#define KUBE_KERNEL_GRAPHICS3D_HH

#include <kube/kernel.hh>

namespace kube::kernel {

struct Graphics3D {

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

    virtual void setView(
        f32 camera_x, f32 camera_y, f32 camera_z,
        f32 target_x, f32 target_y, f32 target_z,
        f32 upside_x, f32 upside_y, f32 upside_z
    ) noexcept
        = 0;

    virtual void setView(
        f64 camera_x, f64 camera_y, f64 camera_z,
        f64 target_x, f64 target_y, f64 target_z,
        f64 upside_x, f64 upside_y, f64 upside_z
    ) noexcept
        = 0;
    
    virtual void drawLine3D(
        f32 x1, f32 y1, f32 z1,
        f32 x2, f32 y2, f32 z2
    ) noexcept
        = 0;

    virtual void drawLine3D(
        f64 x1, f64 y1, f64 z1,
        f64 x2, f64 y2, f64 z2
    ) noexcept
        = 0;

    virtual void drawBox3D(
        f32 x1, f32 y1, f32 z1,
        f32 x2, f32 y2, f32 z2
    ) noexcept
        = 0;

    virtual void drawBox3D(
        f64 x1, f64 y1, f64 z1,
        f64 x2, f64 y2, f64 z2
    ) noexcept
        = 0;
};

}

#endif