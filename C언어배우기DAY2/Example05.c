#include <stdio.h>

void main(void) {
	//�簢�� ���� ���ϱ�
	int width = 10;   // ������ ����� �ٷ� ���� ���� (�ʱ�ȭ)
	int height = 20;
	int square_area = width * height;
	//printf("�簢�� ���� : %d\n", area);
		// C���� �߰��� ����� ������ �������� ���� --> ������ �� ���� �� �־������
	
		// ������ ���ϱ�
	int radius = 5;
	double pi = 3.14;
	double circle_area = radius * pi;
	
	// �������� �����ڵ� �ۼ�
	printf("�� ���� : %f",circle_area);
	printf("�簢�� ���� : %d\n", square_area);
}