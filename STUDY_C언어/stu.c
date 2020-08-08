#include <stdio.h>
/*
		 1 2 3 4 
		5 6 7 8
		9 10 11 12
		13 14 15 16

*/
void one(int (*arr)[4])
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void two(int (*arr)[4])
{
	int i, j, k;

	int arr2[4][4];

	for (i = 0; i < 4; i++)
	{
		k = 3;
		for (j = 0; j < 4; j++)
		{
			arr2[i][j] = arr[k][i];//chanage 구간.//이해 완료
			k--;
		}
	}
		

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
		printf("\n");


}
int Three(int (*arr)[4])
{
	int arr2[4][4];

	int i, j, k, l;
	l = 3;//전역변수형식으로 해야된다.!
	
	for (i = 0; i < 4; i++)
	{
		
		k = 3;//지역변수 형식. 
		for (j = 0; j < 4; j++)
		{
			arr2[i][j] = arr[l][k];
			k--;
		}
		l--;
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
		printf("\n");

}
int four(int (*arr)[4])
{
	int arr2[4][4];
	int i, j, k, l;
	
	k = 3;
	for (i = 0; i < 4; i++)
	{
		
		for (j = 0; j < 4; j++)
		{
			arr2[i][j] = arr[j][k];
			//arr[x][y]가 x가 1++ 되야하니까 j를 써야한다! 이해 OK!
		}
		k--;
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
		printf("\n");
}
int main(void)
{
	int arr[4][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };

	printf("원래 상태 : \n");
	one(arr);
	
	printf("90도 회전 상태 : \n");
	two(arr);
	
	printf("180도 회전 상태 : \n");
	Three(arr);

	printf("270도 회전 상태 : \n");
	four(arr);

	return 0;

	
}