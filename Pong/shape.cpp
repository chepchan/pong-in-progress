#include "shape.hpp"
#include "olcPixelGameEngine.h"

Shape::Shape(olc::PixelGameEngine* pge, olc::vf2d pos, olc::vf2d dir, int speed) {
    this->pge = pge;
    this->pos = pos;
    this->dir = dir;
    this->speed = speed;
}

void Shape::collide() {
    if (pos.y >= pge->ScreenHeight() || pos.y >= pge->ScreenWidth())
        pos.y *= -1; //pos.y *= -1
}