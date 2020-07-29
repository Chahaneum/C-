//한글
#define _CRT_SECURE_NO_WARNINGS//scanf보안 오류.
#include <stdio.h>

int main(void)
{
	int inti;//int형을 받는 변수
	int dou = 209310923923;//double형을 받는 변수
	char name[100];//이름 받는 변수
	int humannumbers;//주민등록 변수
	int* ptr = NULL;
	//보안 변수구역
	int bcti;
	int i;
	int in = 0;
	int is = 0;
	//
	for (i = 0; i <= 50; i++)
	{

		printf("\nPC_PLLC발급과 Bcf발급을 위한 프로그램을 로드중...[%d번 남았습니다]\n", i);
	}
	in += i;

	printf("FASGAA DEVOS' : bcti : %d\n", dou);
	printf("test : %din\n", in);
	printf("1 >> PC_PLLC_EBN\n2 >> Bcf_EBN\n(여기서 EBN은 fasys_Sec에서 보호되는 것을 뜻합니다)\n");
	printf("input>>");
	scanf("%d", &inti);

	if (inti == 1)
	{
		printf("이름>>");
		scanf("%s", name);

		while (name[is] != '\0')
		{
			is++;
		}
		//is = name(한글 2byte의 크기)

		printf("\n주민등록번호(7자리)>>");
		scanf("%d", &humannumbers);

		int h = 202000000, his = humannumbers;

		int hi = h - humannumbers;
		printf("\n처음의 bcti 입력>>");
		scanf("%d", &bcti);

		printf("\nfrh-ur(PC_SSF) : %d", hi);
		printf("\n주민등록번호 : %d", his);
		printf("\n이름 : %s", name);
		printf("\n단일 bcti(자동가입방지기능) : %d", bcti);

		for (i = 0; i <= 50; i++)
		{

			printf("\nPC_PLLC를 발급을 시작합니다...[%d번 남았습니다]\n", i);
		}
		in += i;

		//보안 변수 -sec-HDF_OPSF./..
		/*int inti;//int형을 받는 변수
	int dou = 209310923923;// 정의 변수
	char name[5];//이름 받는 변수
	int humannumbers;//주민등록 변수
	int* ptr = NULL;
	//보안 변수구역
	int bcti;
	int i;
	int in = 0;
	int is = 0;
	//*/
	//참고함.

		int c1, c2, c3, c4, c5, n1, n2, n3, n4, n5;
		int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;

		c1 = dou - humannumbers;
		c2 = c1 * 233;
		c3 = c2 + c1 - humannumbers - dou;
		c4 = c3 + c2;
		c5 = c4 - c3 + c2 - c1 + humannumbers;
		n1 = c5 + c4 - c3 - c2 + c1 * c4;
		n2 = n1 + c1;
		n3 = n2 + n1 - c2;
		n4 = humannumbers - 011010 + c1;
		n5 = n1 - n3 + c4;
		//여기부터 써먹는 변수!
		t1 = c1 - c5 + n5;
		t2 = t1 + humannumbers;
		t3 = t2 + t1;
		t4 = t1 - t3 + c1;
		t5 = t4 * t3 - humannumbers;
		t6 = c1 * c2 - c4 - humannumbers + 99932;
		t7 = t5 + t1 + t2 - humannumbers;
		t8 = t7 + t6 + t4 - humannumbers;
		t9 = t7 - t3 + 102 + bcti;
		t10 = t9 - t1 - bcti;

		int k1 = t10 - t9 + t1;
		int a = t2 - t10;
		int b = t1 + t5;
		int c = t2 - t9;
		int d = c2 - c1;
		int e = c3 + n1;
		int f = c4 + n3;
		int g = c5 - n2;
		int h1 = n1 + c1;
		int a1 = t7 + t1 - humannumbers;
		int b1 = t8 - n1;
		int c11 = t9 - t1;
		int d1 = k1 + 12345;
		int f1 = t1 + t2 - n1 + humannumbers;
		int g1 = humannumbers + c1;

		printf("\n%s_USER의 PC_PLLC를 알려드리겠습니다.", name);
		printf("\nfrh-ur(PC_SSF_USER) : %d", hi);
		printf("\nfcrw : %d_%d_%d_%d", t1, a, t3, t4);
		printf("\nDcf : %d_%d", b, c);
		printf("\nPWOR : %d_%d_%d_%d_%d_%d", c11, d, e, f, g, h1);
		printf("\nPC_PLLC_USER : %d_%d_%s", a1, t6, name);
		printf("\nPC_PPLCE_USER : %d_%d_%d", b1, t10, c11);
		printf("\nUSER-Key : %d_%d_%d", d1, f1, g1);
	}
	else if (inti == 2)
	{
		printf("\n주의 웬만한 경우는 PC_PLLC를 발급하신후에 Bcf도 발급을 해주세요.");
		printf("\n만약 USER-키가 생각이 나지 않으시다면 001를 계속 입력후에 마지막에 '키찾기'를 들어가주세요.");
		printf("\nBcf는 개발자와 고급사용자를 위한 KEY입니다.");
		printf("\n이름>>");
		printf("\nfcrw 2줄(00_00(여기)_00_00)에 9자리수까지 입력>>");
		printf("\nUSER-KEY와 Dcf를 동시에 입력(UK = 4자리까지, Dcf = 6자리까지)>>");
		printf("\nPC_PPLCE_USER를 전체 입력(띄어쓰기 x)>>");

		printf("\nBcf발급이 진행중입니다..[%d남음]\n");
		printf("\nBcf : %d_%d_%d_%d_%d_%d_%d_%d_%d_%d\n");
		printf("\nCFF : %d_%d_%d\n");
		printf("\nPVCR : %d_%d_%s");

		printf("\n");
		printf("\n");

		printf("\n");
	}
	else
	{
		printf("\n");
		printf("\n");

		printf("\n");
		printf("\n");

		printf("\n");


		printf("\n");
		printf("\n");




		printf("\n");
		printf("\n");


	}
	return 0;
}
