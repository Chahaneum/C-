#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int in(int, int);

int main(void)
{
	int input;

	printf("2의 n승을 구한다 n승을 입력>>");
	scanf("%d", &input);

	printf("2의 %d승은 %d이다 \n", input, in(2, input));

	return 0;
}
int in(int a, int b)//a = 2 b = input(받은거 3이면?)
{
	if (b == 0)//if 3 == 0? false.
	{
		return 1;
	}
	return a = a * in(a, --b);//2 = 2x in(2, 2)콤마연산에서 두 값을 곱하면 4에서 2곱하니까 8이 반환된다!
	//왜 곱해지냐면 in(..)포함됫기 때문이다.
}