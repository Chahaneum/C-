#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	struct employee
	{
		char a[10];//name
		char b[20];//주번
		int c;//급여
	};

	struct employee u[3];//구조체이름 쓰고 주고체 변수 선언(이름) 해야된다!
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("이름 입력 >");
		scanf("%s", u[i].a);

		printf("\n");

		printf("주민등록번호 입력 >");
		scanf("%s", u[i].b);

		printf("\n");

		printf("급여를 입력 (원) >");
		scanf("%d", &u[i].c);

		printf("[%d번 남았습니다.]\n",i+1);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d분의 정보 : 이름 [%s] 주민등록번호 [%s] 급여 [%d] \n", i + 1, u[i].a, u[i].b, u[i].c);
	}
	return 0;
	//test완료
}