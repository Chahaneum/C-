#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct A
	{
		int name;
	};
	
	struct A st;

	puts("이름 입력(아스키로)>>");
	scanf("%d", &st.name);

	int i;

	for (i = 0; i < st.name; i++)//이것도 됨!
	{
		printf("%d \n", i + 1);
	}
	return 0;
}