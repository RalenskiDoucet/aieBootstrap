#include"Grid.h"
#include<Vector2.h>
#include<Vector3.h>
#include<Vector4.h>
#include<Matrix3.h>
#include<Matrix4.h>
#include<Matrixs2.h>
#include<iostream>
#include<math.h>
int PlayingArea::Grid(int Cols, int Rows)
{
	PlayingArea mGrid;
	mGrid.mRows = Rows;
	mGrid.mCols = Cols;
	return Rows&&Cols;
}

int PlayingArea::DrawGrid()
{
	PlayingArea mGrid;
	mGrid.mRows = mRows;
	mGrid.mCols = mCols;
	return mGrid.mRows&&mCols;
}


