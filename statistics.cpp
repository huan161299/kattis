#include <iostream>

using namespace std;

int subtract(int min, int max) {
	int borrow;
	while (min != 0) {
		borrow = (~max) & min;
		max = max ^ min;
		min = borrow << 1;
	}

	return max;
}

int main() {
	unsigned n, count = 0;
	int min, max;
	int temp;
	
	while (scanf("%u", &n) != EOF) {
		++count;
		min = 0;
		max = 0;
		if ((n ^ 1) == 0) {
			scanf("%i", &min);
			max = min;
		}
		else {
			scanf("%i %i", &min, &max);
			if (min > max) {
				min ^= max;
				max ^= min;
				min ^= max;
			}

			for (unsigned int i = 0; i < (n - 2); ++i) {
				scanf("%i", &temp);
				if (temp < min) min = temp;
				else if (temp > max) max = temp;
			}
		}

		printf("Case %u: %i %i %i\n", count, min, max, subtract(min, max));

	}
}