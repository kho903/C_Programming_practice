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

	// ��ü ��� �� �ִ��� ����Ѵ�.
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');
	printf("MAX : %d", nMax);
	*/

	// arrayString
	
	// �迭 �� ����� ���� �ϳ��� ����ϴ� ������� �ʱ�ȭ
	int aList[5] = { 30,40,10,50,20 };
	char szBuffer[6] = { 'H', 'e', 'l','l','o','\0' };

	// ���ڿ� ���·� ���������� ����ϴ� ������� �迭 �ʱ�ȭ
	char szData[8] = { "Hello" };

	// ���ڿ� ����� ����Ű�� ������ ���� ���� �� �ʱ�ȭ
	char* pszBuffer = "Hello";

	// ���ڿ��� ��� ���� ������� ���
	puts(szBuffer);
	puts(szData);
	puts(pszBuffer);
	
	return 0;
}