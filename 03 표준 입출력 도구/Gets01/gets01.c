#include <stdio.h>

int main(void)
{	/*
	char szName[12] = {"Hello"};
	gets_s(szName, sizeof(szName));
	
	FILE* fp = stdin;
	*/
	int nAge = 0;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d%*c", &nAge);

	// ���͸� �����ֱ� ����
	// getchar(); // ���Ⱑ ���� X
	// �Ǵ� scanf_s�ȿ� %*c

	char szName[12] = { 0 };
	printf("�̸��� �Է��ϼ��� : ");
	gets_s(szName, sizeof(szName));

	printf("���� : %d, �̸� : %s\n", nAge, szName);
	return 0;
}