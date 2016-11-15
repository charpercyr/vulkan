#pragma once

#include <glm/glm.hpp>
#include "object.h"

struct light
{
	enum class lighttype {POINT, SUN, SPOT};
	lighttype type;
	glm::vec3 pos;
	glm::vec3 dir;
	glm::vec3 ambiant;
	glm::vec3 diffuse;
	glm::vec3 specular;
	glm::vec3 attenuation;
	float angle;
};

struct scene
{
	glm::mat4 view;
	glm::mat4 projection;
	std::vector<light> lights;
	std::vector<object> objects;
};