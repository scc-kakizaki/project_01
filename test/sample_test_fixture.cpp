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
	//各クラスのメンバ変数の一致確認
	EXPECT_EQ(sample_test.int_val, 0);
	EXPECT_EQ(sample_test.double_val, 0.0);
	EXPECT_EQ(sample_test.char_val, 'A');
}

//関数を実行した後のクラス内変数の確認
TEST_F(TestFixture, TestFunctionB)
{
	int i = 5;
	double d = 5.5;
	char c = 'B';
	//各クラスのメンバ変数の一致確認
	EXPECT_EQ(sample_test.int_val, 0);
	EXPECT_EQ(sample_test.double_val, 0.0);
	EXPECT_EQ(sample_test.char_val, 'A');

	//関数の実行
	sample_test.testfunction01(i, d, c);

	//各クラスのメンバ変数の一致確認
	EXPECT_EQ(sample_test.int_val, i);
	EXPECT_EQ(sample_test.double_val, d);
	EXPECT_EQ(sample_test.char_val, c);
}

//関数の実行結果の確認
TEST_F(TestFixture, TestFunctionC)
{
	//戻り値がtrueかの確認
	EXPECT_TRUE(sample_test.testfunction02(5));

	//メンバ変数int_valの値確認
	EXPECT_EQ(sample_test.int_val, 5);

	//戻り値がfalseかの確認
	EXPECT_FALSE(sample_test.testfunction02(-5));

	//メンバ変数int_valの値確認
	EXPECT_EQ(sample_test.int_val, 5);
}

/*

//テンプレート

//テスト関数の作成
TEST_F(TestFixture, TestFunctionXXX)
{
}

//アサーション
	EXPECT_TRUE(condition);			:　condition == TRUE
	EXPECT_FALSE(condition);		:　condition == FALSE
	EXPECT_EQ(val1,val2);			:　val1 == val2  ※std::string比較可能
	EXPECT_NE(val1,val2);			:　val1 != val2  ※std::string比較可能
	EXPECT_LT(val1,val2);			:　val1 < val2  ※std::string比較可能
	EXPECT_LE(val1,val2);			:　val1 <= val2  ※std::string比較可能
	EXPECT_GT(val1,val2);			:　val1 > val2  ※std::string比較可能
	EXPECT_GE(val1,val2);			:　val1 >= val2  ※std::string比較可能
	EXPECT_STREQ(str1,str2);		:　2つの文字列が等しい　※C文字列用(char*等)
	EXPECT_STRNE(str1,str2);		:　2つの文字列が等しくない　※C文字列用(char*等)
	EXPECT_STRCASEEQ(str1,str2);	:　2つの文字列が等しい(大文字/小文字を無視)　※C文字列用(char*等)
	EXPECT_STRCASENE(str1,str2);	:　2つの文字列が等しくない(大文字/小文字を無視)　※C文字列用(char*等)
	EXPECT_THROW(func,exception);	:　funcが指定したexceptionを投げる
	EXPECT_ANY_THROW(func);			:  funcが何らかの例外を投げる
	EXPECT_NO_THROW(func);			:  funcが一切例外を投げない
	EXPECT_FLOAT_EQ(val1,val2);		:　2つのfloat値がほぼ等しい　　※4ULPs以内
	EXPECT_DOUBLE_EQ(val1,val2);	:　2つのdouble値がほぼ等しい　※4ULPs以内
	EXPECT_NEAR(val1,val2,abs);		:　val1とval2の差がabs以内
	EXPECT_THAT(val,matcher);		:　googlemockのMatcherを使用する
*/
