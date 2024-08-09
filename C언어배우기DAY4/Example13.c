#include <stdio.h>
void test1(void)
{
	int a = 10;
	int b = 3;
	// a를 11로 만들기
	a += 1;
	a++; // 1증가
	a--; // 1감소


	// 차이점
	// a++ : 증가를 나중에
	// ++a : 증가를 먼저
	printf("%d\n", b++); // 3
	printf("%d\n", b); // 4	
	
	printf("%.2jf\n", a / (double)b);
	printf("%d\n", a);
}


void test2(void)
{
	// 자료형(data type)
	// 정수(int,4byte), 실수, 문자열("hello")
	/*
	문자(character) : 'A', 'B' (작은 따음표)
	문자를 저장하는 자료형: char(1byte)
	*/ 
	char letter1 = 'A';
	char letter2;
	printf("%c\n", letter1);
	printf("문자 입력:");
	// scanf_s("%c", &letter2, 1);
	// 추천방법
	letter2= getchar();  // 문자를 입력 받는 별도의 함수
	printf("%c\n", letter2);

}

void test3(void)
{
	// 문자의 진실 : 숫자(코드)이다
	// 아스키코드 (ASCII)
	// char는 사실은 정수를 담기위한 타입
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
	// 작은 정수는 char를 사용해도 된다.
	// char(1byte) : -128 ~ 127
	unsigned char number = 255;
	// 양수만 허용(0~255)
	printf("%d\n", number);
}

void test5()
{
	// 문자를 처리할 때 주의사항
	/*
	문자와 정수를 입력 받을 때 순서
	- 문자 입력 후 정수를 입력
	- why? 정수 입력 후 enter 키 사용시,
	문자열에 바로 enter키가 들어감
	int age;
	char blood;
	printf("나이는 ?");
	scanf_s("%d", &age);
	printf("혈액형 ?");
	scanf_s("%c", &blood);
	printf("%d세, %c 형\n", age, blood);
	---> 20세,20형
	*/
	int age;
	char blood;

	printf("나이는 ?");
	scanf_s("%d", &age);
	//getchar();  // 입력버퍼의 줄바꿈을 없앤다
	printf("혈액형 ?");
	scanf_s("\n%c", &blood); // 줄바꿈후 입력

	printf("%d세, %c 형\n", age, blood);
}
void test6(void)
{
	int a = 10;
	printf("size = %d\n", sizeof(a));
}
void test7(void)
{
	float a = 3.14f;
	// 4byte 크기의 실수형
	// 상수도 메모리 공간을 할당받을 때 크기가 정해짐
	// 정수(4byte), 실수(8byte)
	// 살수도 자료형을 지정할 수 있다.4

	printf("%.2f\n", a);

}

void test8(void)
{
	// 변수를 상수(constant)화
	const int a = 10;
	//a = 100;  --> 변경불가능
	printf("%d\n", a);
}
int main(void) 
{
	test8();
	return 0;
}