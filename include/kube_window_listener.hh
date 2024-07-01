#ifndef KUBE_WINDOW_LISTENER_HH
#define KUBE_WINDOW_LISTENER_HH

#include <kube.hh>

namespace kube {

    struct window_listener {

        constexpr virtual void on_init()
        {
        }

        constexpr virtual void on_exit()
        {
        }

        constexpr virtual void on_maximize()
        {
        }

        constexpr virtual void on_unmaximize()
        {
        }

        constexpr virtual void on_minimize()
        {
        }

        constexpr virtual void on_unminimize()
        {
        }

        constexpr virtual void on_resize()
        {
        }

        constexpr virtual void on_update()
        {
        }

        constexpr virtual void on_draw2d(graphics2d &)
        {
        }

        constexpr virtual void on_draw3d(graphics3d &)
        {
        }
    };
}

#endif