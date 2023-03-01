//#include "olcPixelGameEngine.h"

#include "shape.hpp"
#include "rectangle.hpp"

Rectangle::Rectangle(olc::PixelGameEngine* pge, Point pos, Point dir, int speed, int width, int height) : Shape (pge, pos, dir, speed) {
	this->width = width;
	this->height = height;
}

void Rectangle::draw() {
	pge->DrawRect((int)pos.x, (int)pos.y, width, height, { 255, 175, 181 });
	pge->FillRect((int)pos.x, (int)pos.y, width, height, { 255, 175, 181 });
}
