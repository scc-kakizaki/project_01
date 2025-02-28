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

//初期設定(sample_test.initsettings())でクラス内の変数が初期化できているかの確認
TEST_F(TestFixture, TestFunctionA)
{
	//各クラスのメンバ変数の比較確認
	EXPECT_EQ(sample_test.int_val, 0);
	EXPECT_EQ(sample_test.double_val, 0.0);
	EXPECT_EQ(sample_test.char_val, 'A');
}

//関数を実行した後のクラス内変数の確認
TEST_F(TestFixture, TestFunctionB)
{
	//関数の実行
	sample_test.testfunction01();

	//各クラスのメンバ変数の比較確認
	EXPECT_EQ(sample_test.int_val, 5);
	EXPECT_EQ(sample_test.double_val, 5.5);
	EXPECT_EQ(sample_test.char_val, 'B');
}

//関数の実行結果の確認
TEST_F(TestFixture, TestFunctionC)
{
	//戻り値がtrueかの確認
	EXPECT_TRUE(sample_test.testfunction02(5));

	//戻り値がfalseかの確認
	EXPECT_FALSE(sample_test.testfunction02(0));
	
}