#include <stdio.h>

void A(int* ptr, int a)
{
	printf("짝수>>");
	int i;
	for (i = 0; i < a; i++)
	{
		if (ptr[i] % 2 == 0)
		{
			printf("%d ", ptr[i]);
		}
	}
}
void B(int* ptr, int a)
{
	printf("홀수>>");
	int i;
	for (i = 0; i < a; i++)
	{
		if (ptr[i] % 2 != 0)//!=연산자
		{
			printf("%d ", ptr[i]);
		}
	}
}
int main(void)
{
	int a;
	int ary[10];

	printf("\n10개의 정수를 입력>>");

	for (int i = 0; i < 10; i++)
	{
		printf("정수입력>>[%d남음]", i);
		scanf_s("%d", &ary[i]);
	}
	a = sizeof(ary) / sizeof(int);//여기가 중요 a = ary = 10 / int = 4이니 2가 반환.  a = 2;
	printf("%d", sizeof(int));
	A(ary, a);
	B(ary, a);
	return 0;
}