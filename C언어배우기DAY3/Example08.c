#include <stdio.h>
// 함수는 호출하기 전에 정의 되어야 함


// 200km 거리를 시간당 80km의 속도로 운전할 때 걸리는 시간?
double gettime(int d, double s) {            // 밑에서 데이터를 전달했기에 ()에 void 사용 x  	
	// 매개변수(parameter) : d, s		// 또한 리턴을 사용했기에 앞에 void도 사용 x
	double time = d / s;

	// 결과값을 되돌려줌
	return time;
}
void main(void) {
	double speed = 80.0;
	int distance = 200;
	//main에 있는 데이터를 함수로 전달
	//gettime(): 아무런 전달이 없음
	double time = gettime(distance,speed);   //main에 있는 데이터를 함수로 전달
											// 또한 함수의 반환값을 main으로 받음
	printf("200km 거리를 시간당 80km의 속도로 운전할 때 걸리는 시간 : %.1f시간\n", time);




}