#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main() {
	unsigned short a, b, c;
	char input;

	cin >> a >> b;
	if (a > b) swap(a, b);
	cin >> c;
	if ((c < b) && (c < a)) {
		swap(a, c);
		swap(b, c);
	}
	else if (c < b) swap(b, c);

	for (int i = 0; i < 3; ++i) {
		cin >> input;
		
		if (input == 65)
			cout << a << " ";
		else if (input == 66)
			cout << b << " ";
		else if (input == 67)
			cout << c << " ";
	}

	return 0;
}