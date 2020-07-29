//프로그램 완성 완료.
#define _CRT_SECURE_NO_WARNINGS//scanf보안 오류.
#include <stdio.h>
#include <stdlib.h>

int main_Sssssssssssssssssssssssss(void)
{
	int inti;//int형을 받는 변수
	int choose = 0;
	int choose2 = 0;
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

	printf("PC SEC : bcti : %d\n", dou);
	printf("1 >> PC_PLLC_EBN 발급\n2 >> Bcf_EBN 발급\n3 >> Dvne\n4 >> 사용설명서\n");
	printf("input>>");
	scanf("%d", &inti);
A:
	if (inti == 1 || choose == 1)
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
		printf("\n다른모드로 전환 >> 1");
		printf("\n끝내기 >> 2");
		printf("\n입력>>");
		scanf("%d", &choose2);

		if (choose2 == 1)
		{
			printf("PC SEC : bcti : %d\n", dou);
			printf("1 >> PC_PLLC_EBN 발급\n2 >> Bcf_EBN 발급\n3 >> Dvne\n4 >> 사용설명서\n");
			printf("input>>");
			scanf("%d", &choose);

			if (choose == 1)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("PC_PCCL발급이 로드됩니다...[%d남음]\n", i);
				}
				goto A;
				return;
			}//else if choose == 1

			else if (choose == 2)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("Bcf발급이 로드됩니다...[%d남음]\n", i);
				}
				goto B;
				return;
			}//else if choose == 2

			else if (choose == 3)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("Dvne발급이 로드됩니다...[%d남음]\n", i);
				}
				goto C;
				return;
			}//else if choose == 3

			else if (choose == 4)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("사용설명서가 로드됩니다...[%d남음]\n", i);
				}
				goto D;
				return;
			}//else if choose == 4
			else
			{
				return 0;
			}
		}//if == choose 1

		if (choose2 == 2)
		{
			for (i = 0; i <= 10; i++)
			{
				printf("종료됩니다...[%d남음]\n", i);
			}
			printf("GOODBYE!\n");
			return 0;//영향을 안미침 goto에

		}//종료

		else
		{
			return 0;
		}
	}
