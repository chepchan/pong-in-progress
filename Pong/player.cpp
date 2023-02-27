#include "player.hpp"

#include "olcPixelGameEngine.h"

void Player::playerMove() {
    move();
    keyboardInput_UP();
    keyboardInput_DOWN();
}

void Player::keyboardInput_UP() {
    if (pge->GetKey(olc::Key::UP).bHeld) { dir.y = -1.0f; return; }
}

void Player::keyboardInput_DOWN() {
    if (pge->GetKey(olc::Key::DOWN).bHeld) { dir.y = 1.0f; return; }
}

void Player::update() {
    playerMove();
}


