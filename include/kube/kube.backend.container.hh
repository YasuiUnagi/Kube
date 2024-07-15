#ifndef KUBE_BACKEND_CONTAINER_HH
#define KUBE_BACKEND_CONTAINER_HH

#include <kube/kube.hh>

// TODO
namespace kube::backend {

// TODO
KUBE_HEADERONLY_INLINE auto createContainer(u32 xpixelsize, u32 ypixelsize) noexcept
    -> IContainer;

// TODO
KUBE_HEADERONLY_INLINE auto deleteContainer(IContainer iContainer) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto executeContainer(IContainer iContainer, ContainerAdapter *adapter) noexcept
    -> void;
}

#endif