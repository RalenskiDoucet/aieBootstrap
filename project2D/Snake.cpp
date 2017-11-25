#include "Snake.h"

Snake::Snake()
{
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



