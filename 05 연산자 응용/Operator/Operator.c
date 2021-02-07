#include <stdio.h>

int main(void)
{
	/*
	int aList[5] = { 0 };

	printf("%d\n", sizeof(aList));
	printf("%d\n", 20);
	
	printf("%d\n", 2147483647); // 2147483647
	printf("%d\n", 2147483647 + 1); // -2147483648

	printf("%d\n", 2147483600.0F == 2147483648.0F); // 1 -> 부동소수점 오차
	// 실수는 절대로 상등 or 부등 연산 X
	*/

	// 합격 & 불합격 분류
	int tall;
	printf("키를 입력하세요. : ");
	scanf_s("%d", &tall);
	printf("결과 : %s", tall>=150 ? "합격":"불합격");
	
	return 0;
}