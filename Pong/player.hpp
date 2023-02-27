#pragma once

#include "olcPixelGameEngine.h"
#include "utils.hpp"
#include "shape.hpp"
#include "rectangle.hpp"

class Player : public Rectangle {
public:
    int speed = 2;

    using Rectangle::Rectangle;

    void move();
};