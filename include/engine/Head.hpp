#pragma once

#include <GL/glut.h>
#include <Windows.h>
#include <ctime>
#include <vector>
#include <array>
#include <memory>

enum Direction_t
{
	UP,
	DOWN,
	LEFT,
	RIGHT
};

struct Object_t
{
	float height, width, x, y;
	GLuint texture;
};

class Object
{
public:
	virtual void Paint();
	Object_t object;
};

