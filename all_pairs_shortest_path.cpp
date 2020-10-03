#include <iostream>
#include <functional>
#include <algorithm>


#define LIMIT 150
#define WEIGHT_MAX 1000000

int n, m, q;
using namespace std;
int map[LIMIT][LIMIT];


//Nhan input vao map[][]
int input(void) {
	int a, b, w;

	cin >> n >> m >> q;

	if ((n == m) && (m == q) && (q == 0)) return -1;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			if (i == j) map[i][j] = 0;
			else map[i][j] = WEIGHT_MAX;
		}

	for (int i = 0; i < m; ++i) {
		cin >> a >> b >> w;
		if (map[a][b] > w) map[a][b] = w;
	}
	
	return 0;
}

//Su dung Floyd - Warshall de check negative cycle va toi uu do thi
void floyd(void) {
	for (int k = 0; k < n; ++k)
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j) if ((map[i][j] > map[i][k] + map[k][j]) && (map[i][k] < WEIGHT_MAX) && (map[k][j] < WEIGHT_MAX))
				map[i][j] = map[i][k] + map[k][j];

	//Check negative cycle
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			for (int k = 0; (map[i][j] != -WEIGHT_MAX) && (k < n); ++k)
				if ((map[k][k] < 0) && (map[i][k] != WEIGHT_MAX) && (map[k][j] != WEIGHT_MAX)) {
					map[i][j] = -WEIGHT_MAX;
				}
}

//Chay chuong trinh
int process(void) {
		while (input() != -1) {
		floyd();	
		for (int i = 0; i < q; ++i) {
			int start, end;
			cin >> start >> end;

			if (map[start][end] == WEIGHT_MAX) cout << "Impossible" << endl;
			else if (map[start][end] == -WEIGHT_MAX) cout << "-Infinity" << endl;
			else cout << map[start][end] << endl;
		}

		cout << endl;
	}

	return 0;
}

int main() {

	process();

	return 0;
}
