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
	//�e�N���X�̃����o�ϐ��̈�v�m�F
	EXPECT_EQ(sample_test.int_val, 0);
	EXPECT_EQ(sample_test.double_val, 0.0);
	EXPECT_EQ(sample_test.char_val, 'A');
}

//�֐������s������̃N���X���ϐ��̊m�F
TEST_F(TestFixture, TestFunctionB)
{
	int i = 5;
	double d = 5.5;
	char c = 'B';
	//�e�N���X�̃����o�ϐ��̈�v�m�F
	EXPECT_EQ(sample_test.int_val, 0);
	EXPECT_EQ(sample_test.double_val, 0.0);
	EXPECT_EQ(sample_test.char_val, 'A');

	//�֐��̎��s
	sample_test.testfunction01(i, d, c);

	//�e�N���X�̃����o�ϐ��̈�v�m�F
	EXPECT_EQ(sample_test.int_val, i);
	EXPECT_EQ(sample_test.double_val, d);
	EXPECT_EQ(sample_test.char_val, c);
}

//�֐��̎��s���ʂ̊m�F
TEST_F(TestFixture, TestFunctionC)
{
	//�߂�l��true���̊m�F
	EXPECT_TRUE(sample_test.testfunction02(5));

	//�����o�ϐ�int_val�̒l�m�F
	EXPECT_EQ(sample_test.int_val, 5);

	//�߂�l��false���̊m�F
	EXPECT_FALSE(sample_test.testfunction02(-5));

	//�����o�ϐ�int_val�̒l�m�F
	EXPECT_EQ(sample_test.int_val, 5);
}

/*

//�e���v���[�g

//�e�X�g�֐��̍쐬
TEST_F(TestFixture, TestFunctionXXX)
{
}

//�A�T�[�V����
	EXPECT_TRUE(condition);			:�@condition == TRUE
	EXPECT_FALSE(condition);		:�@condition == FALSE
	EXPECT_EQ(val1,val2);			:�@val1 == val2  ��std::string��r�\
	EXPECT_NE(val1,val2);			:�@val1 != val2  ��std::string��r�\
	EXPECT_LT(val1,val2);			:�@val1 < val2  ��std::string��r�\
	EXPECT_LE(val1,val2);			:�@val1 <= val2  ��std::string��r�\
	EXPECT_GT(val1,val2);			:�@val1 > val2  ��std::string��r�\
	EXPECT_GE(val1,val2);			:�@val1 >= val2  ��std::string��r�\
	EXPECT_STREQ(str1,str2);		:�@2�̕����񂪓������@��C������p(char*��)
	EXPECT_STRNE(str1,str2);		:�@2�̕����񂪓������Ȃ��@��C������p(char*��)
	EXPECT_STRCASEEQ(str1,str2);	:�@2�̕����񂪓�����(�啶��/�������𖳎�)�@��C������p(char*��)
	EXPECT_STRCASENE(str1,str2);	:�@2�̕����񂪓������Ȃ�(�啶��/�������𖳎�)�@��C������p(char*��)
	EXPECT_THROW(func,exception);	:�@func���w�肵��exception�𓊂���
	EXPECT_ANY_THROW(func);			:  func�����炩�̗�O�𓊂���
	EXPECT_NO_THROW(func);			:  func����ؗ�O�𓊂��Ȃ�
	EXPECT_FLOAT_EQ(val1,val2);		:�@2��float�l���قړ������@�@��4ULPs�ȓ�
	EXPECT_DOUBLE_EQ(val1,val2);	:�@2��double�l���قړ������@��4ULPs�ȓ�
	EXPECT_NEAR(val1,val2,abs);		:�@val1��val2�̍���abs�ȓ�
	EXPECT_THAT(val,matcher);		:�@googlemock��Matcher���g�p����
*/
