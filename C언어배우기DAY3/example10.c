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
	int kor, eng, mat;  // 같은 자료형 한줄에 정의 가능
	int total;
	double average;
	printf("국어점수 ?");
	scanf_s("%d", &kor);
	printf("영어점수 ?");
	scanf_s("%d", &eng);
	printf("수학점수 ?");
	scanf_s("%d", &mat);

	total = getTotal(kor,eng,mat);
	average = getAverage(total);
	
	printf("총합 : %d\n", total);
	printf("평균 : %.1f\n", average);

	return 0; // 정상종료
	
}