#include "enemy.hpp"

#include "olcPixelGameEngine.h"

Enemy::Enemy(olc::PixelGameEngine* pge, int yDir) : Shape(pge, x, y) {
        this->yDir = yDir;
        // this->x = x;
        // this->y = y;
}

void Enemy::move() {

}