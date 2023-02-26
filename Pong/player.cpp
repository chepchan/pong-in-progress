#include "player.hpp"

#include "olcPixelGameEngine.h"

Player::Player(olc::PixelGameEngine* pge, int x, int y, int yDir) : Shape(pge, x, y) {
        this->yDir = yDir;
        // this->x = x;
        // this->y = y;
}

void Player::setDirection(int y) {
    yDir = y;
}

void Player::move() {
    if(pge->GetKey(olc::Key::UP).bHeld)    { setDirection(-1); return; }
    if(pge->GetKey(olc::Key::DOWN).bHeld)  { setDirection(1);  return; }
}

void Player::update() {
    // draw(x, y);
    y += speed * yDir; 
    move();
}


