#include <stdio.h>

int main()
{
	// 월별 일수 구하기
	// 31 : 1,3,5,7,8,10,12
	// 30: 4,6,9,11
	// 28: 2
	int month;
	printf("몇월 ?");
	scanf_s("%d", &month);

	if (month == 2)
		printf("28일\n");
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		printf("30일\n");
	else if (month >= 13 || month < 1)
		printf("error\n");
	else {
		printf("31일\n");
	}

	return 0;
}