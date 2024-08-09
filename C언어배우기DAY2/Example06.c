#include <stdio.h>
void getSquareArea(void) {
	int width = 10;
	int height = 20;
	int area = width * height;
	printf("사각형 면적: %d", area);
}
void getCircleArea(void) {
	int radius = 5;
	double pi = 3.14;
	// 같은 함수내에서는 같은 이름의 변수 사용 x
	// 다른 함수에서는 같은 이름을 사용할 수 있음
	double area = radius * radius * pi;
	printf("원 면적: %f\n", area);
}
// ctrl + space bar 자주 활용
void main() {
	getSquareArea();
	getCircleArea();

}