#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	unsigned long long a, b;
	while (cin >> a >> b) {
		long long c = a - b;
		cout << abs(c) << endl;
	}
	return 0;
}