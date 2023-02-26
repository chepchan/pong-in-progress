#include "ball.hpp"

#include "olcPixelGameEngine.h"

Ball::Ball(olc::PixelGameEngine* pge, olc::vf2d pos, olc::vf2d dir, int speed, int radius) : Shape(pge, pos, dir, speed) {
    this->radius = radius;
}

void Ball::draw() {
    pge->DrawCircle(pos.x, pos.y, radius, { 255, 175, 181 });
    pge->FillCircle(pos.x, pos.y, radius, { 255, 175, 181 });
}

 void Ball::move() {

 }