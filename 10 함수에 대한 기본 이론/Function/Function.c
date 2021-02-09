#include <stdio.h>

int g_nData = 0;		// 전역변수

int Add(int, int);
int GetFactorial(int); // 원형 선언 -> 헤더파일(~~.h)

int main(void)
{
	int nResult = 0, nInput = 0;
	nResult = Add(3, 4);
	printf("%d\n", nResult);

	nResult = Add(5, 6);
	printf("%d\n", nResult);

	printf("계승을 구할 정수(1~10)을 입력하세요 : ");
	scanf_s("%d", &nInput);

	// 반환값을 확인해 오류와 정상을 식별하고 대응할 수 있다.
	nResult = GetFactorial(nInput);
	if (nResult == 0)
	{
		// 메시지 출력을 호출자 함수가 한다.
		puts("ERROR : 1~10 사이의 정수를 입력하세요");
		return 0;
	}
	printf("Result: %d\n", nResult);
	return 0;
}


int Add(int a, int b) // 함수 시그니처, 함수 원형
{// 함수 바디 시작
	int nResult; // 지역변수 + 자동변수
	nResult = a + b;
	return nResult;
}// 끝

int GetFactorial(int nParam)
{
	int nResult = 1, i = 0;
	// 매개변수 값이 유효하지 않다면 0을 반환함으로써
	// 호출자 함수에 오류를 알린다!
	if (nParam < 1 || nParam>10) return 0;

	for (i = 1; i <= nParam; ++i)
		nResult *= i;
	return nResult;
}
