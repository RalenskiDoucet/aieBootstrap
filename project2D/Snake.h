#pragma once
#include<Vector2.h>
#include<Vector3.h>
#include<Vector4.h>
#include<Matrix3.h>
#include<Matrix4.h>
#include<Matrixs2.h>
#include<iostream>
#include<math.h>
class Snake
{
public:
	int mSnake;
	Snake();
	Vector2 mPos;
	SnakePos(Vector2 pos);
	int headxpos;
	int headypos;
	int direction;
	// Moves snake head to new location
	void changeDirection(char key);
	void move(int Up, int Down, int Left, int Right);


};
