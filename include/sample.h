class SampleTest {
	public:
		//�����o�֐��Q
		void initsettings();  //�������ݒ�
		
		int function1(int a, int b); //���Z(a + b)
		
		int function2(int a, int b); //���Z(a - b)
		
		double function3(double a, double b); //��Z(a * b) 
		
		double function4(double a, double b); //���Z(a / b)
		
		int function5(); //10��Ԃ�

		void testfunction01(int i,double d,char c); //�����o�ϐ��ɑ��
		
		bool testfunction02(int a); //�����o�ϐ�int_val�Ɉ���a�����Z

		//�����o�ϐ��Q
		int int_val;
		double double_val;
		char char_val;
};
