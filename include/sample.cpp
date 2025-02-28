#include "sample.h"

//初期設定
void SampleTest::initsettings() {
	int_val = 0;
	double_val = 0.0;
	char_val = 'A';
}

//足し算の結果を返す
int SampleTest::function1(int a, int b) {
	return a + b;
}

//引き算の結果を返す
int SampleTest::function2(int a, int b) {
	return a - b;
}

//掛け算の結果を返す
double SampleTest::function3(double a, double b) {
	return a * b;
}

//割り算の結果を返す
double SampleTest::function4(double a, double b) {
	return a / b;
}

//固定値を返す
int SampleTest::function5() {
	return 10;
}

//メンバ変数に値を代入
void SampleTest::testfunction01(int i,double d, char c) {
	int_val = i;
	double_val = d;
	char_val = c;
}

//メンバ変数int_valに引数の値を加算する
bool SampleTest::testfunction02(int a) {
	//引数の値が0より大きい値であることの確認
	if (0 < a) {
		int_val = function1(int_val, a);
		return true;
	}
	else {
		return false;
	}
}