B:
	if (inti == 2 || choose == 2)
	{
		int fcrw, pplce, dcf_user;
		double ucfs = inti + 31.2390;

		printf("\nPC SEC : UCFS : %f", ucfs);
		printf("\n주의 : 웬만한 경우는 PC_PLLC를 발급하신후에 Bcf도 발급을 해주세요.");
		printf("\n만약 USER-키가 생각이 나지 않으시다면 001를 계속 입력후에 마지막에 '키찾기'를 들어가주세요.");
		printf("\nBcf는 개발자와 고급사용자를 위한 KEY입니다.");
		printf("\n이름>>");
		scanf("%s", name);
		printf("\n주민등록번호(200001230처럼)>>");
		scanf("%d", &humannumbers);
		printf("\nUCFS 입력(자동가입방지)>>");
		scanf("%f", &ucfs);
	
		while (name[is] != '\0')
		{
			is++;
		}

		printf("\nfcrw 2줄(00_00(여기)_00_00)에 9자리수까지 입력>>");
		scanf("%d", &fcrw);
		printf("\nUSER-KEY와 Dcf를 동시에 입력(UK = 4자리까지, Dcf = 6자리까지)>>");
		scanf("%d", &dcf_user);
		printf("\nPC_PPLCE_USER를 전체 입력(띄어쓰기 x)>>");
		scanf("%d", &pplce);

		int l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, nm1, nm2, nm3;
		l1 = fcrw + pplce;
		l2 = dcf_user + l1 * 231;
		l3 = l2 + l1;
		l4 = l3 - l2 * fcrw;
		l5 = l4 + pplce;
		l6 = l5 - l1 + l3 * 21321;
		l7 = l6 - l5 + l4 * fcrw;
		l8 = l6 - l7 + dcf_user;
		l9 = l8 + l1;
		l10 = l1 + l9 - pplce;
		nm1 = l1 * l2;
		nm2 = nm1 + l3;
		nm3 = nm2 + nm1 - fcrw;
		for (i = 0; i <= 50; i++)
		{
			printf("\nBcf발급이 진행중입니다..[%d남음]\n", i);
		}
		in += i;

		int a = l1 + l2;
		int b = l2 + l3;
		int c = l3 + l4;
		int d = l4 - l5;
		int e = l5 - l6 + l5;
		int f = l1 + l9;
		printf("\nBcf : %d_%d_%d_%d_%d_%d_%d_%d_%d_%d\n",a,b,c,d,e,f,nm2, nm1 - l10, nm3, a + b);
		printf("\nCFF : %d_%d_%d\n", a - b, b-c, c-d);
		printf("\nPVCR : %d_%d_%s\n", nm1 + nm2 + humannumbers - e * f,f- e+ 1923,name);

		printf("\n다른모드로 전환 >> 1");
		printf("\n끝내기 >> 2");

		printf("\n입력>>");
		scanf("%d", &choose2);

		if (choose2 == 1)
		{
			printf("PC SEC : bcti : %d\n", dou);
			printf("1 >> PC_PLLC_EBN 발급\n2 >> Bcf_EBN 발급\n3 >> Dvne\n4 >> 사용설명서\n");
			printf("input>>");
			scanf("%d", &choose);

			if (choose == 1)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("PC_PCCL발급이 로드됩니다...[%d남음]\n", i);
				}
				goto A;
				return;
			}//else if choose == 1

			else if (choose == 2)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("Bcf발급이 로드됩니다...[%d남음]\n", i);
				}
				goto B;
				return;
			}//else if choose == 2

			else if (choose == 3)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("Dvne발급이 로드됩니다...[%d남음]\n", i);
				}
				goto C;
				return;
			}//else if choose == 3

			else if (choose == 4)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("사용설명서가 로드됩니다...[%d남음]\n", i);
				}
				goto D;
				return;
			}//else if choose == 4
			else
			{
				return 0;
			}
		}//if == choose 1

		if (choose2 == 2)
		{
			for (i = 0; i <= 10; i++)
			{
				printf("종료됩니다...[%d남음]\n", i);
			}
			printf("GOODBYE!\n");
			return 0;//영향을 안미침 goto에
		
		}//종료

		else
		{
			return 0;
		}
		return 0;//영향을 안미침 goto에
	
	}//if inti == 2


C:
	if (inti == 3 || choose == 3)
	{
		for (i = 0; i <= 50; i++)
		{
			printf("Dvne발급이 로드됩니다...[%d남음]\n", i);
		}
		int de = 99039123 - choose + inti + 3901923 - 39123;
		printf("\nDven는 자동가입방지를 위한 키입니다(모든 사용자가 동일)");
		printf("\nDven : %d_%d\n", de + 1903, de - 0 * 777328);
		printf("\n다른모드로 전환 >> 1");
		printf("\n끝내기 >> 2");

		printf("\n입력>>");
		scanf("%d", &choose2);

		if (choose2 == 1)
		{
			printf("PC SEC : bcti : %d\n", dou);
			printf("1 >> PC_PLLC_EBN 발급\n2 >> Bcf_EBN 발급\n3 >> Dvne\n4 >> 사용설명서\n");
			printf("input>>");
			scanf("%d", &choose);

			if (choose == 1)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("PC_PCCL발급이 로드됩니다...[%d남음]\n", i);
				}
				goto A;
				return;
			}//else if choose == 1

			else if (choose == 2)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("Bcf발급이 로드됩니다...[%d남음]\n", i);
				}
				goto B;
				return;
			}//else if choose == 2

			else if (choose == 3)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("Dvne발급이 로드됩니다...[%d남음]\n", i);
				}
				goto C;
				return;
			}//else if choose == 3

			else if (choose == 4)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("사용설명서가 로드됩니다...[%d남음]\n", i);
				}
				goto D;
				return;
			}//else if choose == 4
			else
			{
				return 0;
			}
		}//if == choose 1

		if (choose2 == 2)
		{
			for (i = 0; i <= 10; i++)
			{
				printf("종료됩니다...[%d남음]\n", i);
			}
			printf("GOODBYE!\n");
			return 0;//영향을 안미침 goto에

		}//종료

		else
		{
			return 0;
		}
		return 0;//영향을 안미침 goto에
	}
