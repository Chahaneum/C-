#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	/*
	
	*/

	char text1[20];
	char text2[20];
	char inset[20];

	printf("전화번호 / 이름 입력:"); scanf("%s %s", text1, text2);
	int i;  scanf("%d", &i);
	if (i == 1)
	{


		printf("전화번호 찾기\n이름:"); scanf("%s", inset);

		if (!strcmp(inset, text2))
		{
			printf("%s의 전화번호 : %s\n", inset, text1);
		}

		else
		{
			puts("Error");
		}
	}

	


		char inset2[20];

		printf("이름 찾기\n전화번호:"); scanf("%s", inset2);

		if (!strcmp(inset2, text1))
		{
			printf("전화번호 %s의 이름 : %s\n", inset2, text2);
		}



		else
		{
			puts("Error");
		}
	

	return 0;
}
