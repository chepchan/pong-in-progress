#include "enemy.hpp"

#include "olcPixelGameEngine.h"

void Enemy::move() {
    pos.y += dir.y * speed;
    if (pos.y == 0.0f || (pos.y + height) == pge->ScreenHeight()) {
        dir.y *= -1.0f;
    }
}

//void Enemy::follow(olc::vf2d enemyPos, olc::vf2d ballPos) {
//    enemyPos.y = ballPos.y;
//
//    enemyPos.y += dir.y * speed;
//    if (enemyPos.y == 0.0f || (enemyPos.y + height) == pge->ScreenHeight()) {
//        dir.y *= -1.0f;
//    }
//}