#include <iostream>
#include <map>

using namespace std;

int main() {
	int a, b, c;
	scanf("%i %i %i", &a, &b, &c);

	int ans = 0;
	multimap<int, bool> timestamp;

	for (int i = 1; i <= 3; ++i) {
		int first, last;
		scanf("%i %i", &first, &last);
		timestamp.insert(pair<int, bool>(first, true));
		timestamp.insert(pair<int, bool>(last, false));
	}

	multimap<int, bool>::iterator parking;
	parking = timestamp.begin();

	int numCar = 0;

	while (parking != timestamp.end()) {
		if (next(parking, 1) == timestamp.end()) break;

		auto parking2 = next(parking, 1);

		while ((parking2->first == parking->first)) {
			if (parking->second) ++numCar;
			else --numCar;

			parking = parking2;
			parking2 = next(parking, 1);

			if (next(parking2, 1) == timestamp.end()) break;

		}

		if (parking->second) ++numCar;
		else --numCar;

		int price;

		switch (numCar) {
		case 0:
			price = 0;
			break;
		case 1:
			price = a;
			break;
		case 2:
			price = b*2;
			break;
		case 3:
			price = c*3;
			break;
		}

		ans += (parking2->first - parking->first) * price;

		++parking;
	}

	printf("%i", ans);

	return 0;
}