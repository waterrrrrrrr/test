/*
typedef void (*TimerEventCallback) (int timerID); 
�������������������������������� 
//����ָ�룬����ֵ������void�������б���int��ָ��ú�����ָ�����TimerEventCallback
//����ָ��ĺô������ڵ�����������ͬ���Ϳ���ʹ��ָ���ݵ�ʹ�ö��ֲ�ͬ����
//�ص���������һ��ͨ��ָ�뺯�����õĺ������佫����ָ����Ϊһ�����������ݸ���һ��������
�ص�����callback�������func_sum����ôʵ�ֵģ�ֻ��Ҫȥ���ü��ɡ�
�����ĺô����ǣ�����Ժ����ͺ������Ż���������д�˸�func_sum2������ʵ�֣�����ֻ��Ҫ�ڵ��ûص������ĵط�������ָ��ָ��func_sum2���ɣ�������ȥ�޸�callback�����ڲ���
��������������������������������

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
	board->posX += 0.5 * boardDirection; //ȷʵû�б����壬�����ʱ��timer.c����timer.o��Ҫô�Ѳ��������Ҫô����ŵ�ܹ��ҵ��� 
	if(board->posX + board->sizeX / 2 >= 6)
		boardDirection = -1;
	if(board->posX - board->sizeX / 2 <= 0)
		boardDirection = 1;
		
	/* part2:speed&score */ 
	if (speed < 2)	speed += 0.0001 * (rand() % 10);
	score += rand() % 10;
	
	//���ϲ�����change���·���display()��draw��ֻ���м�ֵ��ý�� 
	
	display();
}
