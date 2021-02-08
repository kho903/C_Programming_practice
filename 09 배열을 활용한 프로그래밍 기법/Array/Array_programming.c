#include <stdio.h>

int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;

	// 버블 정렬
	/*
	for (i = 0; i < 4; ++i)
	{
		for (j = i + 1; j < 5; ++j)
		{
			if (aList[i] > aList[j])
			{
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;
			}
		}
	}*/

	// 선택 정렬
	int nIndexMin = 0;
	for (i = 0; i < 4; ++i)
	{
		nIndexMin = i;
		for (j = i + 1; j < 5; ++j)
		{
			if (aList[nIndexMin] > aList[j])
			{
				nIndexMin = j;
			}
		}

		if (i != nIndexMin) {
			nTmp = aList[i];
			aList[i] = aList[nIndexMin];
			aList[nIndexMin] = nTmp;
		}
	}
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	
	return 0;
}