#include <stdio.h>

void main(void) {
	// 변수(variable)
	// 데이터
	// 문자 : 'a', 문자열 : "hello"
	// 숫자 : 정수(소수점이 없는 수), 실수(소수점이 있는 수)
	// 10(정수), 10.0(실수)
	// 컴퓨터에는 내부적으로 정수와 실수를 표현하는 방식이 다름

	// 변수는 메모리 공간에 붙여진 이름
	// 변수에 있는 데이터는 재활용이 가능
	// 사용할 데이터의 크기에 맞는 변수를 준비 
	// 정수(int), 실수(double)
	int a = 10; // 정수데이터
	// 데이터의 최대 크기 : 약 21억
	// int는 4byte(32bit) -> 2**32 = 약 42억
	double b = 10.1; // 실수데이터
	// double는 8byte(64bit)

	// 변수의 이름은 영단어를 적극 활용
	// 변수 앞에 숫자 x : 1kor
	// int kor_score = 100;

	// 변수의 값을 출력하는 방법
	// 문자열 포맷(format)을 사용
	// %d : 정수 포맷, %f : 실수 포맷
	printf("%d\n",a);
	printf("%f\n", b);
	printf("%.2f\n", b);
	printf("a는 %d 입니다\n", a);
	printf("b는 %.1f입니다\n", b);
	printf("a는 %d 이고, b는 %.1f입니다\n", a, b);
	printf("%d %d %d\n", 10, 20, 30);
}