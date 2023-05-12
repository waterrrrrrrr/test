/*
typedef void (*TimerEventCallback) (int timerID); 
———————————————— 
//函数指针，返回值类型是void，参数列表是int，指向该函数的指针叫做TimerEventCallback
//函数指针的好处就在于当参数类型相同，就可以使用指针便捷地使用多种不同函数
//回调函数就是一个通过指针函数调用的函数。其将函数指针作为一个参数，传递给另一个函数。
回调函数callback无需关心func_sum是怎么实现的，只需要去调用即可。
这样的好处就是，如果以后对求和函数有优化，比如新写了个func_sum2函数的实现，我们只需要在调用回调函数的地方将函数指针指向func_sum2即可，而无需去修改callback函数内部。
————————————————

void registerTimerEvent(TimerEventCallback callback);
void startTimer(int id, int timeinterval);
*/

#include "myHeader.h"

/* 4 - timer */ 
void mytimer(int timerID)
{
	if(timerID) return;
	if(gameStatus) return; /* 6 */ 
	
	/* part1:board */ 
	board->posX += 0.5 * boardDirection; //确实没有被定义，编译的时候timer.c产生timer.o，要么把参数定义好要么给承诺能够找到它 
	if(board->posX + board->sizeX / 2 >= 6)
		boardDirection = -1;
	if(board->posX - board->sizeX / 2 <= 0)
		boardDirection = 1;
		
	/* part2:speed&score */ 
	if (speed < 2)	speed += 0.0001 * (rand() % 10);
	score += rand() % 10;
	
	//以上部分是change，下方再display()中draw，只有中间值做媒介 
	
	display();
}
