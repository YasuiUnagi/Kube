#ifndef KUBE_BACKEND_HH
#define KUBE_BACKEND_HH

#include <kube/kube.hh>

// TODO
namespace kube::backend {

// TODO
typedef struct _GraphicsFactory {} *IGraphicsFactory;

// TODO
typedef struct _Graphics2D {} *IGraphics2D;

// TODO
typedef struct _Graphics3D {} *IGraphics3D;

// TODO
typedef struct _GraphicsBuffer2D {} *IGraphicsBuffer2D;

// TODO
typedef struct _GraphicsBuffer3D {} *IGraphicsBuffer3D;

// TODO
typedef struct _Container {} *IContainer;

}

#include <kube/kube.backend.graphicsfactory.hh>
#include <kube/kube.backend.graphics2d.hh>
#include <kube/kube.backend.graphics3d.hh>
#include <kube/kube.backend.container.hh>

#endif