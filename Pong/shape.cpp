#include "shape.hpp"

Shape::Shape(olc::PixelGameEngine* pge, Point pos, Point dir, int speed) {
    this->pge = pge;
    this->pos = pos;
    this->dir = dir;
    this->speed = speed;
}
