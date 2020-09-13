#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main_00(void)
{
	char n[100];
	FILE* fp = fopen("human.txt", "rt");

	while (fgets(n, sizeof(n), fp) != NULL)//전체 읽기.
	{
		printf(n);
	}
	fclose(fp);//OK!
	return 0;
}