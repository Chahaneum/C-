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
	int num1, num2, num3;
	printf("1.수를 입력>>");
	scanf_s("%d", &num1);
	printf("\n2.수를 입력>>");
	scanf_s("%d", &num2);

	printf("\n3.수를 입력>>");
	scanf_s("%d", &num3);
	printf("\n(번쨰)1 > 2 2 > 3 3 > 1수를 변경합니다.");
	rec(&num1, &num2, &num3);

	printf("\nnum1 > %d\nnum2 > %d \nnum3 > %d \n로 다 변경을 확인하시오\n", num1, num2, num3);
	return 0;
}