D:
	if (inti == 4 || choose == 4)
	{
		for (i = 0; i <= 50; i++)
		{
			printf("사용설명서 발급이 로드됩니다...[%d남음]\n", i);
		}
		printf("\n여기서 발급이 되는 키는 모든 브라우저, USER-KEY를 지원하는 모든 은행에서 사용이 가능합니다.");
		printf("\n보안프로그램 설치후 발급을 받으시는것을 권장합니다(추천 목록 : v3sLite , 윈도우 보안)");
		printf("\n여기서 만들어진 정보는 보안 규칙에 따라서 저장이 되지 않으니 꼭 기억하시길 바랍니다.");
		printf("\n다른모드로 전환 >> 1");
		printf("\n끝내기 >> 2");

		printf("\n입력>>");
		scanf("%d", &choose2);

		if (choose2 == 1)
		{
			printf("PC SEC : bcti : %d\n", dou);
			printf("1 >> PC_PLLC_EBN 발급\n2 >> Bcf_EBN 발급\n3 >> Dvne\n4 >> 사용설명서\n");
			printf("input>>");
			scanf("%d", &choose);

			if (choose == 1)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("PC_PCCL발급이 로드됩니다...[%d남음]\n", i);
				}
				goto A;
				return;
			}//else if choose == 1

			else if (choose == 2)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("Bcf발급이 로드됩니다...[%d남음]\n", i);
				}
				goto B;
				return;
			}//else if choose == 2

			else if (choose == 3)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("Dvne발급이 로드됩니다...[%d남음]\n", i);
				}
				goto C;
				return;
			}//else if choose == 3

			else if (choose == 4)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("사용설명서가 로드됩니다...[%d남음]\n", i);
				}
				goto D;
				return;
			}//else if choose == 4
			else
			{
				return 0;
			}
		}//if == choose 1

		if (choose2 == 2)
		{
			for (i = 0; i <= 10; i++)
			{
				printf("종료됩니다...[%d남음]\n", i);
			}
			printf("GOODBYE!\n");
			return 0;//영향을 안미침 goto에

		}//종료

		else
		{
			return 0;
		}
		return 0;//영향을 안미침 goto에

	}

	else
	{
		printf("잘못 입력하셨습니다.(오류 코드 f1/09412)\n");
		printf("\n다른모드로 전환 >> 1");
		printf("\n끝내기 >> 2");

		printf("\n입력>>");
		scanf("%d", &choose2);

		if (choose2 == 1)
		{
			printf("PC SEC : bcti : %d\n", dou);
			printf("1 >> PC_PLLC_EBN 발급\n2 >> Bcf_EBN 발급\n3 >> Dvne\n4 >> 사용설명서\n");
			printf("input>>");
			scanf("%d", &choose);

			if (choose == 1)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("PC_PCCL발급이 로드됩니다...[%d남음]\n", i);
				}
				goto A;
				return;
			}//else if choose == 1

			else if (choose == 2)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("Bcf발급이 로드됩니다...[%d남음]\n", i);
				}
				goto B;
				return;
			}//else if choose == 2

			else if (choose == 3)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("Dvne발급이 로드됩니다...[%d남음]\n", i);
				}
				goto C;
				return;
			}//else if choose == 3

			else if (choose == 4)
			{
				for (i = 0; i <= 50; i++)
				{
					printf("사용설명서가 로드됩니다...[%d남음]\n", i);
				}
				goto D;
				return;
			}//else if choose == 4
		}//if == choose 1

		if (choose2 == 2)
		{
			for (i = 0; i <= 10; i++)
			{
				printf("종료됩니다...[%d남음]\n", i);
			}
			printf("GOODBYE!\n");
			return 0;//영향을 안미침 goto에

		}//종료

		else
		{
			return 0;
		}
	
		return 0;//영향을 안미침 goto에
	
	}
	system("pause");
	return 0;
}
