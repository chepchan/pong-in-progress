#pragma once

//#include "olcPixelGameEngine.h"
//#include "utils.hpp"
#include "shape.hpp"

class Rectangle:public Shape {
public:
	int width;
	int height;

	Rectangle(olc::PixelGameEngine* pge, Point pos, Point dir, int speed, int width, int height);

	void draw();
	//virtual void move() = 0;
};