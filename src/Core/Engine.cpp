#include "Engine.h"

void Engine::Run() {

	window = new Window();
	window->init();

	renderer = new Renderer();
	renderer->init(window->handle);

	while (!glfwWindowShouldClose(window->handle)) {

		glfwPollEvents();
	}

	cleanup();
}

void Engine::cleanup() {

	window->deinit();
	delete window;

	renderer->deinit();
	delete renderer;
}