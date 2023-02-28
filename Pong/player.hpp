#pragma once

//#include "olcPixelGameEngine.h"
//#include "utils.hpp"
//#include "shape.hpp"
#include "rectangle.hpp"

class Player : public Rectangle {
public:
    using Rectangle::Rectangle;

    void move();
};