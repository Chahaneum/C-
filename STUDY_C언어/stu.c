#include <stdio.h>
int rec(int* ptr1, int* ptr2, int* ptr3)//1, 2, 3
{
	//수를 바꾸는 함수를 정의구역
	int num1 = *ptr1;//num1 = 1
	int num3 = *ptr3;
	*ptr1 = *ptr2;//1 = 2
	*ptr2 = num3;// 2 = 3
	*ptr3 = num1;

}
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	rec(&num1, &num2, &num3);

	printf("num1 > %d num2 > %d num3 > %d 로 다 변경을 확인하시오\n", num1, num2, num3);
	return 0;
}