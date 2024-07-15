/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_GRAPHICSFACTORY_HH
#define KUBE_GRAPHICSFACTORY_HH

#include <kube/kube.hh>

namespace kube {

// TODO
struct GraphicsFactory final {

private:

    // TODO
    backend::IGraphicsFactory iFactory;

public:

    // TODO
    GraphicsFactory(backend::IGraphicsFactory iFactory) : iFactory(iFactory) {}

    // TODO
    auto asObject() const noexcept
        -> backend::IGraphicsFactory
    {
        return iFactory;
    }
};

// TODO
static const GraphicsFactory DEFAULT_GRAPHICSFACTORY {backend::getDefaultGraphicsFactory()};

}

#endif