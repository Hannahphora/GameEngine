#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class Window {
public:

	const uint32_t WIDTH = 800;
	const uint32_t HEIGHT = 600;

	void init();
	void deinit();

	GLFWwindow* handle = nullptr;

private:

};