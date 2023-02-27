#include "shape.hpp"
#include "rectangle.hpp"

#include "olcPixelGameEngine.h"

Rectangle::Rectangle(olc::PixelGameEngine* pge, olc::vf2d pos, olc::vf2d dir, int speed, int width, int height) : Shape (pge, pos, dir, speed) {
	this->width = width;
	this->height = height;
}

void Rectangle::draw() {
	pge->DrawRect(pos.x, pos.y, width, height, { 255, 175, 181 });
    pge->FillRect(pos.x, pos.y, width, height, { 255, 175, 181 });
}

void Rectangle::move() {
	if (((pos.y) > 0) && ((pos.y + height) < pge->ScreenHeight())) {
		pos.y += speed * dir.y;
    }
	if (pos.y == 0) {
		dir.y = 1;
	}
	if ((pos.y + height) == pge->ScreenHeight()) {
		dir.y = -1;
	}
}
