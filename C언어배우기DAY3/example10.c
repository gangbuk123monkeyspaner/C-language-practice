#include <stdio.h>
int getTotal(int k, int e, int m) {
	int total;
	total = k + e + m;
	return total;

}
double getAverage(int t){
	double average;
	average = t / (double)3;
	return average;
}
int main(void) {
	int kor, eng, mat;  // ���� �ڷ��� ���ٿ� ���� ����
	int total;
	double average;
	printf("�������� ?");
	scanf_s("%d", &kor);
	printf("�������� ?");
	scanf_s("%d", &eng);
	printf("�������� ?");
	scanf_s("%d", &mat);

	total = getTotal(kor,eng,mat);
	average = getAverage(total);
	
	printf("���� : %d\n", total);
	printf("��� : %.1f\n", average);

	return 0; // ��������
	
}