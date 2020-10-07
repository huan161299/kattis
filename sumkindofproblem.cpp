#include <iostream> 

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int p;
	cin >> p;

	while (p--) {
		int k, n;
		cin >> k >> n;

		cout << k << " " << n * (n + 1) / 2 << " " << n * n << " " << n * (n + 1) << '\n';
	}

	return 0;
}