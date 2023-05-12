#include "myHeader.h"

void MouseEventProcess (int x, int y, int button, int event){
	if(event == BUTTON_DOWN && ScaleYInches(y)>=3 && ScaleYInches(y)<=8 && button == LEFT_BUTTON){
		createShape(TRUE, rand()%2, 1, ScaleXInches(x) , ScaleYInches(y) , rand()%10/30.0+0.2,0,colorlist[rand()%colornumber]);
	}
	display();
} 
