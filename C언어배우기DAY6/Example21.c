#include <stdio.h>

void test1(void)
{
	// 10���� ������ �Է¹޾� �� ���ϱ�
	int count = 1;
	int score;
	int total = 0;
	while (count <= 10) {
		printf("���� �Է�: ");
		scanf_s("%d", &score);
		total += score;
		count++;

	}
	printf("�� : %d", total);
}

void test1(void)
{
	// 10���� ������ �Է¹޾� �հ� ���հ� �� ���ϱ�
	int count = 1;
	int score;
	int pass = 0;
	int failure = 0;
	while (count <= 10) {
		printf("���� �Է�: ");
		scanf_s("%d", &score);
		if (score >= 80) {
			pass++;
		}
		else {
			failure++;
		}
		count++;

	}
	printf("�հ� : %d","���հ� : %d", pass, failure );
}

void test3(void) 
{
	// �ݺ��� Ƚ���� �������� ����
	// ������ ������ ������ �Է� �޾� �� ���ϱ�
	int score;
	int total = 0;
	int count = 0;
	while (1) {
		printf("���� (����:-1):");
		scanf_s("%d", &score);
		if (score == -1) {
			break;
		}
		total += score;
		count++;
	}
	
	

}

int main(void)
{
	test1();
	return 0;
}