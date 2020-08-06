#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int h[2][2] = { {1,2}, {2,3 } };
	int(*ptr)[5] = h;
	printf("%d", h[1][1]);
	return 0;
	//my self()이해 OK!

}
