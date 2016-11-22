#pragma once

#include <GLFW/glfw3.h>
#include "scene.h"

class renderer
{
public:

	virtual ~renderer() = default;

	virtual void init(GLFWwindow* window) = 0;

	virtual void init_models(std::vector<model>& models) = 0;

	virtual void render(const scene& scene) = 0;
};