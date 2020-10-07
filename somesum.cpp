#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	if (n & 1) cout << "Either";
	else if ((n / 2) & 1) cout << "Odd";
	else cout << "Even";

	return 0;
}