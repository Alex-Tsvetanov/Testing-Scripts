#include <iostream>
#include <algorithm>
#include <cstdint>

using namespace std;

int big, sml;
int sums[3];

int do_i_lose(int64_t total) {
	int64_t calc;

	for (int i = 0; i < 3; i++) {
		calc = total - sums[i];
		if (calc < sml && calc >= 0)
			return true;
	}

	return false;
}

int main() {
	int64_t total, calc;
	int iters;
	int prev;
	
	cin >> big >> sml;
	cin >> iters;
	
	if (big < sml)
		swap(big, sml);
	sums[0] = sml * 2;
	sums[1] = big * 2;
	sums[2] = big + sml;
	
	for (int i = 0; i < iters; i++) {	
		cin >> total;
		bool turn;

		for (turn = false;; turn = !turn) {
			//cout << total << ' ';
			
			calc = total - big;
			if (calc < sml && calc >= 0) {
				total = calc;
				break;
			}

			calc = total - sml;
			if (calc < sml && calc >= 0) {
				total = calc;
				break;
			}

			if (do_i_lose(total - big)) {
				total -= sml;
			} else if (do_i_lose(total - sml)) {
				total -= big;
			} else {
				if (prev == sml) {
					prev = big;
					total -= big;
				} else {
					prev = sml;
					total -= sml;
				}
			}
		}

		cout << turn + 1 << endl;
	}
}
