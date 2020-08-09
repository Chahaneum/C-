#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcmp 공부
int main(void)
{
	char str[20];
	char stra[20];
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("문자열 입력 : ");
	scanf("%s", stra);

	if (!strcmp(str, stra))
	{
		puts("두문자열은 완벽히 동일한 문장!");
	}
	else
	{
		puts("동일하지 않음");

		if (!strncmp(str, stra, 2))
		{
			puts("그치만 2글자는 맞음");
		}
	}
	
	
	
	
	
	return 0;
}