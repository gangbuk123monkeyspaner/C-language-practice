#include <stdio.h>
int main(void) {
	// ��ü�ʸ� �Է� �޾� �ú��ʷ� ��Ÿ����
	int full_sec;
	int hour, minute, second;
	printf("��ü��?");
	scanf_s("%d", &full_sec);

	hour = full_sec / 3600;
	minute = full_sec % 3600 / 60;
	second = full_sec % 3600 % 60;
	printf("%d�ð� %d�� %d��\n", hour, minute, second);
	return 0;
}