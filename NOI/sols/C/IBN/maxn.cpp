#include <iostream>

using namespace std;

short n;
short cifri[20];

int main() {
    cin >> n;
    for (long long i = 0; i < n; ++i) {
        cin >> cifri[i];
    }
    long long maxn=0;
    for (long long i = 0; i<n; ++i) {
        unsigned long long buf = 0;
        for (long long j = 0; j < n; ++j) {
            buf *= 10;
            buf += cifri[(i+j)%n];
        }
        maxn = max(maxn, buf);
        buf = 0;
        for (long long j = 0; j < n; ++j) {
            buf *= 10;
            buf += cifri[(i-j+n)%n];
        }
        maxn = max(maxn, buf);
    }
    cout << maxn << "\n";
    return 0;
}
