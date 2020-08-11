#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
	int xpos;//두개!
	int ypos;
}Point;//sturct point == Point과 같다.

void SP(Point* ptr1, Point* ptr2)//구조체 포인터 변수 선언 ptr1 / ptr2
{
	Point temp = *ptr1;// temp =  2.4
	*ptr1 = *ptr2;//2 .4 = 5. 7 즉(ptr1 = 5.7)
	*ptr2 = temp;// 5. 7 = 2. 4 즉(ptr2 = 2.4)
}

int main(void)
{
	Point pos1 = { 2, 4 };// 2 = xpos 4 = ypos
	Point pos2 = { 5, 7 };//5 = xpos 7 = ypos
	
	SP(&pos1, &pos2);//&가리키다(저장)

	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);//5 .7
	printf("[%d, %d]\n", pos2.xpos, pos2.ypos);//2. 4
	return 0;
}