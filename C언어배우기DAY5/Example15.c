#include <stdio.h>
void test1(void)
{
	// ¦�� Ȧ�� �Ǵ�
	int number;
	printf("���� ? ");
	scanf_s("%d", &number);

	if (number % 2 == 0) {
		printf("¦�� �Դϴ�.");
	}
	else {
		printf("Ȧ�� �Դϴ�.");
	}

}

void test2()
{
	// ��Ʈ�� ���αݾ� ���ϱ�
	// ���� �ݾ��� 10���� �̻� : 10% ����
	// ���� �ݾ��� 20���� �̻� : 20% ����
	// 10���� �̸� �״��
	int price;
	double pay;

	printf("���� �ݾ� ? ");
	scanf_s("%d", &price);
	
	if (price >= 200000) {
		pay = price * 0.8;
	}
	else if (price >= 100000) {
		pay = price * 0.9;
		
	}
	else {
		pay = price;
		
	}
	printf("���ұݾ�:%.1f\n", pay);
}
int main(void) {
	test1();
	return 0;
}