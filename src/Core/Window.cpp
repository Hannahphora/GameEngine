#include "Window.h"
#include <iostream>

void Window::init() {

	if (!glfwInit()) {
		std::cerr << "Error: Failed to init glfw\n";
		abort();
	}

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	handle = glfwCreateWindow(WIDTH, HEIGHT, "Window", nullptr, nullptr);
	if (!handle) {
		std::cerr << "Error: Failed to create window\n";
		abort();
	}

}

void Window::deinit() {
	glfwTerminate();
}
