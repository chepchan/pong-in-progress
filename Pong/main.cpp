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
		player = new Player(this, this->ScreenWidth() - 20, 10, 1);
		ball = new Ball(this, 200, 200, 8);
		return true;
	}

	bool OnUserUpdate(float deltaTime) override
	{
		Clear(olc::Pixel(0, 0, 0));

		ball->draw();

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