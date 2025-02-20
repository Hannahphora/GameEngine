#include "Engine.h"

void Engine::Run() {

	Window window;
	window.init();

	Renderer renderer;
	renderer.init(window.handle);

	while (!glfwWindowShouldClose(window.handle)) {



		glfwPollEvents();
	}

	cleanup();
}

void Engine::cleanup() {
	window->deinit();
	renderer->deinit();
}