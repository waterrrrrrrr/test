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
	double posX,posY;//存位置，使用shape的中心，但是开始画是从角上开始 
	double sizeX,sizeY;//对于圆来说，sizeX存边长，等于直径 
	string color;
	struct Shape *next,*last;//双向链表 
} Shape;//理应放到头文件中 

void DrawShape(Shape *s);
Shape *createShape(bool isInLinkedList, bool isf, int spty, double px, double py, double sx, double sy, string clr);
#endif //_SHAPE_H_ 
