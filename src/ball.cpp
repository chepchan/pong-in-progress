#include "ball.hpp"

Ball::Ball(olc::PixelGameEngine* pge, olc::vf2d pos, olc::vf2d dir, int speed, int radius) : Shape(pge, pos, dir, speed) {
    this->radius = radius;
}

void Ball::draw() {
    pge->DrawCircle((int)pos.x, (int)pos.y, radius, { 255, 175, 181 });
    pge->FillCircle((int)pos.x, (int)pos.y, radius, { 255, 175, 181 });
}

 void Ball::move() {
     pos.y += dir.y * speed;
     pos.x += dir.x * speed;
     if ((pos.y + radius) == 0.0f || (pos.y + radius) == pge->ScreenHeight()) {
         dir.y *= -1.0f;
     }
 }

//  void Ball::kill() {
//     if ((pos.x) == 0 || (pos.x) == pge->ScreenWidth()) {
//         Ball::draw();
//         Ball::move();
//     }
//  }