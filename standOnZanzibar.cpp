#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	unsigned short n;
	cin >> n;

	unsigned long long import;
	for (unsigned short i = 0; i < n; ++i) {
		import = 0;
		unsigned long long first, second;
		cin >> first >> second;
		while (second != 0) {
			if (first * 2 < second) import += second - first * 2;
			first = second; 
			cin >> second;
		}

		cout << import << endl;
	}

	return 0;
}