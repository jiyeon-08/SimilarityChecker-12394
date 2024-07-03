#include "pch.h"
#include "../Project3/SimilarityChecker.cpp"
#include <string>

using namespace std;

class SimilarityCheckerFixture : public testing::Test {
public:
	SimilarityChecker checker;
};

TEST_F(SimilarityCheckerFixture, LengthDifference_MoreThanDouble) {
	int ret = checker.lengthCheck("AAA", "B");
	EXPECT_EQ(0, ret);
}

TEST_F(SimilarityCheckerFixture, SameLength) {
	int ret = checker.lengthCheck("AAA", "AAA");
	EXPECT_EQ(60, ret);
}
TEST_F(SimilarityCheckerFixture, PartialScore) {
	int ret = checker.lengthCheck("AAA", "AA");
	EXPECT_EQ(30, ret);
}