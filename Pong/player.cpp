#include "player.hpp"

#include "olcPixelGameEngine.h"

void Player::move() {

    pos.y += speed * dir.y;

    if(pge->GetKey(olc::Key::UP).bHeld) { dir.y = -1.0f; return; } 
    if(pge->GetKey(olc::Key::DOWN).bHeld) { dir.y = 1.0f; return; }
}

void Player::update() {
    move();
    collide();
}


