#include "pch.h"
#include "../Project3/SimilarityChecker.cpp"
#include <string>

using namespace std;

TEST(TestCaseName, LengthDifference_MoreThanDouble) {
	SimilarityChecker checker;
	int ret = checker.lengthCheck("AAA", "B");
	EXPECT_EQ(0, 0);
}