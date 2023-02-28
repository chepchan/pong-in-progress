#define OLC_PGE_APPLICATION
#include <iostream>

#include "olcPixelGameEngine.h"

//#include "shape.hpp"
#include "player.hpp"
#include "ball.hpp"
//#include "enemy.hpp"

class PONGGAME : public olc::PixelGameEngine
{
public:

	Player* player = nullptr;
	Ball* ball = nullptr;

	PONGGAME() { 
		sAppName = "Pong";
	}

	~PONGGAME() {
		delete player;
		delete ball;
	}

	bool OnUserCreate() override
	{
		const int playerSpeed = 2;
		const int ballSpeed = 1;

		const int playerWidth = 16;
		const int playerHeight = 160;

		const int radius = 8;

		olc::vf2d playerPos;
		playerPos.x = this->ScreenWidth() - 20.0f;
		//playerPos.y = (rand() % this->ScreenHeight());
		playerPos.y = 170.0f;

		olc::vf2d playerDir;
		playerDir.x = 1.0f;
		playerDir.y = 1.0f;

		olc::vf2d ballPos;
		/*ballPos.x = (rand() % this->ScreenWidth());
		ballPos.y = (rand() % this->ScreenHeight());*/
		ballPos.x = 170.0f;
		ballPos.y = 170.0f;

		olc::vf2d ballDir;
		ballDir.x = 1.0f;
		ballDir.y = 1.0f;

		player = new Player(this, playerPos, playerDir, playerSpeed, playerWidth, playerHeight);
		ball = new Ball(this, ballPos, ballDir, ballSpeed, radius); 

		return true;
	}

	bool OnUserUpdate(float deltaTime) override
	{
		Clear(olc::Pixel(0, 0, 0));

		ball->draw();
		//ball->move();
		//ball->kill();

		player->draw();
		player->move();

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