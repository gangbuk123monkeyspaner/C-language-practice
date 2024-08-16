#include <stdio.h>

void test1(void)
{
	int hour;
	printf("시간입력:");
	scanf_s("%d", &hour);
	// and (&&)
	// 두 개의 조건이 모두 참일 경우 참
	if (hour >= 0 && hour < 12)
		printf("morning\n");
	else if (hour >= 12 && hour < 18)
		printf("afternoon\n");
	else if (hour >= 18 && hour <= 24)
		printf("evening\n");
	else
		printf("error\n");
}
void test2(void)
{
	// 유소녀 축구단 모집
	// 여자 and (age: 10~12)
	// 남(m), 여(f)
	char gender;
	int age;
	
	printf("남성: m, 여성: f / 성별 입력:");
	gender = getchar();
	if (gender == 'f') {
		printf("나이:");
		scanf_s("%d", &age);
		if (age >= 10 && age <= 12)
			printf("입단 가능\n");
		else {
			printf("나이가 조건에 맞지 않습니다.\n");
		}
	}
	else{
		printf("여성만 가능합니다\n");
	}
}


int main(void)
{
	test2();
	return 0;
}