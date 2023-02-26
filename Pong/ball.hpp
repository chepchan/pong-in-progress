#pragma once

#include "olcPixelGameEngine.h"
#include "shape.hpp"
#include "utils.hpp"
class Ball : public Shape {
public:
    //olc::PixelGameEngine* pge;
    int radius;

    Ball(olc::PixelGameEngine* pge, int x, int y, int radius);

    void draw();
    // void move();
};