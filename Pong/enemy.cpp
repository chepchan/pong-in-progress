#include "enemy.hpp"

void Enemy::move() {
    pos.y += dir.y * speed;
    if (pos.y == 0.0f || (pos.y + height) == pge->ScreenHeight()) {
        dir.y *= -1.0f;
    }

    //if (ballY > 0.0f && ballY + height < pge->ScreenHeight()) {
    //    pos.y = ballY;
    //}
}

