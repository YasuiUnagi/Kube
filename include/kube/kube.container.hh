#ifndef KUBE_CONTAINER_HH
#define KUBE_CONTAINER_HH

#include <kube/kube.hh>

// TODO
namespace kube {

// TODO
struct ContainerAdapter {

    // TODO
    virtual auto onQuit() noexcept
        -> void {}
    
    // TODO
    virtual auto onMaximized() noexcept
        -> void {}

    // TODO
    virtual auto onMinimized() noexcept
        -> void {}

    // TODO
    virtual auto onActivated() noexcept
        -> void {}
    
    // TODO
    virtual auto onUnmaximized() noexcept
        -> void {}

    // TODO
    virtual auto onUnminimized() noexcept
        -> void {}
    
    // TODO
    virtual auto onDeactivated() noexcept
        -> void {}

    // TODO
    virtual auto onUpdate(Graphics2D &) noexcept
        -> void {}
};

// TODO
struct Container final {

private:

    // TODO
    backend::IContainer iContainer = nullptr;

public:

    // TODO
    Container(Container &) = delete;
    Container(Container&&) = delete;
    Container(const Container &) = delete;
    Container(const Container&&) = delete;

    // TODO
    Container &operator=(Container &) = delete;
    Container &operator=(Container&&) = delete;
    Container &operator=(const Container &) = delete;
    Container &operator=(const Container&&) = delete;

    // TODO
    Container() = default;

    // TODO
    ~Container() { this->exitObject(); }

    // TODO
    auto asObject() const noexcept
        -> backend::IContainer
    {
        return iContainer;
    }

    // TODO
    auto initObject(u32 xpixelsize, u32 ypixelsize) noexcept
        -> void
    {
        // TODO
        if (iContainer != nullptr) { backend::deleteContainer(iContainer); }

        // TODO
        iContainer = backend::createContainer(xpixelsize, ypixelsize);
    }

    // TODO
    auto exitObject() noexcept
        -> void
    {
        // TODO
        if (iContainer != nullptr) { return; }

        // TODO
        backend::deleteContainer(iContainer);

        // TODO
        iContainer = nullptr;
    }

    // TODO
    auto execute(ContainerAdapter &adapter) noexcept
        -> void
    {
        // TODO
        if (iContainer == nullptr) { return; }

        // TODO
        backend::executeContainer(iContainer, &adapter);
    }
};

}

#endif