#include <stdio.h>

int main(void) {
	/*
	int int_value1, int_value2, int_value3;
	scanf_s("%d", &int_value1);
	scanf_s("%d", &int_value2);
	scanf_s("%d", &int_value3);
	int max_value = int_value1 > int_value2 ? (int_value1 > int_value3 ? int_value1 : int_value3) : (int_value2 > int_value3 ? int_value2 : int_value3);
	printf("MAX : %d", max_value);
	*/

	/*
	int age;
	int fee = 1000;
	scanf_s("%d", &age);
	if (age <= 20) 
		printf("������� : %d��", (int)(fee * 0.75));
	else
		printf("������� : %d��", fee);
	*/

	/*
	int nInput = 10, nData;
	scanf_s("%d", &nInput);

	
	if (nInput > 90)
		nData = 10;
	else if (nInput > 50)
		nData = 5;
	else if (nInput > 10)
		nData = 1;
	else
		nData = 0;
	

	switch (nInput)
	{
	case 90:
		nData = 10;
		break;

	case 50:
		nData = 5;
		break;

	case 10:
		nData = 5;
		break;

	default:
		nData = 0;
	}
	printf("%d", nData);
	*/
	
	int nAge = 0;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &nAge);

	if (nAge < 0)
		goto ERROR;

	// ���̿� ���� ��� ���
	printf("��� ��� !. \n");
	return 0;
	
ERROR:
	puts("ERROR!!!!!!");
	return -1;
}