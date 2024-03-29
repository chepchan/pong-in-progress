#pragma once

#include "../libs/olcPixelGameEngine.h"
#include "utils.hpp"

class Shape {
public:
    olc::PixelGameEngine* pge;
    olc::vf2d pos;
    olc::vf2d dir;
    int speed;

    Shape(olc::PixelGameEngine* pge, olc::vf2d pos, olc::vf2d dir, int speed);
};


