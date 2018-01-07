#include <iostream>
#include <utility>
#include <algorithm>
#define D(x) std::cout << __LINE__ << ' ' << #x << " = " << x << std::endl;

const int MAX_N = 10000  + 5;
const int MAX_M = 100001 + 5;
struct point {
	long long x, y;
	bool operator<(const point &other) const {
		if(x == other.x) return y < other.y;
		return x < other.x;
	}
} s[MAX_N], p[MAX_M];

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	std::cin >> n >> m;
	for(int i = 0;i < n;++ i) std::cin >> s[i].x >> s[i].y;
	for(int i = 0;i < m;++ i) std::cin >> p[i].x >> p[i].y;
	std::sort(p, p+m);

	long long cx = 0;
	int is = 0, ans = 0;

	for(int ip = 0;ip < m;++ ip) {
		while(cx + s[is].x < p[ip].x) {
			cx += s[is].x;
			is ++;
			if(is >= n) {
				break;
			}
		}
		if(is >= n) {
			break;
		}
		if(cx <= p[ip].x and p[ip].x <= cx + s[is].x) {
			if(p[ip].y <= s[is].y) {
				ans ++;
			}
		}
	}

	std::cout << ans << std::endl;

	return 0;
}

