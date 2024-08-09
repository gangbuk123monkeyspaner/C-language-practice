#include <stdio.h>
int main(void) {
	// 전체초를 입력 받아 시분초로 나타내기
	int full_sec;
	int hour, minute, second;
	printf("전체초?");
	scanf_s("%d", &full_sec);

	hour = full_sec / 3600;
	minute = full_sec % 3600 / 60;
	second = full_sec % 3600 % 60;
	printf("%d시간 %d분 %d초\n", hour, minute, second);
	return 0;
}