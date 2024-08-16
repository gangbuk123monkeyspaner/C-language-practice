#include <stdio.h>

void test1(void)
{
	// for문: 반복의 횟수가 명확한 경우 많이 사용
	// for(초기값; 반복조건; 증감){반복문장}
	// for 문 내부 값은 생략 가능 : for(;;)- > 무한루프
	// 초기값에 해당하는 변수는 밖에 선언 해야함
	int count;
	int total = 0;
	for (count =1; count <= 10;count++) {
		printf("Hello %d\n",count);
		total += count;

	}
	printf("%d\n", total);
}

void test2(void)
{
	// 100~500까지의 3의 배수 개수 구하기
	int count;
	int start = 100;
	int end = 500;
	int answer = 0;
	for (count = start; count <= end; count++) {
		if (count % 3 == 0)
			answer++;

	}
	printf("%d\n", answer);
}

int main(void)
{
	test2();
	return 0;
}