#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char s[102], p[102];

	int sLen = 0, pLen = 0;
	
	//read input -------------------------------------
	s[sLen] = getchar();
	while (s[sLen] != '\n') {
		++sLen;
		s[sLen] = getchar();
	}
	s[sLen] = 0;

	p[pLen] = getchar();
	while (p[pLen] != '\n') {
		++pLen;
		p[pLen] = getchar();
	}
	p[pLen] = 0;

	//case 1 --------------------------------------------
	if (strcmp(s,p) == 0) {
		cout << "Yes";
		return 0;
	}

	//case 2 --------------------------------------------
	if (sLen - 1 == pLen && s[0] >= 48 && s[0] <= 57) {
		int i = 1;
		while (s[i] == p[i - 1] && i <= sLen) ++i;
		if (--i - 1 == pLen) {
			cout << "Yes";
			return 0;
		}
	}

	//case 3 --------------------------------------------
	if (sLen - 1 == pLen && s[sLen - 1] >= 48 && s[sLen - 1] <= 57) {
		int i = 0;
		while (s[i] == p[i] && i <= sLen - 2) ++i;
		if (i == pLen) {
			cout << "Yes";
			return 0;
		}
	}

	//case 4 --------------------------------------------
	for (int i = 0; i < pLen; ++i) {
		if (p[i] >= 65 && p[i] <= 90) p[i] += 32;
		else if (p[i] >= 97 && p[i] <= 122) p[i] -= 32;
	}

	if (strcmp(s, p) == 0) {
		cout << "Yes";
		return 0;
	}


	cout << "No";
	return 0;
}
