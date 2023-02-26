#include "ball.hpp"

#include "olcPixelGameEngine.h"

Ball::Ball(olc::PixelGameEngine* pge, int x, int y, int radius) : Shape(pge, x, y) {
    this->radius = radius;
}

void Ball::draw() {
    pge->DrawCircle(x, y, radius, { 255, 175, 181 });
    pge->FillCircle(x, y, radius, { 255, 175, 181 });
}

// void Ball::move() {

// }