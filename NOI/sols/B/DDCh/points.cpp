#include <iostream>
#include <vector>
#include <queue>

#define w first
#define h second
#define x first
#define y second

std::vector<std::pair<int, int>> v;
std::priority_queue<std::pair<int, int>> q;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, m;
    std::cin >> n >> m;
    v.resize(n);
    for(int i = 0; i < n; i ++) {
        std::cin >> v[i].w >> v[i].h;
    }
    for(int i = 0; i < m; i++) {
        std::pair<int,int> p;
        std::cin >> p.x >> p.y;
        p.x = -p.x;
        p.y = -p.y;
        q.push(p);
    }
    int currR = 0;
    int currW = 0;
    int cnt = 0;
    while(!q.empty()) {
        auto sq = q.top();q.pop();
        sq.x = -sq.x;
        sq.y = -sq.y;
        while(sq.x > currW && currR < v.size()) {
            currW += v[currR++].w;
        }
        if(currR == v.size()) {
            if(sq.y <= v[currR-1].h) {
            cnt++;
        }
        }
        if(sq.y <= v[currR].h) {
            cnt++;
        }
        if(currR = v.size() && sq.x > currW)
            break;
    }
    std::cout << cnt << std::endl;
    return 0;
}
