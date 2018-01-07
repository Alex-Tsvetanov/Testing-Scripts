#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <cmath>


using namespace std;

int stoi(string num) {
	int res = 0;
	for(int i = 0; i < num.length(); i++) {
		res += (num[num.length() - i - 1] - 48) * (pow(10, i));
	}

	return res;
}

list<char> get_input_operators(string inp) {
	list<char> operators;
	for(int i = 0 ; i < inp.length(); i++) {
		if(inp[i] == '+' || inp[i] == '-') {
			operators.push_back(inp[i]);
		}
	}
	return operators;
}

list<long> get_input_nums(string inp) {
	list<long> nums;
	int start;
	int size;
	vector<string> nums_str;
	for(int i = 0; i < inp.length(); i++) {
		start = i;
		size = 0;
		while(inp[i] >= '0' && inp[i] <= '9') {
			size++;
			i++;
		}
		nums_str.push_back(inp.substr(start, size));
	}

	for(vector<string>::iterator it=nums_str.begin(); it != nums_str.end(); it++) {
		nums.push_back(stoi(*it));
	}
	return nums;
}

void get_points(vector<long>& X, vector<long>& Y, list<char> operators, list<long> nums) {
	int x_pos = 1;
	int y_pos = 0;
	int nums_size = nums.size();
	int op_size = operators.size();

	X.push_back(0);
	Y.push_back(0);

	if(op_size == nums_size) {
		x_pos = 0;
		if(operators.front() == '-') {
			y_pos = -1;		
		} else {
			y_pos = 1;		
		}
		operators.pop_front();
	}

	for(int i = 0; i < nums_size; i++) {
		X.push_back(nums.front() * x_pos + X.back());		
		Y.push_back(nums.front() * y_pos + Y.back());

		if(operators.size() == 0) {
			break;		
		}
		if(x_pos == 0) {
			if(operators.front() == '-') {
				x_pos = y_pos * -1;			
			} else {
				x_pos = y_pos * 1;			
			}
			y_pos=0;
		}
		else {
			if(operators.front() == '-') {
				y_pos = x_pos * 1;			
			} else {
				y_pos = x_pos * -1;
			}
			x_pos=0;
		}
		nums.pop_front();
		operators.pop_front();
	}
}

int get_area(vector<long>X, vector<long>Y) {
	long long int area = 0;
 	int j = X.size() - 1;

	for(int i = 0 ; i < X.	size(); i++)
	{
		area = area +  (X[j]+X[i]) * (Y[j]-Y[i]); 
		j = i;
	}
	return area/2;
}

int main() {
	string input;
	cin >> input;
	list<char> operators = get_input_operators(input);
	list<long> nums = get_input_nums(input);
	
	vector<long> X, Y;
	get_points(X, Y, operators, nums);
	cout << get_area(X, Y);

	return 0;
}
