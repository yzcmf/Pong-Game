#include "Arduino.h"
#include "Pong.h"
#include "TFT.h"

Enviornment::Enviornment()
{
	
	screenWidth = screen.width();
	screenHeight = screen.height();
	
	screen.fill( 0, 0, 0 );
	
}

Ball::Ball()
{
	
	screen.fill(255, 255, 255);
	screen.rect(ballX, ballY, 5, 5);
	
}

Paddle::Paddle()
{
	
	paddleX = map( 0, 512, -512, 0, screenWidth ) - 20 / 2;
	paddleY = map( 0, 512, -512, 0, screenHeight ) - 5 / 2;
	screen.fill(255,255,255);
	screen.rect(paddleX, paddleY, 20, 5);
	
}
