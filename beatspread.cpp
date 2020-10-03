#include <iostream>

using namespace std;

int main() {
	int n, sum, dif;

	scanf("%i", &n);
	
	while (n != 0) {
		--n;
		scanf("%i %i", &sum, &dif);
		if (sum < dif) printf("impossible\n");
		else {
			int a = sum, match;

			while (dif != 0) {
				match = a & dif;
				a = a ^ dif;
				dif = match << 1;
			}

			if ((a >> 1) << 1 != a) printf("impossible\n");

			else {
				printf("%i ", a >> 1);
				a = a >> 1;

				while (a != 0) {
					match = (~sum) & a;
					sum = sum ^ a;
					a = match << 1;
				}

				printf("%i\n", sum);
			}
		}
	}

	return 0;
}