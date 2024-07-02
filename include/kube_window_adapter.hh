#ifndef KUBE_WINDOW_LISTENER_HH
#define KUBE_WINDOW_LISTENER_HH

#include <kube.hh>

namespace kube {

struct window_adapter {


    virtual void on_init()
    {
    }

    virtual void on_exit()
    {
    }

    virtual void on_maximize()
    {
    }

    virtual void on_unmaximize()
    {
    }

    virtual void on_minimize()
    {
    }

    virtual void on_unminimize()
    {
    }

    virtual void on_resize()
    {
    }

    virtual void on_update()
    {
    }

    virtual void on_draw(graphics &)
    {
    }
};
}

#endif