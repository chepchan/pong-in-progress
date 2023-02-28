#include "shape.hpp"
//#include "olcPixelGameEngine.h"

Shape::Shape(olc::PixelGameEngine* pge, olc::vf2d pos, olc::vf2d dir, int speed) {
    this->pge = pge;
    this->pos = pos;
    this->dir = dir;
    this->speed = speed;
}
