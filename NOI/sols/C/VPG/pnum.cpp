#include <iostream>
#include <queue>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, p;
    cin >> n >> p;
    if (p==2) {
        for (int i=1;i<=n;i++) cout << i << endl;
        return 0;
    }
    queue <int> q;
    q.push(1);
    while (!q.empty()) {
        int x=q.front();
        if (x*p<=n) {
            q.push(x*p);
            if (x*p+1<=n)q.push(x*p+1);
        }
        cout << x << endl;
        q.pop();
    }
    return 0;
}
