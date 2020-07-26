#include <stdio.h>
int Sq(int num)//call-by-value
{
		return num * num;
	
}
int Sqb(int* ptr)//call-by-reference
{
	int num = *ptr;

	*ptr = num * num;
}

int main(void)
{
	int num = 12;

	printf("num의 제곱 : %d\n", Sq(num));
	Sqb(&num);//Sqb가 num을 가리키게 한다(포인터라서..)
	printf("num의 제곱 : %d\n", num);
	return 0;
}