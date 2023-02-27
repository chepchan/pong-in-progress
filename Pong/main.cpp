#define OLC_PGE_APPLICATION
#include <iostream>

#include "olcPixelGameEngine.h"

#include "shape.hpp"
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
		const int playerSpeed = 1;
		const int ballSpeed = 1;

		const int playerWidth = 18;
		const int playerHeight = 80;

		const int radius = 8;

		olc::vf2d playerPos;
		playerPos.x = (float)(this->ScreenWidth() - 20);
		playerPos.y = 20.0f;              //nz kvo se sluchva, spawnva se na greshnoto mqsto
		//playerPos.y = (float)(this->ScreenHeight() - 20);

		olc::vf2d playerDir;
		playerDir.x = 1.0f;
		playerDir.y = 1.0f;

		olc::vf2d ballPos;
		ballPos.x = 200.0f;
		ballPos.y = 200.0f;

		olc::vf2d ballDir;
		ballDir.x = 1;
		ballDir.y = 1;

		player = new Player(this, playerPos, playerDir, playerSpeed, playerWidth, playerHeight);
		ball = new Ball(this, ballPos, ballDir, ballSpeed, radius); 

		return true;
	}

	bool OnUserUpdate(float deltaTime) override
	{
		Clear(olc::Pixel(0, 0, 0));

		ball->draw();
		//ball->move();

		player->draw();
		player->update();

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