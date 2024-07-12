#ifndef KUBE_VIDEO_GRAPHICSBUFFER2D_KERNEL_HH
#define KUBE_VIDEO_GRAPHICSBUFFER2D_KERNEL_HH

#include <kube/video.hh>

namespace kube::video::kernel {

// Interface object of 2D Graphics-Buffer.
struct IGraphicsBuffer2D;

// Create Interface object of 2D Graphics-Buffer.
KUBE_HEADERONLY_INLINE auto createGraphicsBuffer2D(u32 xpixelsize, u32 ypixelsize) noexcept
    -> IGraphicsBuffer2D *;

// Delete Interface object of 2D Graphics-Buffer.
KUBE_HEADERONLY_INLINE auto deleteGraphicsBuffer2D(IGraphicsBuffer2D *gbf2d) noexcept
    -> void;

}

#endif