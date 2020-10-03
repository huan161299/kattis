#include <iostream>
#include <string>

using namespace std;

int main() {
	unsigned short m, n;
	scanf("%hu %hu", &m, &n);

	unsigned short u,l,r,d;
	scanf("%hu %hu %hu %hu", &u, &l, &r, &d);

	string dataCrossword[10];
	
	getchar();

	for (int i = 0; i < m; ++i) getline(cin, dataCrossword[i]);

	string first = "";
	string second = "";

	unsigned short lenInput = 0;
	while (lenInput < n + l + r) {
		first += "#.";
		second += ".#";
		++++lenInput;
		if (lenInput > n + l + r) {
			first.erase(n + l + r, 1);
			second.erase(n + l + r, 1);
		}
	}

	unsigned short even = -1;

	for (unsigned int i = 0; i < u; ++i) {
		++even;
		if (even % 2 == 0) cout << first << endl;
		else cout << second << endl;
	}
	for (unsigned int i = 0; i < m; ++i) {
		string crossWord;
		++even;

		if (even % 2 == 0) crossWord = first;
		else crossWord = second;

		crossWord.replace(l, n, dataCrossword[i]);
		cout << crossWord << endl;
	}

	for (unsigned int i = 0; i < d; ++i) {
		++even;
		if (even % 2 == 0) cout << first << endl;
		else cout << second << endl;
	}

	return 0;
}