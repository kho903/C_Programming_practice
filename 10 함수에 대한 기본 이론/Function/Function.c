#include <stdio.h>

int g_nData = 0;		// ��������

int Add(int, int);
int GetFactorial(int); // ���� ���� -> �������(~~.h)

int main(void)
{
	int nResult = 0, nInput = 0;
	nResult = Add(3, 4);
	printf("%d\n", nResult);

	nResult = Add(5, 6);
	printf("%d\n", nResult);

	printf("����� ���� ����(1~10)�� �Է��ϼ��� : ");
	scanf_s("%d", &nInput);

	// ��ȯ���� Ȯ���� ������ ������ �ĺ��ϰ� ������ �� �ִ�.
	nResult = GetFactorial(nInput);
	if (nResult == 0)
	{
		// �޽��� ����� ȣ���� �Լ��� �Ѵ�.
		puts("ERROR : 1~10 ������ ������ �Է��ϼ���");
		return 0;
	}
	printf("Result: %d\n", nResult);
	return 0;
}


int Add(int a, int b) // �Լ� �ñ״�ó, �Լ� ����
{// �Լ� �ٵ� ����
	int nResult; // �������� + �ڵ�����
	nResult = a + b;
	return nResult;
}// ��

int GetFactorial(int nParam)
{
	int nResult = 1, i = 0;
	// �Ű����� ���� ��ȿ���� �ʴٸ� 0�� ��ȯ�����ν�
	// ȣ���� �Լ��� ������ �˸���!
	if (nParam < 1 || nParam>10) return 0;

	for (i = 1; i <= nParam; ++i)
		nResult *= i;
	return nResult;
}
