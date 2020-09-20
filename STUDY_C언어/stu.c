#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define OX(a,b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int n, s;
	printf("1/2 입력");
	scanf("%d %d", &n, &s);
	printf("%d is big", OX(n, s));
	return 0;
}