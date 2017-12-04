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
	int mSnake;//Creates a global varaible called mSnake.
	Snake();
	Snake(Vector2 pos);//Creates an instance for the snake to have a pos using the pos constructor from the Vector2 class.
	Vector2 mPos;//Creates an instance for the variable mPos.
	float SnakePos(Vector2 pos);//sets the postion for the snake to a float.
	int headxpos;//Sets the mX positon of the snakes head.
	int headypos;//Sets the mY position of the snakes head.
	int direction;//used in the function change direction to identfy a direction.
	// Moves snake head to new location
	void changeDirection(int Up,int Down,int Left,int Right);//A function that makes it possible for the object identified as the snake to switch directions.
	void move(int Up, int Down, int Left, int Right);//A functon that makes it possible for the object identified as the snake to move through the game board.


};
