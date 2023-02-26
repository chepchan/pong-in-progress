#pragma once

#include "olcPixelGameEngine.h"
#include "utils.hpp"
#include "shape.hpp"
#include "rectangle.hpp"

class Player : public Rectangle {
public:
    int speed = 1;

    using Rectangle::Rectangle;

    //Player(olc::PixelGameEngine* pge, olc::vf2d pos, olc::vf2d dir, int speed, int width, int height);

    //void setDirection(int y);
    void move();
    void update();
};