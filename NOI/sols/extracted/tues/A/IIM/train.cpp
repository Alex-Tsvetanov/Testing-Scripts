#include <iostream>
#include <vector>
#include <list>

using namespace std;

int is_possible(vector<int> C);

int main() {
	vector<int> C;
	vector<int> res;
	int num;
	int inp;
	cin >> num;
	for(int k = 0; k < 5; k++) {
		for(int i = 0; i < num; i++) {
			cin >> inp;
			C.push_back(inp);
		}
		res.push_back(is_possible(C));
		C.clear();
	}

	for(int i = 0; i < res.size(); i++) {
		cout << res[i];
	}
}


int is_possible(vector<int> B) {
	list<int> temp;
	vector<int> C;
	for(int i = 1; i <= B.size(); i++) {
		temp.push_back(i);
	}
	// cout << "HERE";
	C.push_back(temp.front());
	temp.pop_front();

	for(int i = 0; i < B.size(); i++) {
		if(C.back() > B[i]) {
			return 0;
		}
		
		while(C.back() != B[i]) {
			C.push_back(temp.front());
			temp.pop_front();
		}
		

		if(C.back() == B[i]) {
			C.pop_back();
		}
	}
	return 1;

}

