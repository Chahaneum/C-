#define _CRT_SECURE_NO_WARNINGS//scanf보안 오류.
#include <stdio.h>

void MaxAndMin(int *arr,int size, int **maxP, int **minP)
{
	int* max;
	int* min;
	int i;

	max = min = &arr[0];//arr[0] = 1이다(입력된 경우) 즉 max = 1, min = 1, arr[0]=1이다.
	for (i = 0; i < size; i++)
	{
	
	//노트 c언어 구역 참고!
		if (*max < arr[i])//12345입력이 진행됬다면 1 < 1 / 1 < 2 / 1 < 3 / 1 < 4 / 1<5/이니 이것을 실행하고 마지막 5를 반환
		{
			max = &arr[i];//max = arr[4]=5
		}
		if (*min > arr[i])
		{
			min = &arr[i];
		}
	}

	*maxP = max;
	*minP = min;
}

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("정수를 입력 >>");
		scanf("%d", &arr[i]);
	}
	printf("arr = %d", sizeof(arr));//20임을 확인. 5x4 = 20;
	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);

	printf("최대 : %d, 최소 : %d\n", *maxPtr, *minPtr);
	return 0;
}