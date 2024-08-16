#include <stdio.h>

void test1(void)
{
	// 10명의 점수를 입력받아 함 구하기
	int count = 1;
	int score;
	int total = 0;
	while (count <= 10) {
		printf("점수 입력: ");
		scanf_s("%d", &score);
		total += score;
		count++;

	}
	printf("합 : %d", total);
}

void test1(void)
{
	// 10명의 점수를 입력받아 합격 불합격 수 구하기
	int count = 1;
	int score;
	int pass = 0;
	int failure = 0;
	while (count <= 10) {
		printf("점수 입력: ");
		scanf_s("%d", &score);
		if (score >= 80) {
			pass++;
		}
		else {
			failure++;
		}
		count++;

	}
	printf("합격 : %d","불합격 : %d", pass, failure );
}

void test3(void) 
{
	// 반복의 횟수가 정해지지 않음
	// 임의의 개수의 점수를 입력 받아 함 구하기
	int score;
	int total = 0;
	int count = 0;
	while (1) {
		printf("점수 (종료:-1):");
		scanf_s("%d", &score);
		if (score == -1) {
			break;
		}
		total += score;
		count++;
	}
	
	

}

int main(void)
{
	test1();
	return 0;
}