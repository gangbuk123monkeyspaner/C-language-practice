#include <stdio.h>
void meter_feet(int menu)
{
	double meter, feet;
	if (menu == 1) {
		//���� => ��Ʈ
		printf("����� ?");
		scanf_s("%lf", &meter);
		feet = meter * 3.28;
		printf("%.1f ��Ʈ�Դϴ�.", feet);
	}
	else if (menu == 2) {
		//��Ʈ => ����
		printf("����Ʈ ?");
		scanf_s("%lf", &feet);
		meter = feet / 3.28;
		printf("%.1f �����Դϴ�.", meter);
	}
	else {
		printf("�޴�����\n");
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
	// ����, ��Ʈ ��ȯ
	// �޴� ����
	int menu;
	double data;

	printf("1. ���� => ��Ʈ  2. ��Ʈ => ����\n");
	printf("����:");
	scanf_s("%d", &menu);
	// meter_feet(menu);
	if (menu == 1) {
		//���� => ��Ʈ
		printf("����� ?");
		scanf_s("%lf", &data);
		printf("%.1f ��Ʈ�Դϴ�.", get_feet(data));
	}
	else if (menu == 2) {
		//��Ʈ => ����
		printf("����Ʈ ?");
		scanf_s("%lf", &data);
		printf("%.1f �����Դϴ�.", get_meter(data));
	}
	else {
		printf("�޴�����\n");
	}
}
