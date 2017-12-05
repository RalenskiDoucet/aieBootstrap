#pragma once
class PlayingArea
{
public:
	int mRows;//Creates a varaible for the number of rows in  the game board.
	int mCols;//Creates a varaible for the number of colmons in  the game board.
	const int mapwidth = 1280;//sets a constant measurement for the width of the game board.
	const int mapheight = 1280;//sets a constant measurement for the heigth of the game board.
	int Grid(int Cols, int Rows);//a function that assigns that the grid is made of Colmons and Rows.
	int DrawGrid();//a function that draws an ivisiable grid that is placed on the inside of the game board and sets bo
};
