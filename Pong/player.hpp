#pragma once

#include "olcPixelGameEngine.h"
#include "utils.hpp"
#include "shape.hpp"
#include "rectangle.hpp"

class Player : public Rectangle {
public:
    int speed = 1;

    using Rectangle::Rectangle;

    void keyboardInput_UP();
    void keyboardInput_DOWN();
    void playerMove();
    void update();
};