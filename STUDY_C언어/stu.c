#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct studout
{
	char name[10];//학생이름
	char humannumber[20];//학생 번호
	char school[20];//학교이름
	char majir[20];//전공선택
	int year;//학년

}S;

void SS(S* ptr)
{
	printf("학년 : %d\n", ptr->year);
}

int main(void)
{
	//int num = 0;

	S arr[10];

	int i;

	//puts("입력할 학생의 수많큼 입력>>", stdout); scanf("%d", &num);

	for (i = 0; i < 3; i++)
	{
		printf("%d번 학생을 입력합니다.\n", i+1);
		fputs("이름 :", stdout); scanf("%s", arr[i].name);
		fputs("번호 :", stdout); scanf("%s", arr[i].humannumber);
		fputs("학교 :", stdout); scanf("%s", arr[i].school);
		fputs("전공 :", stdout); scanf("%s", arr[i].majir);
		fputs("학년 :", stdout); scanf("%d", &arr[i].year);
	}

	for (i = 0; i < 3; i++)
	{
		SS(&arr[i]);
	}
	return 0;
}