#ifndef KUBE_KERNEL_GRAPHICS2D_HH
#define KUBE_KERNEL_GRAPHICS2D_HH

#include <kube/kernel.hh>

namespace kube::kernel {

struct graphcis2d : graphics {

    virtual void draw_line2d(
        f32 x1, f32 y1,
        f32 x2, f32 y2
    ) noexcept
        = 0;

    virtual void draw_line2d(
        f64 x1, f64 y1,
        f64 x2, f64 y2
    ) noexcept
        = 0;

    virtual void draw_box2d(
        f32 x1, f32 y1,
        f32 x2, f32 y2
    ) noexcept
        = 0;

    virtual void draw_box2d(
        f64 x1, f64 y1,
        f64 x2, f64 y2
    ) noexcept
        = 0;
};

}

#endif