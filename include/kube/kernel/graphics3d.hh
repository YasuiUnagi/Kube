#ifndef KUBE_KERNEL_GRAPHICS3D_HH
#define KUBE_KERNEL_GRAPHICS3D_HH

#include <kube/kernel.hh>

namespace kube::kernel {

struct graphcis3d : graphics {
    
    virtual void draw_line3d(
        f32 x1, f32 y1, f32 z1,
        f32 x2, f32 y2, f32 z2
    ) noexcept
        = 0;

    virtual void draw_line3d(
        f64 x1, f64 y1, f64 z1,
        f64 x2, f64 y2, f64 z2
    ) noexcept
        = 0;

    virtual void draw_box3d(
        f32 x1, f32 y1, f32 z1,
        f32 x2, f32 y2, f32 z2
    ) noexcept
        = 0;

    virtual void draw_box3d(
        f64 x1, f64 y1, f64 z1,
        f64 x2, f64 y2, f64 z2
    ) noexcept
        = 0;
};

}

#endif