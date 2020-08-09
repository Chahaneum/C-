#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//fgetc stdin 함수 익히기
int main(void)
{
	char str[7];
	
	int i;

	for (i = 0; i < 10; i++)
	{
		gets(str);//이롷개 사용할 수있다.
		printf("HElss %d\n", i);
		
	}


	
	return 0;
}