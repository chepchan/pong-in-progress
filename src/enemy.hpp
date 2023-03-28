#pragma once

#include "rectangle.hpp"

class Enemy : public Rectangle {
public:
    using Rectangle::Rectangle;

    void move();
};