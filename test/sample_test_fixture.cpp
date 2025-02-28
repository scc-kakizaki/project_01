#include "gtest/gtest.h"
#include "sample.cpp"


class TestFixture : public testing::Test
{
	protected:
		SampleTest sample_test;
		virtual void SetUp() {	
			sample_test.initsettings();
		}

		/*virtual void TearDown() {
			delete sample_test;
			sample_test = NULL;
		}*/
};

//�����ݒ�(sample_test.initsettings())�ŃN���X���̕ϐ����������ł��Ă��邩�̊m�F
TEST_F(TestFixture, TestFunctionA)
{
	//�e�N���X�̃����o�ϐ��̔�r�m�F
	EXPECT_EQ(sample_test.int_val, 0);
	EXPECT_EQ(sample_test.double_val, 0.0);
	EXPECT_EQ(sample_test.char_val, 'A');
}

//�֐������s������̃N���X���ϐ��̊m�F
TEST_F(TestFixture, TestFunctionB)
{
	//�֐��̎��s
	sample_test.testfunction01();

	//�e�N���X�̃����o�ϐ��̔�r�m�F
	EXPECT_EQ(sample_test.int_val, 5);
	EXPECT_EQ(sample_test.double_val, 5.5);
	EXPECT_EQ(sample_test.char_val, 'B');
}

//�֐��̎��s���ʂ̊m�F
TEST_F(TestFixture, TestFunctionC)
{
	//�߂�l��true���̊m�F
	EXPECT_TRUE(sample_test.testfunction02(5));

	//�߂�l��false���̊m�F
	EXPECT_FALSE(sample_test.testfunction02(0));
	
}