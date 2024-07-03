#include <iostream>
#include <string>

using namespace std;

class SimilarityChecker {
public:
	int lengthCheck(string str1, string str2) {
		if ((str1.length() > str2.length()) && 
			(str1.length() > str2.length() * 2)) {
			return 0;
		}
	}

};