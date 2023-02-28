#include "enemy.hpp"

#include "olcPixelGameEngine.h"

void Enemy::move() {
    pos.y += dir.y * speed;
    if (pos.y == 0.0f || (pos.y + height) == pge->ScreenHeight()) {
        dir.y *= -1.0f;
    }
}

void Enemy::follow() {

}