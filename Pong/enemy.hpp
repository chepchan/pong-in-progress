#pragma once

#include "olcPixelGameEngine.h"
#include "utils.hpp"
#include "shape.hpp"

class Enemy : public Shape {
public:

    //Enemy(olc::PixelGameEngine* pge, int yDir);

    void move();
    void follow();
    
};