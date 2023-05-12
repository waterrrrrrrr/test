#ifndef _SHAPE_H
#define _SHAPE_H

/*    color:  
 *    The color is a string, which will ordinarily be one of the following predefined color names:
 *        Black, Dark Gray, Gray, Light Gray, White,
 *        Red, Yellow, Green, Cyan, Blue, Magenta
 */
typedef struct Shape{
	bool isFilled;
	int shapeType; //0:rectangle,1:circle;
	double posX,posY;//��λ�ã�ʹ��shape�����ģ����ǿ�ʼ���Ǵӽ��Ͽ�ʼ 
	double sizeX,sizeY;//����Բ��˵��sizeX��߳�������ֱ�� 
	string color;
	struct Shape *next,*last;//˫������ 
} Shape;//��Ӧ�ŵ�ͷ�ļ��� 

void DrawShape(Shape *s);
Shape *createShape(bool isInLinkedList, bool isf, int spty, double px, double py, double sx, double sy, string clr);
#endif //_SHAPE_H_ 
