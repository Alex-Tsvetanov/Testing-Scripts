#include <iostream>
#include <cctype>
#include <vector>
#include <ctypes>

using namespace std;

int main() {
	char opr;
	int len;
	bool vertical = false;
	int h_sign = 1;
	int v_sign = 1;
	int64_t area = 0;
	vector<int> verticals, horizontals;

	if (!isdigit(cin.peek()))
		cin >> opr;
	
	while (!cin.eof()) {
		cin >> len;
		if (vertical)
			verticals.push_back(len * v_sign);
		else
			horizontals.push_back(len * h_sign);
		
		cin >> opr;
		vertical = !vertical;
		*(vertical ? &v_sign: &h_sign) *= (opr == '+' ? -1: 1);
	}

	while (1) {
		cin >> len;
		
		if (opr == '-') {
			if (!vertical) {
				auto end = horizontal.end();
				int h_side = *(end - 1) + *(end - 2) - *(end - 3)
			}
		}

		cin >> opr;
		vertical = !vertical;
	}
}
