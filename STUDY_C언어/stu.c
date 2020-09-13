#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* fp = fopen("mystroy.txt", "at");

	fputs("#즐겨먹는 움식: 짬뽕, 탕수육", fp);
	fputs("#취미:축구", fp);

	fclose(fp);
	return 0;
}
//붙여넣기 성공