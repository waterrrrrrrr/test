#ifndef _MAIN_H_
#define _MAIN_H_

#include "shape.h"

extern int gameStatus;  

extern Shape *board;
extern int boardDirection;
extern double speed;
extern int score;
//speedʹ�ú�Ƶ������Ϊȫ�ֱ�����ʹ��ǰ�����Լ����ļ��������лᱻ���õ������������ϣ��ǿ����ã� 

extern char colorlist[100][100];
extern const int colornumber;

void display() ;
//ȫ��Ҫ����д��display�����з������ĵĵطŵ���display��ʵ����ա�����ʾ 
//�����л�ͼ���½���display() 

void Main();

#endif // _MAIN_H_ 
