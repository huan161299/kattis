#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	unsigned int n;
	cin >> n;

	vector <unsigned int> data;

	for (unsigned int i = 0; i < n; ++i) {
		unsigned int a;
		cin >> a;
		data.push_back(a);
	}

	sort(data.begin(), data.end(), greater<unsigned int>());

	unsigned int sum = 0;
	unsigned count = 0;
	for (auto i = data.begin(); i != data.end(); ++i) {
		++count;
		if (count == 3) {
			count = 0;
			continue;
		}
		else sum += *i;
	}

	cout << sum;
		return 0;
}