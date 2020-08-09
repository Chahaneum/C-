#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//fgetc stdin 함수 익히기
int main(void)
{
	int  num, i, j;

	char l[7];
	
	for (i = 0; i < 5; i++)
	{
		fgets(l, sizeof(l), stdin);
		printf("READ %d : %s \n", i + 1, l);
	}
	return 0;
}