#include <stdio.h>
// �Լ��� ȣ���ϱ� ���� ���� �Ǿ�� ��


// 200km �Ÿ��� �ð��� 80km�� �ӵ��� ������ �� �ɸ��� �ð�?
double gettime(int d, double s) {            // �ؿ��� �����͸� �����߱⿡ ()�� void ��� x  	
	// �Ű�����(parameter) : d, s		// ���� ������ ����߱⿡ �տ� void�� ��� x
	double time = d / s;

	// ������� �ǵ�����
	return time;
}
void main(void) {
	double speed = 80.0;
	int distance = 200;
	//main�� �ִ� �����͸� �Լ��� ����
	//gettime(): �ƹ��� ������ ����
	double time = gettime(distance,speed);   //main�� �ִ� �����͸� �Լ��� ����
											// ���� �Լ��� ��ȯ���� main���� ����
	printf("200km �Ÿ��� �ð��� 80km�� �ӵ��� ������ �� �ɸ��� �ð� : %.1f�ð�\n", time);




}