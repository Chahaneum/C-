#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//100점 통과!
int main(void)
{
	struct book
	{
		char title[100];
		char Author_name[20];
		int number;
	};

	struct book b[3];
	int i;
	printf("도서 정보 입력\n");
	for (i = 0; i < 3; i++)
	{
		fputs("저자: ", stdout); scanf("%s", b[i].Author_name);
		fputs("제목: ", stdout); scanf("%s", b[i].title);
		fputs("페이지 수: ", stdout); scanf("%d", &b[i].number);//fputs는 공백 포함 문자열을 받을수 있음
	}
	fputs("도저 정보 출력", stdout);

	for (i = 0; i < 3; i++)
	{
		
		printf("book %d\n", i+1);
		printf("저자: %s\n", b[i].Author_name);
		printf("제목 : %s\n", b[i].title);
		printf("페이지 수: %d\n", b[i].number);
	}
}