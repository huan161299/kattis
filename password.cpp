#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	double prob[500];

	for (int i = 0; i < n; ++i) {
		string temp;
		double input;
		cin >> temp >> input;
		prob[i] = input;
	}

	sort(prob, prob+n, greater<double>());

	double ans = 0;
	for (int i = 1; i <= n; ++i) ans += prob[i - 1] * i;

	printf("%.4f", ans);

	return 0;
}