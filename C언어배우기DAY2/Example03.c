#include <stdio.h>

// �Լ��� ����(prototype)
// �Լ��� ������ �̸� ǥ���� ��� �Լ��� ��ġ�� ����� ����
void japan(void);
void korea(void);

void main(void) {
	printf("main Hello\n");
	// printf()�� ����� �� ����Ű(�ٹٲ�)�� ���Ե��� ����
	// �ٹٲ�('\n')�� ǥ��

	// korea()�Լ��� ȣ��(call)
	korea();  // �Լ��� ���� �� void�� �ִ°���, �Լ� ȣ�� �ÿ��� ���� ����
	printf("Bye main\n");
}

// C�ڵ忡�� �ϳ��� ������Ʈ���� main()�� �ϳ��� �����ؾ� ��
void japan(void) {
	printf("Hello Japan\n");
	printf("Bye Japan\n");
}
void korea(void) {
	printf("Hello Korea\n");
	// �Լ��� ȣ���� ��� �ݵ�� �Լ��� ���� ���ǵǾ�� ��
	japan();
	printf("Bye Korea\n");
}

