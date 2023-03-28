#pragma once

#include "rectangle.hpp"

class Player : public Rectangle {
public:
    using Rectangle::Rectangle;

    void move();
};