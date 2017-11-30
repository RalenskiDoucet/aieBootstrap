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
	Snake();
	Vector2 mPos;
	Snake(Vector2 pos);
	int headxpos;
	int headypos;
	int direction;
	// Moves snake head to new location
	void changeDirection(char key);


};
