#pragma once
class Snake
{
public:
	Snake();
	float mX;
	float mY;
	int headxpos;
	int headypos;
	int direction;
	// Moves snake head to new location
	void move(int mX, int mY);
	void changeDirection(char key);


};
