#include <iostream>
#include <string>

using namespace std;

class SimilarityChecker {
public:
	double lengthCheck(string str1, string str2) {
		int length1 = str1.length();
		int length2 = str2.length();

		if (length1 > length2 * 2 || length2 > length1 * 2) {
			return 0;
		}
		if (length1 == length2) {
			return LENGTH_MAX_SCORE;
		}

		double maxLength = static_cast<double>(max(length1, length2));
		double minLength = static_cast<double>(min(length1, length2));
		double gap = maxLength - minLength;

		return (1.0 - (gap / minLength)) * LENGTH_MAX_SCORE; 
	}

private:
	const double LENGTH_MAX_SCORE = 60;
};