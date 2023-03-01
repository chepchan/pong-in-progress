#pragma once

//#include "olcPixelGameEngine.h"
#include "rectangle.hpp"

class Enemy : public Rectangle {
public:
    using Rectangle::Rectangle;

    void move();
    //void follow(olc::vf2d enemyPos, olc::vf2d ballPos);
    
};