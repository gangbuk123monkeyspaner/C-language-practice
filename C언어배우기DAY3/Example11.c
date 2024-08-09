#include <stdio.h>
double cel_to_fah(double cel) {
	double fah;
	fah = cel * 1.8 + 32;
	return fah;
}
int main(void) {
	// ¿Âµµ º¯È¯
	// ¼·¾¾¿Âµµ <->Àý´ë ¿Âµµ
	double cel, fah;

	printf("¼·¾¾¿Âµµ?");
	scanf_s("%lf", &cel);
	fah = cel_to_fah(cel);
	printf("Àý´ë¿Âµµ : %.1f", fah);


	return 0;
}