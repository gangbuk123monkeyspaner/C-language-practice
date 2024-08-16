#include <stdio.h>
void test1(void)
{
	// 짝수 홀수 판단
	int number;
	printf("숫자 ? ");
	scanf_s("%d", &number);

	if (number % 2 == 0) {
		printf("짝수 입니다.");
	}
	else {
		printf("홀수 입니다.");
	}

}

void test2()
{
	// 마트의 할인금액 구하기
	// 구입 금액이 10만원 이상 : 10% 할인
	// 구입 금액이 20만원 이상 : 20% 할인
	// 10만원 미만 그대로
	int price;
	double pay;

	printf("구입 금액 ? ");
	scanf_s("%d", &price);
	
	if (price >= 200000) {
		pay = price * 0.8;
	}
	else if (price >= 100000) {
		pay = price * 0.9;
		
	}
	else {
		pay = price;
		
	}
	printf("지불금액:%.1f\n", pay);
}
int main(void) {
	test1();
	return 0;
}