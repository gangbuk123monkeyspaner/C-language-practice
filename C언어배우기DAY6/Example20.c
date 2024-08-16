#include <stdio.h>
// 반복문
// 무한반복: 어떤 사건이 발생하거나 종료 조건을 사용하여 반복을 멈춤
// (반복의 횟수를 물어보는 경우 사용)
// 계수반복 : 반복의 횟수가 명확한 경우
// while, for

// while(반복 조건){
//		반복문장;
// }
// 조건이 참인동안 반복
// True(1), False(0)
void test1(void)
{
	int count = 1;

	while (1) {  // 무조건 참(무한루프)
		// A
		
		printf("hello %d\n", count);
		// B
		if (count == 10)
			break;
		count++; // count += 1
		// C
		
	}
}
void test2(void)
{
	int count = 1;
	while(count <= 10){
		printf("Korea %d\n", count);
		count++;
	}
}

void test3(void)
{
	int count = 1;
	int total = 0;
	int end;
	printf("시작: ");
	scanf_s("%d", &count);
	printf("마지막: ");
	scanf_s("%d", &end);
	while (count <= end) {
		total += count;
		count++;
	}
	printf("합 : %d\n", total);
}



int main(void)
{
	test3();
	return 0;
}