#include <stdio.h>

int main(void)
{	/*
	char szName[12] = {"Hello"};
	gets_s(szName, sizeof(szName));
	
	FILE* fp = stdin;
	*/
	int nAge = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d%*c", &nAge);

	// 엔터를 지워주기 위함
	// getchar(); // 띄어쓰기가 들어가면 X
	// 또는 scanf_s안에 %*c

	char szName[12] = { 0 };
	printf("이름을 입력하세요 : ");
	gets_s(szName, sizeof(szName));

	printf("나이 : %d, 이름 : %s\n", nAge, szName);
	return 0;
}