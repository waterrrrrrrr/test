#include "myHeader.h"
#include "shape.h"

Shape *head = NULL, *tail = NULL;

void DrawShape(Shape *s){
	SetPenColor(s->color);//GUI中新图不会重置笔的颜色，笔的颜色切换当且仅当使用SetPenColor，无限保留，所以画图前一定要重置
	if(s->isFilled) StartFilledRegion(1); 
	switch(s->shapeType){
		case 0://rectangle
		{
			MovePen(s->posX - s->sizeX/2.0 , s->posY - s->sizeY/2.0);//勿忘2.0！是double
			DrawLine(s->sizeX,0);
			DrawLine(0,s->sizeY);
			DrawLine(-s->sizeX,0);
			DrawLine(0,-s->sizeY);
			break;
		}
		case 1://circle
		{
			MovePen(s->posX + s->sizeX/2.0 , s->posY);//勿忘2.0！是double
			DrawArc(s->sizeX/2.0 , 0 , 360);
			break;
		}//end of switch
	
	}
	if(s->isFilled) EndFilledRegion(); 
} 

/* 原来画一个图形如下，太麻烦故封装如函数 Shape *createShape；*/ 
//	Shape s;
//	s.color = "Red";
//	s.isFilled = 1;
//	s.shapeType = 0;
//	s.posX = 1;
//	s.posY = 1;
//	s.sizeX = 1;
//	s.sizeY = 1;
//	DrawShape(&s);

Shape *createShape(bool isInLinkedList, bool isf, int spty, double px, double py, double sx, double sy, string clr){
	Shape *s = (Shape *)malloc(sizeof(Shape));
	s->isFilled = isf, s->shapeType = spty, s->posX = px, s->posY = py,
	s->sizeX = sx, s->sizeY = sy, s->color = clr;
	s->next = s->last = NULL;
	
	if(spty == 1) s->sizeY = sx; //circle时主动使sy=sx=r，防止用户误操作。 
}
