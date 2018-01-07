#include <iostream>
#include <queue>
#define D(x) std::cout << __LINE__ << ' ' << #x << " = " << x << std::endl;

const int MAX_N = 1000000 + 5;
long long graph[MAX_N], chn[MAX_N], time_[MAX_N];

long long n, m, t, l;

long long calc(int idx) {
	if(time_[idx] != -1) return time_[idx];

	long long ans = calc(graph[idx]);
	ans += l + t;

	time_[idx] = ans;
	return ans;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::cin >> n >> m >> t >> l;

	for(int i = 0;i < MAX_N;++ i) {
		chn[i] = -1;
		time_[i] = -1;
	}

	for(int i = 0;i < n;++ i) {
		int a;
		std::cin >> a;
		graph[i] = chn[a];
		chn[a] = i;
	}

	long long s = 0, a = 1;
	for(int i = 0;i < n;++ i) {
		if(graph[i] == -1) {
			time_[i] = a * t + l;
			s ++;
			if(s == m) {
				s = 0;
				a ++;
			}
		}
	}

	for(int i = 0;i < n;++ i) {
		if(time_[i] == -1) {
			calc(i);
		}
	}

	long long ans = 0;
	for(int i = 0;i < n;++ i) {
		if(time_[i] > ans) ans = time_[i];
	}
	std::cout << ans << std::endl;

	return 0;
}

