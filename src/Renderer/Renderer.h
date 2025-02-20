#pragma once

#include <Core/Window.h>

#include <vulkan/vulkan.h>
#include <vma/vk_mem_alloc.h>

#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>

#include <cstdlib>
#include <iostream>

#define VK_CHECK(x)\
    do {\
        VkResult err = x;\
        if (err) {\
            std::cerr << "Vulkan error: " << string_VkResult(err) << '\n';\
            abort();\
        }\
    } while (0)

class Renderer {
public:

	size_t _frameNumber = 0;
	
	void init(GLFWwindow* window);
	void deinit();

private:

	GLFWwindow* _window = nullptr;

	void initVulkan();
	void createInstance();
	VkInstance instance;

};