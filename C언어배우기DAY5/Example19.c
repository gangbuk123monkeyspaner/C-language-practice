# include <stdio.h>

// swith case ��
void test1(void)
{
	int number = 1;
	if (number == 1)
		printf("one\n");
	else if (number == 2)
		printf("two\n");
	else if (number == 3)
		printf("three\n");
	else
		printf("none\n");
}

void test2(void)
{
	int number = 1;
	
	// switch���� ������ �����̴�
	// ���ǿ� �´� case������ �̵�
	// case�� �̵������� �������� ����
	switch (number) {
	case 1:
		printf("one\n");
		break;
	case 2:
		printf("two\n");
		break;
	case 3:
		printf("three\n");
		break;
	default:    // �´� case�� ���� ���
		printf("none\n");
	}
}

int main(void)
{
	test1();
	return 0;
}