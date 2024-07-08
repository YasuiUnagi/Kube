#ifndef KUBE_KERNEL_CANVAS_IMPL_HH
#define KUBE_KERNEL_CANVAS_IMPL_HH

#define GL_GLEXT_PROTOTYPES
#define GL_VERSION_4_6

#include <kube/kernel_impl.hh>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>
#include <GL/glaux.h>
#include <GL/glcorearb.h>
#include <GL/glxext.h>
#include <GL/wgl.h>
#include <GL/wglext.h>

namespace kube::kernel {

struct ActualCanvas : Canvas {

    ::GLuint framebuffer = 0;
    ::GLuint texture = 0;
    ::GLuint renderbuffer = 0;
    ::GLuint status = 0;


    virtual void init(u32 xsize, u32 ysize) noexcept override {

        if (status != 0) { this->exit(); }

        // Generate and bind the framebuffer
        ::glGenFramebuffers(1, &framebuffer);
        ::glBindFramebuffer(GL_FRAMEBUFFER, framebuffer);

        // Create the texture to render to
        ::glGenTextures(1, &texture);
        ::glBindTexture(GL_TEXTURE_2D, texture);
        ::glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, xsize, ysize, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
        ::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        ::glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        ::glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, texture, 0);

        // Create the renderbuffer for depth and stencil
        ::glGenRenderbuffers(1, &renderbuffer);
        ::glBindRenderbuffer(GL_RENDERBUFFER, renderbuffer);
        ::glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8, xsize, ysize);
        ::glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_STENCIL_ATTACHMENT, GL_RENDERBUFFER, renderbuffer);

        // Check if framebuffer is complete
        if (::glCheckFramebufferStatus(GL_FRAMEBUFFER) == GL_FRAMEBUFFER_COMPLETE) {
            this->status = 1;
        }

        // Unbind the framebuffer
        ::glBindFramebuffer(GL_FRAMEBUFFER, 0);
    }

    virtual void exit() noexcept override {
        // Delete the framebuffer, texture, and renderbuffer
        ::glDeleteFramebuffers(1, &framebuffer);
        ::glDeleteTextures(1, &texture);
        ::glDeleteRenderbuffers(1, &renderbuffer);
    }
};

}

#endif