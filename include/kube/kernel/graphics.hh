#ifndef KUBE_KERNEL_GRAPHICS_HH
#define KUBE_KERNEL_GRAPHICS_HH

#include <kube/kernel.hh>

namespace kube::kernel {

struct graphics {

    virtual void choose_color3d(f32 r, f32 g, f32 b) noexcept
        = 0;

    virtual void choose_color3d(f64 r, f64 g, f64 b) noexcept
        = 0;

    virtual void choose_color3d(f32 r, f32 g, f32 b, f32 a) noexcept
        = 0;

    virtual void choose_color3d(f64 r, f64 g, f64 b, f64 a) noexcept
        = 0;
};

}

#endif