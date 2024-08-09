#include <stdio.h>



// 200km 거리를 시간당 80km의 속도로 운전할 때 걸리는 시간?

void main(void) {
	int speed = 80;
	int distance = 200;
	double time = distance / speed;   //정수를 정수로 나오면 값도 무조건 정수, 즉 몫만 나옴
									// 따라서 두 변수 중 한 가지는 실수로 설정해야함
	printf("200km 거리를 시간당 80km의 속도로 운전할 때 걸리는 시간 : %.2f\n", time);
	printf("%f\n", 10 / 3.0);   // (/): 나눈 몫 -> 3.333333..(x), 3(o) 

	

}