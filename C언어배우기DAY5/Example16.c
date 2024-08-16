#include <stdio.h>
void meter_feet(int menu)
{
	double meter, feet;
	if (menu == 1) {
		//미터 => 피트
		printf("몇미터 ?");
		scanf_s("%lf", &meter);
		feet = meter * 3.28;
		printf("%.1f 피트입니다.", feet);
	}
	else if (menu == 2) {
		//피트 => 미터
		printf("몇피트 ?");
		scanf_s("%lf", &feet);
		meter = feet / 3.28;
		printf("%.1f 미터입니다.", meter);
	}
	else {
		printf("메뉴오류\n");
	}
}

double get_feet(double meter)
{
	double feet;
	feet = meter * 3.28;
	return feet;
}

double get_meter(double feet)
{
	double meter;
	meter = feet * 3.28;
	return meter;
}

int main(void) {
	// 미터, 피트 변환
	// 메뉴 구성
	int menu;
	double data;

	printf("1. 미터 => 피트  2. 피트 => 미터\n");
	printf("선택:");
	scanf_s("%d", &menu);
	// meter_feet(menu);
	if (menu == 1) {
		//미터 => 피트
		printf("몇미터 ?");
		scanf_s("%lf", &data);
		printf("%.1f 피트입니다.", get_feet(data));
	}
	else if (menu == 2) {
		//피트 => 미터
		printf("몇피트 ?");
		scanf_s("%lf", &data);
		printf("%.1f 미터입니다.", get_meter(data));
	}
	else {
		printf("메뉴오류\n");
	}
}
