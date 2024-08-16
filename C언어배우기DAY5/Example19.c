# include <stdio.h>

// swith case 문
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
	
	// switch문의 조건은 정수이다
	// 조건에 맞는 case문으로 이동
	// case로 이동하지만 멈추지는 않음
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
	default:    // 맞는 case가 없을 경우
		printf("none\n");
	}
}

int main(void)
{
	test1();
	return 0;
}