#include "shape.hpp"
#include "olcPixelGameEngine.h"

Shape::Shape(olc::PixelGameEngine* pge, int x, int y) {
    this->pge = pge;
    this->x = x;
    this->y = y;
}

void Shape::draw() {
	pge->DrawRect(x, y, width, height, { 255, 175, 181 });
    pge->FillRect(x, y, width, height, { 255, 175, 181 });
}
