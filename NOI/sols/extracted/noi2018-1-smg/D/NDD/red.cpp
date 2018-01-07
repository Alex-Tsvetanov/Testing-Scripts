#include <iostream>
using namespace std;
long long c[100000],d[100000];
int main () {
    long long n,k;
    cin >> n >> k;
    long long a[n],b[k];
    long long x,y;
    for (x=0;x<n;x++) {
        cin >> a[x];
        if (x>0) {
                for (y=0;y<x;y++) {
                    if (a[y]==a[x]) {
                        c[x]++;
                        d[y]++;
                    }
                }
        }
    }
    for (x=0;x<k;x++) {
        cin >> b[x];
    }
    for (x=0;x<k;x++) {
        cout << c[b[x]-1]<<" "<<d[b[x]-1]<<endl;
    }
    return 0;
}
