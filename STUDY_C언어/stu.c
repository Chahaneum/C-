#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	FILE* fp = fopen("mystroy.txt", "rt");

	while (fgets(str, sizeof(str), fp))
	{
		printf(str);
	}

	fclose(fp);
	return 0;
}
//화면 출력성공