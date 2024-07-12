#ifndef KUBE_VIDEO_HH
#define KUBE_VIDEO_HH

namespace kube::video {

// Graphics 2d object.
struct Graphics2D;

// Graphics 3d object.
struct Graphics3D;

// Canvas for 2d graphics object.
struct GraphicsBuffer2D;

// Canvas for 3d graphics object.
struct GraphicsBuffer3D;

// Window object.
struct Window;

}

namespace kube::video::kernel {

// Interface for 2d graphics object.
struct IGraphics2D;

// Interface for 3d graphics object.
struct IGraphics3D;

// Interface for 2d graphics object.
struct IGraphicsBuffer2D;

// Interface for 3d graphics object.
struct IGraphicsBuffer3D;

// Interface for window.
struct IWindow;

}

#include <kube/video/vector2d.hh>
#include <kube/video/vector3d.hh>
#include <kube/video/box2d.hh>
#include <kube/video/box3d.hh>
#include <kube/video/matrix2x2d.hh>
#include <kube/video/matrix3x3d.hh>
#include <kube/video/color3d.hh>
#include <kube/video/color4d.hh>
#include <kube/video/graphicsbuffer2d_kernel.hh>
#include <kube/video/graphicsbuffer2d.hh>
#include <kube/video/graphics2d_kernel.hh>
#include <kube/video/graphics2d.hh>
#include <kube/video/window_kernel.hh>
#include <kube/video/window.hh>

#endif