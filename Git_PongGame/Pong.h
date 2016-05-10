#ifndef Pong_h
#define Pong_h

#include "Arduino.h"
//#include "SPI.h"
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <XBOXUSB.h>
//#include <spi4teensy3.h>
#include <SPI.h>


#define TFT_RST		8
#define TFT_DC		4
#define TFT_CS		3
#define TFT_MOSI	5
#define TFT_MISO 	6
#define TFT_CLK 	7

class Enviornment
{
	public:
		Enviornment();
		void drawEnviornment();
		void inPaddle(int x, int y, int px, int py, int pw, int ph);
		Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);
		int tf;
		int paddleX = 80;
		int paddleY;
		int oldpaddleX;

		

};

class Ball: public Enviornment
{
	public:
		Ball( int x, int y, int r, int s );
		void drawBall();
		void moveBall(Adafruit_ILI9341 &tft);
		
	private:
		int radius;
		int ballX;
		int ballY;
		int oldBallX;
		int oldBallY;
		int ballDirectionY;
		int ballDirectionX;

};

class Paddle: public Enviornment
{
	public:
		Paddle();
		void drawPaddle( int y,   Adafruit_ILI9341 &tft);
		void movePaddle(int x,  Adafruit_ILI9341 &tft);

		

};

#endif