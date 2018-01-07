#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
std::map<int, bool> q;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    double n, m, t, l;
    std::cin >> n >> m >> t >> l;
    for(int i = 0; i < n; i++) {
        int r;
        std::cin >> r;
        q[r] = true;
    }
    std::cout << ceil(n / std::min(m, (double)q.size())) * (t + l)  << std::endl;
    return 0;
}
