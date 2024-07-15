/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_BACKEND_GRAPHICSFACTORY_HH
#define KUBE_BACKEND_GRAPHICSFACTORY_HH

#include <kube/kube.hh>

namespace kube::backend {

// TODO
KUBE_HEADERONLY_INLINE auto getGraphicsFactoryList(u32 *count) noexcept
    -> IGraphicsFactory *;

// TODO
KUBE_HEADERONLY_INLINE auto getDefaultGraphicsFactory() noexcept
    -> IGraphicsFactory;

// TODO
KUBE_HEADERONLY_INLINE auto createGraphics2D(IGraphicsFactory) noexcept
    -> IGraphics2D;

// TODO
KUBE_HEADERONLY_INLINE auto createGraphics3D(IGraphicsFactory) noexcept
    -> IGraphics3D;

// TODO
KUBE_HEADERONLY_INLINE auto createGraphicsBuffer2D(IGraphicsFactory, u32, u32) noexcept
    -> IGraphicsBuffer2D;

// TODO
KUBE_HEADERONLY_INLINE auto createGraphicsBuffer3D(IGraphicsFactory, u32, u32) noexcept
    -> IGraphicsBuffer3D;

// TODO
KUBE_HEADERONLY_INLINE auto deleteGraphics2D(IGraphics2D) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto deleteGraphics3D(IGraphics3D) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto deleteGraphicsBuffer2D(IGraphicsBuffer2D) noexcept
    -> void;

// TODO
KUBE_HEADERONLY_INLINE auto deleteGraphicsBuffer3D(IGraphicsBuffer3D) noexcept
    -> void;

}

#endif