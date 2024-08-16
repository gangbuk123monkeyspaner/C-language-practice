#include <stdio.h>
void test1(void)
{
	// 중간값 구하기
	int start = 1;
	int end = 7;
	while (start < end) {
		start++;
		end--;
	}
	printf("중간값 : %d\n", end);
}
void test2(void)
{
	// 몬스터 공격하기
	int hp = 60;
	int attack = 30;
	int recovery = 10;
	int answer = 0;
	while (1) {
		answer++;
		hp -= attack;
		if (hp <= 0)
			break;
		hp += recovery;
		
	}
	printf("%d 턴 이후 종료 됩니다.", answer);
}

void test3(void)
{
	// 주어진 정수에서 각 자리수 합 구하기
	int number;
	int total = 0;
	printf("숫자 입력 : ");
	scanf_s("%d", &number);
	while (number != 0) {
		total += number % 10;
		number = number / 10;
		

	}
	printf("%d", total);
}




int main(void)
{
	test2();
	return 0;
}