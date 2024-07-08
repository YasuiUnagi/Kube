#ifndef KUBE_KERNEL_GRAPHICS3D_IMPL_HH
#define KUBE_KERNEL_GRAPHICS3D_IMPL_HH

#define GL_GLEXT_PROTOTYPES
#define GL_VERSION_4_6

#include <kube/kernel_impl.hh>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>

namespace kube::kernel {

struct ActualGraphics3D : Graphics3D {

    virtual void initSession() noexcept override {
        ::glBindFramebuffer(GL_FRAMEBUFFER, dynamic_cast<ActualCanvas*>(canvas)->framebuffer);
    }

    virtual void exitSession() noexcept override {
        ::glBindFramebuffer(GL_FRAMEBUFFER, 0);
    }

    virtual void setView(
        f32 camera_x, f32 camera_y, f32 camera_z,
        f32 target_x, f32 target_y, f32 target_z,
        f32 upside_x, f32 upside_y, f32 upside_z
    ) noexcept override {
        ::gluLookAt(
            (f64)camera_x, (f64)camera_y, (f64)camera_z,
            (f64)target_x, (f64)target_y, (f64)target_z,
            (f64)upside_x, (f64)upside_y, (f64)upside_z
        );
    }

    virtual void setView(
        f64 camera_x, f64 camera_y, f64 camera_z,
        f64 target_x, f64 target_y, f64 target_z,
        f64 upside_x, f64 upside_y, f64 upside_z
    ) noexcept override {
        ::gluLookAt(
            camera_x, camera_y, camera_z,
            target_x, target_y, target_z,
            upside_x, upside_y, upside_z
        );
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

    
    virtual void drawLine3D(
        f32 x1, f32 y1, f32 z1,
        f32 x2, f32 y2, f32 z2
    ) noexcept override {
        ::glBegin(GL_LINES);
        ::glVertex3f(x1, y1, z1);
        ::glVertex3f(x2, y2, z2);
        ::glEnd();
    }

    virtual void drawLine3D(
        f64 x1, f64 y1, f64 z1,
        f64 x2, f64 y2, f64 z2
    ) noexcept override {
        ::glBegin(GL_LINES);
        ::glVertex3d(x1, y1, z1);
        ::glVertex3d(x2, y2, z2);
        ::glEnd();
    }

    virtual void drawBox3D(
        f32 x1, f32 y1, f32 z1,
        f32 x2, f32 y2, f32 z2
    ) noexcept override {
        ::glBegin(GL_LINES);
        ::glVertex3f(x1, y1, z1); ::glVertex3f(x1, y1, z2);
        ::glVertex3f(x1, y1, z2); ::glVertex3f(x2, y1, z2);
        ::glVertex3f(x2, y1, z2); ::glVertex3f(x2, y1, z1);
        ::glVertex3f(x2, y1, z1); ::glVertex3f(x1, y1, z1);
        ::glVertex3f(x1, y2, z1); ::glVertex3f(x1, y2, z2);
        ::glVertex3f(x1, y2, z2); ::glVertex3f(x2, y2, z2);
        ::glVertex3f(x2, y2, z2); ::glVertex3f(x2, y2, z1);
        ::glVertex3f(x2, y2, z1); ::glVertex3f(x1, y2, z1);
        ::glVertex3f(x1, y1, z1); ::glVertex3f(x1, y2, z1);
        ::glVertex3f(x1, y1, z2); ::glVertex3f(x1, y2, z2);
        ::glVertex3f(x2, y1, z2); ::glVertex3f(x2, y2, z2);
        ::glVertex3f(x2, y1, z1); ::glVertex3f(x2, y2, z1);
        ::glEnd();
    }

    virtual void drawBox3D(
        f64 x1, f64 y1, f64 z1,
        f64 x2, f64 y2, f64 z2
    ) noexcept override {
        ::glBegin(GL_LINES);
        ::glVertex3d(x1, y1, z1); ::glVertex3d(x1, y1, z2);
        ::glVertex3d(x1, y1, z2); ::glVertex3d(x2, y1, z2);
        ::glVertex3d(x2, y1, z2); ::glVertex3d(x2, y1, z1);
        ::glVertex3d(x2, y1, z1); ::glVertex3d(x1, y1, z1);
        ::glVertex3d(x1, y2, z1); ::glVertex3d(x1, y2, z2);
        ::glVertex3d(x1, y2, z2); ::glVertex3d(x2, y2, z2);
        ::glVertex3d(x2, y2, z2); ::glVertex3d(x2, y2, z1);
        ::glVertex3d(x2, y2, z1); ::glVertex3d(x1, y2, z1);
        ::glVertex3d(x1, y1, z1); ::glVertex3d(x1, y2, z1);
        ::glVertex3d(x1, y1, z2); ::glVertex3d(x1, y2, z2);
        ::glVertex3d(x2, y1, z2); ::glVertex3d(x2, y2, z2);
        ::glVertex3d(x2, y1, z1); ::glVertex3d(x2, y2, z1);
        ::glEnd();
    }
};

}

#endif