#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void R(int arr[], int len)
{
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(void)
{
	int arr[4] = { 3,2,4,1 };
	int i;

	R(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 4; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}