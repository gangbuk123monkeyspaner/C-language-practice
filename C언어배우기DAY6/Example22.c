#include <stdio.h>
void test1(void)
{
	// �߰��� ���ϱ�
	int start = 1;
	int end = 7;
	while (start < end) {
		start++;
		end--;
	}
	printf("�߰��� : %d\n", end);
}
void test2(void)
{
	// ���� �����ϱ�
	int hp = 60;
	int attack = 30;
	int recovery = 10;
	int answer = 0;
	while (1) {
		answer++;
		hp -= attack;
		if (hp <= 0)
			break;
		hp += recovery;
		
	}
	printf("%d �� ���� ���� �˴ϴ�.", answer);
}

void test3(void)
{
	// �־��� �������� �� �ڸ��� �� ���ϱ�
	int number;
	int total = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &number);
	while (number != 0) {
		total += number % 10;
		number = number / 10;
		

	}
	printf("%d", total);
}




int main(void)
{
	test2();
	return 0;
}