#include <stdio.h>
void test1(void)
{
	int a = 10;
	int b = 3;
	// a�� 11�� �����
	a += 1;
	a++; // 1����
	a--; // 1����


	// ������
	// a++ : ������ ���߿�
	// ++a : ������ ����
	printf("%d\n", b++); // 3
	printf("%d\n", b); // 4	
	
	printf("%.2jf\n", a / (double)b);
	printf("%d\n", a);
}


void test2(void)
{
	// �ڷ���(data type)
	// ����(int,4byte), �Ǽ�, ���ڿ�("hello")
	/*
	����(character) : 'A', 'B' (���� ����ǥ)
	���ڸ� �����ϴ� �ڷ���: char(1byte)
	*/ 
	char letter1 = 'A';
	char letter2;
	printf("%c\n", letter1);
	printf("���� �Է�:");
	// scanf_s("%c", &letter2, 1);
	// ��õ���
	letter2= getchar();  // ���ڸ� �Է� �޴� ������ �Լ�
	printf("%c\n", letter2);

}

void test3(void)
{
	// ������ ���� : ����(�ڵ�)�̴�
	// �ƽ�Ű�ڵ� (ASCII)
	// char�� ����� ������ ������� Ÿ��
	char letter = 'A'; // 1byte	
	char letter2 = 66;
	int letter3 = 67;
	int letter4 = 'D';


	printf("%c\n", letter);
	printf("%d\n", letter); //65

	printf("%c\n", letter2); // B
	printf("%d\n", letter2); // 66

	printf("%c\n", letter3); // c
	printf("%d\n", letter3); // 67

	printf("%c\n", letter4); // D
	printf("%d\n", letter4); // 68


}

void test4()
{
	// ���� ������ char�� ����ص� �ȴ�.
	// char(1byte) : -128 ~ 127
	unsigned char number = 255;
	// ����� ���(0~255)
	printf("%d\n", number);
}

void test5()
{
	// ���ڸ� ó���� �� ���ǻ���
	/*
	���ڿ� ������ �Է� ���� �� ����
	- ���� �Է� �� ������ �Է�
	- why? ���� �Է� �� enter Ű ����,
	���ڿ��� �ٷ� enterŰ�� ��
	int age;
	char blood;
	printf("���̴� ?");
	scanf_s("%d", &age);
	printf("������ ?");
	scanf_s("%c", &blood);
	printf("%d��, %c ��\n", age, blood);
	---> 20��,20��
	*/
	int age;
	char blood;

	printf("���̴� ?");
	scanf_s("%d", &age);
	//getchar();  // �Է¹����� �ٹٲ��� ���ش�
	printf("������ ?");
	scanf_s("\n%c", &blood); // �ٹٲ��� �Է�

	printf("%d��, %c ��\n", age, blood);
}
void test6(void)
{
	int a = 10;
	printf("size = %d\n", sizeof(a));
}
void test7(void)
{
	float a = 3.14f;
	// 4byte ũ���� �Ǽ���
	// ����� �޸� ������ �Ҵ���� �� ũ�Ⱑ ������
	// ����(4byte), �Ǽ�(8byte)
	// ����� �ڷ����� ������ �� �ִ�.4

	printf("%.2f\n", a);

}

void test8(void)
{
	// ������ ���(constant)ȭ
	const int a = 10;
	//a = 100;  --> ����Ұ���
	printf("%d\n", a);
}
int main(void) 
{
	test8();
	return 0;
}