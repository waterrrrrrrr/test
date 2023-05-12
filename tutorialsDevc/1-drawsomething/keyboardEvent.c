#include "myHeader.h"

bool isCtrl = FALSE, isP = FALSE;
void KeyboardEventProcess(int key,int event){
	switch(key)
	{
		case 'R':
			if (event == KEY_DOWN && !gameStatus)
				boardDirection *= -1;
			break;
		case 'P':
			isP = !event;
			if (isP && isCtrl)
				if (gameStatus == 0)	gameStatus = 1;
				else if (gameStatus ==1)	gameStatus =0;
			break;
		case VK_LCONTROL: case VK_RCONTROL: case VK_CONTROL:
			isCtrl = !event;
			if (isP && isCtrl)
				if (gameStatus == 0)	gameStatus = 1;
				else if (gameStatus ==1)	gameStatus =0;
			break;
	}
	display();
} 
