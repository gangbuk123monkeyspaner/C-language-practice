#include <stdio.h>

void test1(void)
{
	// for��: �ݺ��� Ƚ���� ��Ȯ�� ��� ���� ���
	// for(�ʱⰪ; �ݺ�����; ����){�ݺ�����}
	// for �� ���� ���� ���� ���� : for(;;)- > ���ѷ���
	// �ʱⰪ�� �ش��ϴ� ������ �ۿ� ���� �ؾ���
	int count;
	int total = 0;
	for (count =1; count <= 10;count++) {
		printf("Hello %d\n",count);
		total += count;

	}
	printf("%d\n", total);
}

void test2(void)
{
	// 100~500������ 3�� ��� ���� ���ϱ�
	int count;
	int start = 100;
	int end = 500;
	int answer = 0;
	for (count = start; count <= end; count++) {
		if (count % 3 == 0)
			answer++;

	}
	printf("%d\n", answer);
}

int main(void)
{
	test2();
	return 0;
}