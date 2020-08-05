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
			if (arr[j] < arr[j + 1])
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
	int arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("\n정수를 입력)>>");
		scanf("%d", &arr[i]);
	}

	DesSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 7; i++)
	{
		printf("내림차순으로 정렬된것 : %d \n", arr[i]);

	}
	return 0;
}