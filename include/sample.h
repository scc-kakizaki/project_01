class SampleTest {
	public:
		//メンバ関数群
		void initsettings();  //初期化設定
		
		int function1(int a, int b); //加算(a + b)
		
		int function2(int a, int b); //減算(a - b)
		
		double function3(double a, double b); //乗算(a * b) 
		
		double function4(double a, double b); //除算(a / b)
		
		int function5(); //10を返す

		void testfunction01(); //メンバ変数に代入
		
		bool testfunction02(int a); //メンバ変数int_valに引数aを加算

		//メンバ変数群
		int int_val;
		double double_val;
		char char_val;
};
