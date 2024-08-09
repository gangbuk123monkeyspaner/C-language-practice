#include <stdio.h>

void main(void) {
	//사각형 면적 구하기
	int width = 10;   // 변수를 만들고 바로 값을 저장 (초기화)
	int height = 20;
	int square_area = width * height;
	//printf("사각형 면적 : %d\n", area);
		// C언어는 중간에 맘대로 변수를 선언하지 못함 --> 변수를 젤 위에 다 넣어줘야함
	
		// 원면적 구하기
	int radius = 5;
	double pi = 3.14;
	double circle_area = radius * pi;
	
	// 마지막에 실행코드 작성
	printf("원 면적 : %f",circle_area);
	printf("사각형 면적 : %d\n", square_area);
}