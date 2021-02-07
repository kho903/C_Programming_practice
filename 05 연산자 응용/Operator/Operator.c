#include <stdio.h>

int main(void)
{
	/*
	int aList[5] = { 0 };

	printf("%d\n", sizeof(aList));
	printf("%d\n", 20);
	*/
	printf("%d\n", 2147483647); // 2147483647
	printf("%d\n", 2147483647 + 1); // -2147483648

	printf("%d\n", 2147483600.0F == 2147483648.0F); // 1 -> 부동소수점 오차
	// 실수는 절대로 상등 or 부등 연산 X
	return 0;
}