#include <stdio.h>
void getSquareArea(void) {
	int width = 10;
	int height = 20;
	int area = width * height;
	printf("�簢�� ����: %d", area);
}
void getCircleArea(void) {
	int radius = 5;
	double pi = 3.14;
	// ���� �Լ��������� ���� �̸��� ���� ��� x
	// �ٸ� �Լ������� ���� �̸��� ����� �� ����
	double area = radius * radius * pi;
	printf("�� ����: %f\n", area);
}
// ctrl + space bar ���� Ȱ��
void main() {
	getSquareArea();
	getCircleArea();

}