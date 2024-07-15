#ifndef KUBE_VIDEO_WINDOW_CC
#define KUBE_VIDEO_WINDOW_CC

#include <kube/kube.hh>

#define GL_VERSION_4_6
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glext.h>
#include <GL/wgl.h>
#include <GL/wglext.h>
#include <atomic>
#include <windows.h>

namespace kube::backend {

// TODO
struct IWindow final {
    HWND hwnd;
    u32 xpixelsize;
    u32 ypixelsize;
};

// TODO
KUBE_HEADERONLY_INLINE auto createContainer(u32 xpixelsize, u32 ypixelsize) noexcept
    -> IContainer
{
    // TODO
    WNDCLASSEXA wc {};
    wc.cbSize = sizeof(wc);
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.lpfnWndProc = DefWindowProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = "KUBE";

    // TODO
    RegisterClassExA(&wc);

    // TODO
    HWND hwnd = CreateWindowExA(
        0,
        "KUBE",
        "Kube",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        xpixelsize,
        ypixelsize,
        NULL,
        NULL,
        GetModuleHandle(NULL),
        NULL
    );

    // TODO
    if (hwnd == NULL) { return nullptr; }

    // TODO
    IContainer *window = new IContainer;
    window->hwnd = hwnd;
    window->xpixelsize = xpixelsize;
    window->ypixelsize = ypixelsize;
    
    // TODO
    return window;
}

// TODO
KUBE_HEADERONLY_INLINE auto deleteContainer(IContainer *window) noexcept
    -> void
{
    // TODO
    if (window == nullptr) { return; }

    // TODO
    DestroyWindow(window->hwnd);

    // TODO
    delete window;
}

}

#endif