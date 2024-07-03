#include <iostream>
#include <string>

using namespace std;

class SimilarityChecker {
public:
	int lengthCheck(string str1, string str2) {
		int length1 = str1.length();
		int length2 = str2.length();

		if (length1 > length2 * 2 ||
			length2 > length1 * 2) {
			return 0;
		}
		if (length1 == length2) {
			return LENGTH_MAX_SCORE;
		}
		double gap, b;
		if (length1 > length2) {
			gap = length1 - length2;
			b = length2;
		}
		else {
			gap = length2 - length1;
			b = length1;
		}
		return (1 - (gap / b)) * 60;
		
	}
private:
	const int LENGTH_MAX_SCORE = 60;
};