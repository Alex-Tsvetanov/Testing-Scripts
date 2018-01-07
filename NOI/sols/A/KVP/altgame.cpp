#include <iostream>
#include <cstring>

using namespace std;

char x[1000], y[1000];
int a, b, m, w, p, len;

int comp(char q[], int z) {
    int help;
    for(int l = 0; l < len; l ++) {
        help *= 10;
        help += q[l] - '0';
        help %= z;
    }
    return help;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> m;
    for(int i = 0; i < m; i ++) {
        cin >> x;
        len = strlen(x);
        if(len >= 7) {
            for(int j = 0; j < len; j ++) y[j] = x[j];
            w = x[len - 1] + x[len - 2] * 10 + x[len - 3] * 100 - a;
            x[len - 3] = w / 100 + '0';
            w %= 100;
            x[len - 2] = w / 10 + '0';
            x[len - 1] = w % 10 + '0';
            w = y[len - 1] + y[len - 2] * 10 + y[len - 3] * 100 - b;
            y[len - 3] = w / 100 + '0';
            w %= 100;
            y[len - 2] = w / 10 + '0';
            y[len - 1] = w % 10 + '0';
            if(comp(x, a + b) < min(a, b) || comp(y, a + b) < min(a, b)) {
                cout << 1 << "\n";
                continue;
            }
            cout << 2 << "\n";
        } else {
            p = 0;
            for(int j = 0; j < len; j ++) {
                p *= 10;
                p += x[j];
            }
            if((p - a) % (a + b) < min(a, b) || (p - b) % (a + b) < min(a, b)) {
                cout << 1 << "\n";
                continue;
            }
            cout << 2 << "\n";
        }
    }
    return 0;
}
