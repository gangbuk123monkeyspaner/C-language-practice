#include <stdio.h>

// 함수의 원형(prototype)
// 함수의 원형을 미리 표기할 경우 함수의 위치는 상관이 없음
void japan(void);
void korea(void);

void main(void) {
	printf("main Hello\n");
	// printf()로 출력할 때 엔터키(줄바꿈)은 포함되지 않음
	// 줄바꿈('\n')를 표현

	// korea()함수를 호출(call)
	korea();  // 함수를 만들 때 void를 넣는거지, 함수 호출 시에는 넣지 않음
	printf("Bye main\n");
}

// C코드에서 하나의 프로젝트에는 main()는 하나만 존재해야 함
void japan(void) {
	printf("Hello Japan\n");
	printf("Bye Japan\n");
}
void korea(void) {
	printf("Hello Korea\n");
	// 함수를 호출할 경우 반드시 함수가 먼저 정의되어야 함
	japan();
	printf("Bye Korea\n");
}

