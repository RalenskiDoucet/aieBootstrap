#include "Snake.h"
#include<Vector2.h>
#include<Vector3.h>
#include<Vector4.h>
#include<Matrix3.h>
#include<Matrix4.h>
#include<Matrixs2.h>
#include<iostream>
#include<math.h>
Snake::Snake()
{
	int mSnake;
}

Snake::SnakePos(Vector2 pos)
{
	mPos.mX = pos.mX;
	mPos.mY = pos.mY;
}

void Snake::changeDirection(char key)
{
	switch (key) {
	case '8':
		if (direction != 2) direction = 0;
		break;
	case '2':
		if (direction != 3) direction = 1;
		break;
	case '4':
		if (direction != 4) direction = 2;
		break;
	case '6':
		if (direction != 5) direction = 3;
		break;
}


}

void Snake::move(int Up, int Down, int Left, int Right)
{
	Snake Cobra;
	Vector2 Postion;
	direction = Up;		direction = Down;
	direction = Left;	direction = Right;
	Cobra.mPos=mSnake.
	
}
