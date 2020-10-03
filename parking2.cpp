#include <iostream>

using namespace std;

int main() {

	int t;
	scanf("%i", &t);

	for (int testCase = 0; testCase < t; ++testCase) {
		int map[20];
		int n, min, max;
		min = 99;
		max = -1;
		scanf("%i", &n);
		for (int i = 0; i < n; ++i) {
			int input;
			scanf("%i", &input);
			map[i] = input;
			if (input > max) max = input;
			if (input < min) min = input;
		}

		int ans = 200;

		for (int i = 0; i < n; ++i) {
			int dis = (max - map[i]) * 2 + (map[i] - min) * 2;
			if (ans > dis) ans = dis;
		}

		printf("%i\n", ans);
	}

	return 0;
}