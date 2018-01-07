#include <iostream>
using namespace std;

int main () {
    long long n, k, i, j, broi1=0, broi2=0, a;
    cin >> n >> k;
    long long A[n];
    for (i=0; i<n; i++) {
        cin >> A[i];
    }
    for (i=0; i<k; i++) {
        cin >> a;
        for (j=a-2; j>-1; j--) {
            if (A[j]==A[a-1]) {broi1++;}
        }
        for (j=a; j<n; j++) {
            if (A[j]==A[a-1]) {broi2++;}
        }
        cout << broi1 << ' ' << broi2 << endl;
        broi1=0;
        broi2=0;
    }
return 0;
}
