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

Snake::Snake(Vector2 pos)
{
	mPos = pos;
}

float Snake::SnakePos(Vector2 pos)
{
	mPos.mX = pos.mX;
	mPos.mY = pos.mY;
	return mPos.mX&&mPos.mY;
}


void Snake::changeDirection(int Up, int Down, int Left, int Right)
{
	if (Up == 1)
		mPos = mPos + Vector2(0, 50);
	if (Down == 1)
		mPos = mPos + Vector2(0, -50);
	if (Left == 1)
		mPos = mPos + Vector2(-50, 0);
	if (Right == 1)
		mPos = mPos + Vector2(50, 0);
}

void Snake::move(int Up, int Down, int Left, int Right)
{


}
