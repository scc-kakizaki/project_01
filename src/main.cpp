#include "gtest/gtest.h"

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);	// GoogleTestの初期化
	return RUN_ALL_TESTS();		// 全てのテストを実行
}
