#include <stdio.h>

int main(void)
{
	int a = 10;
	printf("%d\n", a);

	int b = 20;
	printf("%d\n", b);

	printf("%f\n", 123.0);

	123.0; // double;
	123.0F; // float;

	printf("%f\n", 123.45F);
	printf("%f\n", 123.45);

	/*
	printf("%f\n", 2147483648.0F);
	printf("%f\n", 2147483648.0F - 20);
	printf("%f\n", 2147483648.0F - 40);
	printf("%f\n", 2147483648.0F - 60);
	printf("%f\n", 2147483648.0F - 64);
	*/

	// 되도록이면 float 보다 double을 쓸 것
	printf("%f\n", 2147483648.0);
	printf("%f\n", 2147483648.0 - 20);
	printf("%f\n", 2147483648.0 - 40);
	printf("%f\n", 2147483648.0 - 60);
	printf("%f\n", 2147483648.0 - 64);

	char char_a = 'A';
	printf("%c\n", char_a);
	printf("%d\n", char_a);

	// char szBuffer[12] = { 'H', 'e', 'l', 'l', 'o' };
	char szBuffer[12] = { "Hello" }; // 문자열 상수
	puts(szBuffer);

	return 0;
}