#include <iostream>
using namespace std;

int main () {
    long long k, i, broi=1, a, b, c, d;
    cin >> a >> b >> c >> d >> k;
    broi=a;
    for (i=1; i<=k; i++) {
        broi*=b;
        if (broi<c) {
            cout << 0 << endl;
            return 0;
        }
        broi-=c;
        if (broi>d) {broi=d;}
    }
    cout << broi << endl;
return 0;
}
