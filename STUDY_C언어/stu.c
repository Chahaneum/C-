#define _CRT_SECURE_NO_WARNINGS//scanf보안 오류.
#include <stdio.h>

int DesSort(int arr[], int len)
{
	int i, j;
	int te;


	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				te = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = te;
			}
		}
	}
}
int main(void)
{
	int arr[4] = { 3,2,1,4 };
	int i;

	DesSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 4; i++)
	{
		printf(": %d ", arr[i]);

	}
	return 0;
}