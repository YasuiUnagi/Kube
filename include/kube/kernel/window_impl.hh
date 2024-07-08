#ifndef KUBEKERNEL_WINDOW_IMPL_HH
#define KUBEKERNEL_WINDOW_IMPL_HH

#include <kube/kernel.hh>
#include <windows.h>
#include <type_traits>
#include <atomic>

namespace kubekernel {

    auto window_draw(void *) noexcept
        -> void {}

    auto window_show(void *) noexcept
        -> void {}
}

#endif