#ifndef KUBE_KERNEL_GRAPHICS2D_IMPL_HH
#define KUBE_KERNEL_GRAPHICS2D_IMPL_HH

#define GL_GLEXT_PROTOTYPES
#define GL_VERSION_4_6

#include <kube/kernel_impl.hh>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>

namespace kube::kernel {

struct ActualGraphics2D : Graphics2D {

    virtual void initSession() noexcept override {
        ::glBindFramebuffer(GL_FRAMEBUFFER, dynamic_cast<ActualCanvas*>(canvas)->framebuffer);
    }

    virtual void exitSession() noexcept override {
        ::glBindFramebuffer(GL_FRAMEBUFFER, 0);
    }

    virtual void useColor3D(f32 r, f32 g, f32 b) noexcept override {
        ::glColor3f(r, g, b);
    }

    virtual void useColor3D(f64 r, f64 g, f64 b) noexcept override {
        ::glColor3d(r, g, b);
    }

    virtual void useColor4D(f32 r, f32 g, f32 b, f32 a) noexcept override {
        ::glColor4f(r, g, b, a);
    }

    virtual void useColor4D(f64 r, f64 g, f64 b, f64 a) noexcept override {
        ::glColor4d(r, g, b, a);
    }

    virtual void drawLine2D(
        f32 x1, f32 y1,
        f32 x2, f32 y2
    ) noexcept override {
        ::glBegin(GL_LINES);
        ::glVertex2f(x1, y1);
        ::glVertex2f(x2, y2);
        ::glEnd();
    }

    virtual void drawLine2D(
        f64 x1, f64 y1,
        f64 x2, f64 y2
    ) noexcept override {
        ::glBegin(GL_LINES);
        ::glVertex2d(x1, y1);
        ::glVertex2d(x2, y2);
        ::glEnd();
    }

    virtual void drawBox2D(
        f32 x1, f32 y1,
        f32 x2, f32 y2
    ) noexcept override {
        ::glRectf(x1, y1, x2, y2);
    }

    virtual void drawBox2D(
        f64 x1, f64 y1,
        f64 x2, f64 y2
    ) noexcept override {
        ::glRectd(x1, y1, x2, y2);
    }

};

}

#endif