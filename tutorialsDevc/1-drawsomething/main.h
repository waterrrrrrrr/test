#ifndef _MAIN_H_
#define _MAIN_H_

#include "shape.h"

extern int gameStatus;  

extern Shape *board;
extern int boardDirection;
extern double speed;
extern int score;
//speed使用很频繁，设为全局变量；使用前先问自己在哪几个函数中会被调用到，若两个以上，那可以用； 

extern char colorlist[100][100];
extern const int colornumber;

void display() ;
//全部要画的写到display，所有发生更改的地放调用display，实现清空、再显示 
//把所有画图的事交给display() 

void Main();

#endif // _MAIN_H_ 
