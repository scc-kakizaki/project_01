#include "gtest/gtest.h"
#include "sample.cpp"


TEST(SampleTest, TestFunction1)
{
	SampleTest test;
	EXPECT_EQ(test.function1(5, 5), 10);
}

TEST(SampleTest, TestFunction2)
{
	SampleTest test;
	EXPECT_EQ(test.function2(10, 5), 5);
}

TEST(SampleTest, TestFunction3)
{
	SampleTest test;
	EXPECT_EQ(test. function3(5, 2), 10);
}

TEST(SampleTest, TestFunction4)
{
	SampleTest test;
	EXPECT_EQ(test.function4(10, 2), 5);
}
