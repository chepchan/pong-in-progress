#pragma once

#include "olcPixelGameEngine.h"
//#include "utils.hpp"

struct Point {
    float x = 0;
    float y = 0;
};

class Shape {
public:
    olc::PixelGameEngine* pge;
    Point pos;
    Point dir;
    int speed;

    Shape(olc::PixelGameEngine* pge, Point pos, Point dir, int speed);

    //virtual void draw() = 0;
    //virtual void move() = 0;
};


