/*
 * Copyright (c) 2024 YasuiUnagi
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * You may use this software only at your own risk.
 *
 * For questions about this software, please contact YasuiUnagi at
 * yasuiunagi276951438@gmail.com
 */

#ifndef KUBE_GRAPHICSFACTORY_CC
#define KUBE_GRAPHICSFACTORY_CC

#include <kube/kube.hh>

#define VK_USE_PLATFORM_WIN32_KHR
#include <vulkan/vulkan.h>
#include <vulkan/vulkan_win32.h>


namespace kube::video {

struct GraphicsFactory {

    backend::IGraphicsFactory *device;
};

}

namespace kube::video::backend {

// TODO
struct IGraphicsFactory {

    VkDevice device;
    VkQueue graphicsQueue;
    VkQueue computeQueue;
    VkQueue transferQueue;
};

// TODO
const char *instanceExtensions[] {
    VK_KHR_SURFACE_EXTENSION_NAME,
    VK_KHR_WIN32_SURFACE_EXTENSION_NAME
};

// TODO
const char *deviceExtensions[] {
    VK_KHR_SWAPCHAIN_EXTENSION_NAME
};

// TODO
KUBE_HEADERONLY_INLINE auto createGraphicsDevice()
    -> IGraphicsFactory *
{
    // TODO
    VkApplicationInfo appInfo {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "KUBE";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "No Engine";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_0;

    // TODO
    VkInstanceCreateInfo createInfo {};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    createInfo.enabledExtensionCount = sizeof(instanceExtensions)/sizeof(*instanceExtensions);
    createInfo.ppEnabledExtensionNames = instanceExtensions;

    // TODO
    VkInstance instance;

    // TODO: Exception
    if (vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS) {
        // TODO
        return nullptr;
    }

    // TODO
    uint32_t deviceCount;
    
    // TODO: Exception
    if (vkEnumeratePhysicalDevices(instance, &deviceCount, nullptr) != VK_SUCCESS) {
        // TODO
        return nullptr;
    }

    // TODO: Exception
    if (deviceCount == 0) {
        // TODO
        return nullptr;
    }

    // TODO
    VkPhysicalDevice *physicalDevices = new VkPhysicalDevice[deviceCount];
    
    // TODO
    if (vkEnumeratePhysicalDevices(instance, &deviceCount, physicalDevices) != VK_SUCCESS) {
        // TODO
        delete[] physicalDevices;
        // TODO
        return nullptr;
    }

    // TODO
    VkPhysicalDevice physicalDevice;

    // TODO
    for (uint32_t i {0}; i < deviceCount; i++) {

        // TODO
        physicalDevice = physicalDevices[i];

        // TODO
        VkPhysicalDeviceProperties deviceProperties;
        vkGetPhysicalDeviceProperties(physicalDevice, &deviceProperties);

        // TODO
        VkPhysicalDeviceFeatures deviceFeatures;
        vkGetPhysicalDeviceFeatures(physicalDevice, &deviceFeatures);

        // TODO
        if (true) { break; }

        // TODO
        physicalDevice = VK_NULL_HANDLE;
    }

    // TODO
    delete[] physicalDevices;

    // TODO: Exception
    if (physicalDevice == VK_NULL_HANDLE) {
        // TODO
        return nullptr;
    }

    // TODO
    uint32_t queueFamilyCount;

    // TODO
    vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, &queueFamilyCount, nullptr);

    // TODO: Exception
    if (queueFamilyCount == 0) {
        // TODO
        return nullptr;
    }

    // TODO
    VkQueueFamilyProperties *queueFamilyPropertiesList = new VkQueueFamilyProperties[queueFamilyCount];

    // TODO
    vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, &queueFamilyCount, queueFamilyPropertiesList);

    // TODO
    VkQueueFamilyProperties *queueFamilyProperties = VK_NULL_HANDLE;

    // TODO
    uint32_t queueFamilyIndex = 0;

    // TODO
    for (; queueFamilyIndex < queueFamilyCount ; queueFamilyIndex++) {

        // TODO
        queueFamilyProperties = &queueFamilyPropertiesList[queueFamilyIndex];

        // TODO
        if (true) { break; }

        // TODO
        queueFamilyProperties = VK_NULL_HANDLE;
    }

    // TODO
    delete[] queueFamilyPropertiesList;

    // TODO: Exception
    if (queueFamilyProperties == VK_NULL_HANDLE) {
        // TODO
        return nullptr;
    }

    // TODO
    f32 priority {1.0F};

    // TODO
    VkDeviceQueueCreateInfo queueCreateInfo {};
    queueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queueCreateInfo.queueFamilyIndex = queueFamilyIndex;
    queueCreateInfo.queueCount = 1;
    queueCreateInfo.pQueuePriorities = &priority;

    // TODO
    VkDeviceCreateInfo deviceCreateInfo {};
    deviceCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    deviceCreateInfo.queueCreateInfoCount = 1;
    deviceCreateInfo.pQueueCreateInfos = &queueCreateInfo;
    deviceCreateInfo.enabledExtensionCount = sizeof(deviceExtensions)/sizeof(*deviceExtensions);
    deviceCreateInfo.ppEnabledExtensionNames = deviceExtensions;

    // TODO
    VkDevice device;

    // TODO: Exception
    if (vkCreateDevice(physicalDevice, &deviceCreateInfo, nullptr, &device) != VK_SUCCESS) {
        // TODO
        return nullptr;
    }

    // TODO
    VkQueue graphicsQueue = VK_NULL_HANDLE;
    vkGetDeviceQueue(device, queueFamilyIndex, 0, &graphicsQueue);

    // TODO
    VkQueue computeQueue = VK_NULL_HANDLE;
    vkGetDeviceQueue(device, queueFamilyIndex, 0, &computeQueue);

    // TODO
    VkQueue transferQueue = VK_NULL_HANDLE;
    vkGetDeviceQueue(device, queueFamilyIndex, 0, &transferQueue);

    // TODO
    IGraphicsFactory *factory = new IGraphicsFactory;
    factory->device = device;
    factory->graphicsQueue = graphicsQueue;
    factory->computeQueue = computeQueue;
    factory->transferQueue = transferQueue;

    // TODO
    return factory;
}

}

#endif