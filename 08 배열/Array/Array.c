#include <stdio.h>

int main(void)
{
	/*
	printf("%d\n", sizeof(int[5])); // 20
	int aList[5];
	printf("%d\n", sizeof(aList));
	*/

	/*
	int aList[3] = { 0 };
	aList[0] = 10;
	aList[1] = 20;
	aList[2] = 30;
	int* pData = &aList;
	*/

	// maxFromArray
	/*
	int aList[5] = { 30, 10, 40, 20, 50 };

	int i = 0, nMax = aList[0];
	for (i = 1; i < 5; ++i)
		if (aList[i] > nMax)
			nMax = aList[i];

	// 전체 요소 및 최댓값을 출력한다.
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');
	printf("MAX : %d", nMax);
	*/

	// arrayString
	
	// 배열 각 요소의 값을 하나씩 기숙하는 방식으로 초기화
	int aList[5] = { 30,40,10,50,20 };
	char szBuffer[6] = { 'H', 'e', 'l','l','o','\0' };

	// 문자열 형태로 문자집합을 기술하는 방식으로 배열 초기화
	char szData[8] = { "Hello" };

	// 문자열 상수를 가리키는 포인터 변수 선언 및 초기화
	char* pszBuffer = "Hello";

	// 문자열은 모두 같은 방식으로 출력
	puts(szBuffer);
	puts(szData);
	puts(pszBuffer);
	
	return 0;
}