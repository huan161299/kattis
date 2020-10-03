#include <iostream>
#include <vector>

using namespace std;

int main() {
	unsigned int T, nCS, nE, ans;
	double averageCS, averageE;

	scanf("%u", &T);

	for (unsigned int testCase = 0; testCase < T; ++testCase) {

		vector <unsigned int> iqList;
		scanf("%u %u", &nCS, &nE);

		averageCS = 0;

		unsigned int IQ;
		scanf("%u", &IQ);
		iqList.push_back(IQ);
		averageCS += (double)IQ/nCS;

		for (unsigned i = 1; i < nCS; ++i) {
			vector <unsigned int>::iterator pos;
			scanf("%u", &IQ);

			iqList.push_back(IQ);
			averageCS += (double)IQ/nCS;
		}

		averageE = 0;

		for (unsigned i = 0; i < nE; ++i) {
			unsigned int IQ;
			scanf("%u", &IQ);
			averageE += (double)IQ/nE;
		}

		ans = 0;

		auto pos = iqList.begin();
		while (pos != iqList.end()) {
			if (((double)*pos > averageE) && ((double)*pos < averageCS)) ++ans;
			++pos;
		}

		printf("%u\n", ans);
	}

	return 0;
}