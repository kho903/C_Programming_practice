#include <stdio.h>

int main(void)
{
	/*
	int i = 0;
	while (i < 5)
	{
		printf("i = %d\n", i);
		i++;
	}
	
	
	char ch;
	while ((ch = getchar()) != '\n')
	{
		putchar(ch);
	}
	*/

	/*
	int nInput;
	scanf_s("%d", &nInput);
	int i = 0;
	while (i < nInput)
	{
		putchar('*');
		++i;
	}
	*/

	/*
	int nInput;
	scanf_s("%d", &nInput);
	int i = 0;
	int j = 0;
	while (i < 5)
	{
		while (j < 5) {
			putchar('*');
			++j;
		}
		putchar('\n');
		++i;
	}
	*/

	int i, j;
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
			printf("*\t");
		putchar('\n');
	}

	return 0;
}