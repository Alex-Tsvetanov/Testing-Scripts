#include <iostream>
#define D(x) std::cout << __LINE__ << ' ' << #x << " = " << x << std::endl;

long long calc(int from, int to, std::string &s) {
	long long ret = 1;
	for(int i = from;i < to;++ i) {
		if(s[i] >= '0' and s[i] <= '9' and (s[i+1] == '+' or s[i+1] == '*')) {
			ret *= (s[i] - '0');
		}
	}
	return ret;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	for(int _ = 0;_ < n;++ _) {
		std::string tmp;
		std::cin >> tmp;
		tmp += '+';

		int prev = 0;
		long long sum = 0;
		for(int i = 0;i < tmp.size();++ i) {
			if(tmp[i] == '+') {
				sum += calc(prev, i, tmp);
				prev = i;
			}
		}
		//D(sum);
		std::cout << sum % 2 << std::endl;
	}
    return 0;
}

