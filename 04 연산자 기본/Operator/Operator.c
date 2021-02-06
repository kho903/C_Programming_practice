#include <stdio.h>

int main(void)
{
	/*
	int a = 0;
	scanf_s("%d", &a);
	printf("%d", 7 / a);
	return 0;
	*/
	
	// 평균
	/*
	int first_int = 0;
	int second_int = 0;
	printf("두 정수를 입력하세요 : ");
	scanf_s("%d%d", &second_int, &first_int);

	float avg_int = (first_int + second_int) / 2.0;
	printf("AVG : %f", avg_int);
	return 0;
	*/

	// 초를 '시:분:초"로 변환하는 프로그램
	int sec = 0;
	scanf_s("%d", &sec);
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", sec, sec/3600, (sec%3600)/60, (sec%3600)%60);
}