#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main() {
	string input;
	getline(cin, input);

	unsigned short int strLength = input.length() / 3;

	string str1, str2, str3;
	
	for (unsigned short i = 0; i < input.length(); ++i) {
		if (i < strLength)
			str1 += input.at(i);
		if ((i < strLength * 2) && (i >= strLength))
			str2 += input.at(i);
		if (i == strLength * 2 - 1)
			if (str1.compare(str2) == 0) {
				cout << str1;
				return 0;
			}

		if (i >= strLength * 2)
			str3 += input.at(i);
	}

	cout << str3;
	return 0;
}