#ifndef KUBE_WINDOW_HH
#define KUBE_WINDOW_HH

#include <kube.hh>

namespace kube {

    struct window {
        
        constexpr void run(window_listener &listener);
    };
}

#endif