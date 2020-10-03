#include <iostream>

using namespace std;

int main() {
	double c;
	cin >> c;
	if (c > 1) c = 1;
	double answer = c * c / 4;

	printf("%.6g", answer);

	return 0;
}