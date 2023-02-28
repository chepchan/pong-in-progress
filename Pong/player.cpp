//#include "olcPixelGameEngine.h"

#include "player.hpp"

void Player::move() {
    if (pge->GetKey(olc::Key::UP).bHeld) {
        dir.y = -1.0f;
        int offset = dir.y * speed;
        if (pos.y > 0) {
            pos.y += offset;
        }
    }
    if (pge->GetKey(olc::Key::DOWN).bHeld) {
        dir.y = 1.0f;
        int offset = dir.y * speed;
        if ((pos.y + height + offset ) < pge->ScreenHeight()) {
            pos.y += offset;
        }
    }
}



