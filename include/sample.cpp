#include "sample.h"

//�����ݒ�
void SampleTest::initsettings() {
	int_val = 0;
	double_val = 0.0;
	char_val = 'A';
}

//�����Z�̌��ʂ�Ԃ�
int SampleTest::function1(int a, int b) {
	return a + b;
}

//�����Z�̌��ʂ�Ԃ�
int SampleTest::function2(int a, int b) {
	return a - b;
}

//�|���Z�̌��ʂ�Ԃ�
double SampleTest::function3(double a, double b) {
	return a * b;
}

//����Z�̌��ʂ�Ԃ�
double SampleTest::function4(double a, double b) {
	return a / b;
}

//�Œ�l��Ԃ�
int SampleTest::function5() {
	return 10;
}

//�����o�ϐ��ɓK���Ȓl����
void SampleTest::testfunction01(int i,double d, char c) {
	int_val = i;
	double_val = d;
	char_val = c;
}

//�����o�ϐ�int_val�Ɉ����̒l�����Z����
bool SampleTest::testfunction02(int a) {
	//�����̒l��0���傫���l�ł��邱�Ƃ̊m�F
	if (0 < a) {
		int_val = function1(int_val, a);
		return true;
	}
	else {
		return false;
	}
}