#include <iostream>
#include <stack>

using namespace std;

int n, a, last;
stack <int> c;
bool isit;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < 5; i ++) {
        while(!c.empty()) c.pop();
        last = 0;
        isit = false;
        for(int j = 0; j < n; j ++) {
            cin >> a;
            if(a <= last) {
                if(c.top() != a) {
                    cout << 0;
                    isit = true;
                    for(j ++; j < n; j ++) cin >> a;
                    break;
                }
                c.pop();
                continue;
            }
            for(int w = last + 1; w < a; w ++) c.push(w);
            last = a;
        }
        if(!isit) cout << 1;
    }
    cout << endl;
    return 0;
}
