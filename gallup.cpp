#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

#define LIMIT 20
int n;
double percent[LIMIT];

int input(void) {
	cin >> n;
	if (n == 0) return -1;
	else for (int i = 0; i < n; ++i) {
		cin >> percent[i];
	}

	return 0;
}

int countDecimals(double x) {
	int count = 0;
	double decimals = x - round(x);
	while (round(x * 10) != 0) {
		x *= 10;
		x -= round(x);
		++count;
	}
	return count;
}

int main() {
	while (input() != -1) {
		double sum = 0;
		int decimals = countDecimals(percent[0]);
		for (int i = 0; i < n; ++i) sum += percent[i];
		int k = 1;
		while (k < 10000) {

		}
	}
	return 0;
}