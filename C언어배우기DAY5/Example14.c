#include <stdio.h>
void test1()
{
	// �����Ǵ�
	int age;
	printf("���� ?");
	scanf_s("%d", &age);

	//�Ǵ�
	if (age >= 19) {
		printf("�����Դϴ�.\n");  // ������ ������ �ѹ����̶�� {} ���� ����
	}
}
void test2()
{
	// �����Ǵ�
	int age;
	printf("���� ?");
	scanf_s("%d", &age);

	//�Ǵ�
	if (age >= 19) {
		printf("�����Դϴ�.\n");  // ������ ������ �ѹ����̶�� {} ���� ����
	}
	else {
		printf("�̼������Դϴ�.\n");
	}
}

void test3()
{
	// �����Ǵ�
	int age;
	printf("���� ?");
	scanf_s("%d", &age);

	//�������� ������ �Ǵ� (����, û�ҳ�, ���, ����)
	if (age >= 19) {
		printf("�����Դϴ�.\n");  // ������ ������ �ѹ����̶�� {} ���� ����
	}
	else {
		if (age >= 14) {
			printf("�̼������Դϴ�.\n");
		}
		else {
			if (age >= 8) {
				printf("����Դϴ�.\n");
			}
			else {
				printf("�����Դϴ�.\n");
			}
		}
	}
}

void test4()
{
	// �����Ǵ�
	int age;
	printf("���� ?");
	scanf_s("%d", &age);

	// else�� if ��� ǥ��
	if (age >= 19) {
		printf("�����Դϴ�.\n");  // ������ ������ �ѹ����̶�� {} ���� ����
	}
	else if (age >=14 ){
		printf("û�ҳ��Դϴ�.\n");
	}
	else if (age >= 8) {
		printf("����Դϴ�.\n");
	}
	else {
		printf("�����Դϴ�.\n");
	}
}







int main(void)
{
	test4();
	return 0;
}
