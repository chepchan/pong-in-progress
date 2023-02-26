#pragma once

#include "olcPixelGameEngine.h"
#include "utils.hpp"
#include "shape.hpp"

class Player : public Shape {
public:
    int speed = 1;
    int yDir;

    Player(olc::PixelGameEngine* pge, int x, int y, int yDir);

    void setDirection(int y);
    void move();
    void update();
};