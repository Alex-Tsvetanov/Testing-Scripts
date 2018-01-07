#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void print(vector<int> buf) {
	cout << "v: ";
	for (int num: buf) {
		cout << num << ' ';
	}

	cout << endl;
}

int compute(int n) {
	vector<int> A, B, C;
	bool next = true;

	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;

		B.push_back(num);
		A.push_back(i);
	}
	
	while (B.size()) {
		if (!A.empty() && next) {
			C.push_back(A.front());
			A.erase(A.begin());
		}
		
		if (C.back() == B.front()) {
			//just end?
			C.erase(C.end() - 1);
			B.erase(B.begin());
			next = false;
		} else {
			next = true;
			if (A.empty()) {
				break;
			}
		}
	
	}
	
	return C.empty();
}


int main() {
	int n;
	
	cin >> n;
	
	for (int i = 0; i < 5; i++) {
		cout << compute(n);
	}
}
