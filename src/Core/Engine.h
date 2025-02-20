#pragma once

#include <Renderer/Renderer.h>
#include <Core/Window.h>
#include <Core/Input.h>

class Engine {
public:

	void Run();

private:

	Window* window = nullptr;
	Renderer* renderer = nullptr;

	void cleanup();

};