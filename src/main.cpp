#define OLC_PGE_APPLICATION
#include <iostream>

#include "../libs/olcPixelGameEngine.h"

#include "shape.hpp"
#include "player.hpp"
#include "ball.hpp"
#include "enemy.hpp"

class PONGGAME : public olc::PixelGameEngine
{
public:

	Player* player = nullptr;
	Ball* ball = nullptr;
	Enemy* enemy = nullptr;

	PONGGAME() { 
		sAppName = "Pong";
	}

	~PONGGAME() {
		delete player;
		delete ball;
		delete enemy;
	}

	bool OnUserCreate() override
	{
		const int playerSpeed = 2;
		const int ballSpeed = 2;

		const int playerWidth = 16;
		const int playerHeight = 160;

		const int radius = 8;

		olc::vf2d playerPos; playerPos.x = this->ScreenWidth() - 20.0f; playerPos.y = 170.0f;
		olc::vf2d ballPos; ballPos.x = 170.0f; ballPos.y = 170.0f;
		olc::vf2d enemyPos; enemyPos.x = 10.0f; enemyPos.y = ballPos.y;

		olc::vf2d playerDir; playerDir.x = 1.0f; playerDir.y = 1.0f;
		olc::vf2d ballDir; ballDir.x = 1.0f; ballDir.y = 1.0f;
		
		player = new Player(this, playerPos, playerDir, playerSpeed, playerWidth, playerHeight);
		ball = new Ball(this, ballPos, ballDir, ballSpeed, radius); 
		enemy = new Enemy(this, enemyPos, ballDir, playerSpeed, playerWidth, playerHeight);


		return true;
	}

	bool OnUserUpdate(float deltaTime) override
	{
		Clear(olc::Pixel(0, 0, 0));

		ball->draw();
		ball->move();
		// ball->kill();
		// if ((Ballos.x) == 0 || (ball->pos.x) == ScreenWidth()) {
		// 	ball->draw();
        // 	ball->move();    
		// }

		player->draw();
		player->move();

		enemy->draw();
		enemy->move();

		return true;
	}
};


int main()
{
	PONGGAME game;
	const int width = 1400;
    const int height = 950;
    const int pixelScale = 1;

	if (!game.Construct(width, height, pixelScale, pixelScale)) return EXIT_FAILURE;

	game.Start();

	return EXIT_SUCCESS;
}