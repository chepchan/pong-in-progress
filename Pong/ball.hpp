#pragma once

#include "olcPixelGameEngine.h"
#include "shape.hpp"

class Ball : public Shape {
public:
    int radius;

    Ball(olc::PixelGameEngine* pge, Point pos, Point dir, int speed, int radius);

    void draw();
    void move();
    //void kill();
};