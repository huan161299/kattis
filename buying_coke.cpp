#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

#define LIMIT 1201


int d[151][101][51];
int C, N1, N5, N10;

int solve(int c, int n5, int n10) {
	if (d[c][n5][n10] > 0) return d[c][n5][n10];
	int n1 = N1 - (8 * (C - c) - 10 * (N10 - n10) - 5 * (N5 - n5));

	int ans = LIMIT;

	if ((n10 > 0) && (c == 1)) ans = min(ans, 1);
	else if (n10 > 0) ans = min(ans, 1 + solve(c - 1, n5, n10 - 1));

	if ((n5 > 1) && (c == 1)) ans = min(ans, 2);
	else if (n5 > 1) ans = min(ans, 2 + solve(c - 1, n5 - 2, n10));

	if ((n5 > 0) && (n1 > 2) && (c == 1)) ans = min(ans, 4);
	else if ((n5 > 0) && (n1 > 2)) ans = min(ans, 4 + solve(c - 1, n5 - 1, n10));

	if ((n1 > 7) && (c == 1)) ans = min(ans, 8);
	else if (n1 > 7) ans = min(ans, 8 + solve(c - 1, n5, n10));

	if ((n10 > 0) && (n1 > 2) && (c == 1)) ans = min(ans, 4);
	else if ((n10 > 0) && (n1 > 2)) ans = min(ans, 4 + solve(c - 1, n5 + 1, n10 - 1));

	d[c][n5][n10] = ans;

	return ans;
}

int main() {
	int n;
	int ans[101];
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> C >> N1 >> N5 >> N10;
		memset(d, -1, sizeof(d));
		if (C == 0) ans[i] = 0;
		else ans[i] = solve(C, N5, N10);
	}

	for (int i = 1; i <= n; ++i) cout << ans[i] << endl;

	return 0;
}
