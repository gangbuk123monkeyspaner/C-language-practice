#include <stdio.h>

void test1(void)
{
	int hour;
	printf("�ð��Է�:");
	scanf_s("%d", &hour);
	// and (&&)
	// �� ���� ������ ��� ���� ��� ��
	if (hour >= 0 && hour < 12)
		printf("morning\n");
	else if (hour >= 12 && hour < 18)
		printf("afternoon\n");
	else if (hour >= 18 && hour <= 24)
		printf("evening\n");
	else
		printf("error\n");
}
void test2(void)
{
	// ���ҳ� �౸�� ����
	// ���� and (age: 10~12)
	// ��(m), ��(f)
	char gender;
	int age;
	
	printf("����: m, ����: f / ���� �Է�:");
	gender = getchar();
	if (gender == 'f') {
		printf("����:");
		scanf_s("%d", &age);
		if (age >= 10 && age <= 12)
			printf("�Դ� ����\n");
		else {
			printf("���̰� ���ǿ� ���� �ʽ��ϴ�.\n");
		}
	}
	else{
		printf("������ �����մϴ�\n");
	}
}


int main(void)
{
	test2();
	return 0;
}