#include "gtest/gtest.h"
#include "sample.cpp"


class TestFixture : public testing::Test
{
	protected:
		SampleTest sample_test;
		void SetUp() {	
			//sample_test = new SampleTest();
		}

		/*virtual void TearDown() {
			delete sample_test;
			sample_test = NULL;
		}*/
};


TEST_F(TestFixture, TestFunctionA)
{
	int a = 0;
	a = sample_test.function1(a, 5);
	EXPECT_EQ(a, 5);
	a = sample_test.function2(a, 5);
	EXPECT_EQ(a, 0);
}