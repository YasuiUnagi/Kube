#ifndef KUBE_KERNEL_CANVAS_HH
#define KUBE_KERNEL_CANVAS_HH

#include <kube/kernel.hh>

namespace kube::kernel {

struct Canvas {

    virtual void init(u32 xsize, u32 ysize) noexcept
        = 0;

    virtual void exit() noexcept
        = 0;
};

}

#endif