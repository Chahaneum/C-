#include <stdio.h>

int main(void)
{
	int N[3][9];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			N[i][j] = (i + 2) * (j + 1);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%10d", N[i][j]);//%xd = 보여지는 값의 떨어진 값 %7d는 왼쪽부터 스페이즈바 7번한 것의 있다.
			printf("\n");
		}
	}
	return 0;
}
