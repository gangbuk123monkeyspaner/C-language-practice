#include <stdio.h>
// �ݺ���
// ���ѹݺ�: � ����� �߻��ϰų� ���� ������ ����Ͽ� �ݺ��� ����
// (�ݺ��� Ƚ���� ����� ��� ���)
// ����ݺ� : �ݺ��� Ƚ���� ��Ȯ�� ���
// while, for

// while(�ݺ� ����){
//		�ݺ�����;
// }
// ������ ���ε��� �ݺ�
// True(1), False(0)
void test1(void)
{
	int count = 1;

	while (1) {  // ������ ��(���ѷ���)
		// A
		
		printf("hello %d\n", count);
		// B
		if (count == 10)
			break;
		count++; // count += 1
		// C
		
	}
}
void test2(void)
{
	int count = 1;
	while(count <= 10){
		printf("Korea %d\n", count);
		count++;
	}
}

void test3(void)
{
	int count = 1;
	int total = 0;
	int end;
	printf("����: ");
	scanf_s("%d", &count);
	printf("������: ");
	scanf_s("%d", &end);
	while (count <= end) {
		total += count;
		count++;
	}
	printf("�� : %d\n", total);
}



int main(void)
{
	test3();
	return 0;
}