#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void ret (char *less,char *come)
{
	if (!strcmp(less, come))
	{
		printf("%s", less);
	}
	else
	{
		printf("Error\n");
	}

	
}

void str(void)
{
	puts("검색 프로그램에 오신것을 환영합니다! ");
	fputs("문자 입력/>", stdout);
}

void t(void)
{

}
int main(void)
{
	char len[100],less[100], come[100];

	
	str();
	scanf("%s", less);

	printf("검색/>"); scanf("%s", come);
	
	ret(less, come);
	
	

	return 0;
}