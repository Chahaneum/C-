#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a;
	int b;

	scanf("%d", &b);
	printf("\n");

	srand((int)time(NULL));
	for (a = 0; a < b; a++)
	{
		printf("주사위 %d번 %d \n",a + 1, rand() % 7);
	}
	return 0;
}