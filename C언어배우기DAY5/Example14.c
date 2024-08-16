#include <stdio.h>
void test1()
{
	// 성인판단
	int age;
	printf("나이 ?");
	scanf_s("%d", &age);

	//판단
	if (age >= 19) {
		printf("성인입니다.\n");  // 수행할 문장이 한문장이라면 {} 생략 가능
	}
}
void test2()
{
	// 성인판단
	int age;
	printf("나이 ?");
	scanf_s("%d", &age);

	//판단
	if (age >= 19) {
		printf("성인입니다.\n");  // 수행할 문장이 한문장이라면 {} 생략 가능
	}
	else {
		printf("미성년자입니다.\n");
	}
}

void test3()
{
	// 성인판단
	int age;
	printf("나이 ?");
	scanf_s("%d", &age);

	//여러개의 조건을 판단 (성인, 청소년, 어린이, 유아)
	if (age >= 19) {
		printf("성인입니다.\n");  // 수행할 문장이 한문장이라면 {} 생략 가능
	}
	else {
		if (age >= 14) {
			printf("미성년자입니다.\n");
		}
		else {
			if (age >= 8) {
				printf("어린이입니다.\n");
			}
			else {
				printf("유아입니다.\n");
			}
		}
	}
}

void test4()
{
	// 성인판단
	int age;
	printf("나이 ?");
	scanf_s("%d", &age);

	// else와 if 묶어서 표현
	if (age >= 19) {
		printf("성인입니다.\n");  // 수행할 문장이 한문장이라면 {} 생략 가능
	}
	else if (age >=14 ){
		printf("청소년입니다.\n");
	}
	else if (age >= 8) {
		printf("어린이입니다.\n");
	}
	else {
		printf("유아입니다.\n");
	}
}







int main(void)
{
	test4();
	return 0;
}
