#include <iostream>

using namespace std;

int main() {
	unsigned int n;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	unsigned int sum = 0;

	for (unsigned int i = 0; i < n; ++i) {
		unsigned int numPeople;
		cin >> numPeople;

		unsigned long long leftCandy = 0;

		for (unsigned int j = 0; j < numPeople; ++j) {
			unsigned long long candy;
			cin >> candy;
			leftCandy += candy % numPeople;
		}

		if ((leftCandy % numPeople) == 0) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}