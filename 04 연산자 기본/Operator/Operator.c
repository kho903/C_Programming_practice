#include <stdio.h>

int main(void)
{
	/*
	int a = 0;
	scanf_s("%d", &a);
	printf("%d", 7 / a);
	return 0;
	*/
	
	// ���
	/*
	int first_int = 0;
	int second_int = 0;
	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d%d", &second_int, &first_int);

	float avg_int = (first_int + second_int) / 2.0;
	printf("AVG : %f", avg_int);
	return 0;
	

	// �ʸ� '��:��:��"�� ��ȯ�ϴ� ���α׷�
	int sec = 0;
	scanf_s("%d", &sec);
	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", sec, sec/3600, (sec%3600)/60, (sec%3600)%60);
	*/

	// �� ������ ���� �� ���
	int nInput, nTotal;

	nTotal = 0;
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &nInput);
		nTotal += nInput;
	}

	printf("Total : %d\n", nTotal);
}