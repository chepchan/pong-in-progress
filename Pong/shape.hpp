#pragma once

#include "olcPixelGameEngine.h"
#include "utils.hpp"

class Shape {
public:
    olc::PixelGameEngine* pge;

    const int width = 14;
    const int height = 80;

    int x, y;

    Shape(olc::PixelGameEngine* pge, int x, int y);

    virtual void draw();
    // void move() = 0;
};


