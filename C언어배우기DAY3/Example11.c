#include <stdio.h>
double cel_to_fah(double cel) {
	double fah;
	fah = cel * 1.8 + 32;
	return fah;
}
int main(void) {
	// �µ� ��ȯ
	// �����µ� <->���� �µ�
	double cel, fah;

	printf("�����µ�?");
	scanf_s("%lf", &cel);
	fah = cel_to_fah(cel);
	printf("����µ� : %.1f", fah);


	return 0;
}