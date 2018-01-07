#include <iostream>
using namespace std;
int main () {
    int n;
    int a[40];
    long long s, m;
    cin >> n;
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=n;i<n*2;i++) a[i]=a[i-n];
    m=0;
    int j;
    for (int i=0;i<n*2;i++) {
        if (a[i]>0) {
            j=s=0;
            for (int k=i;j<n and k<n*2;k++,j++) {
                s=s*10+a[k];
            }
            if (s>m) m=s;
            j=s=0;
            for (int k=i;j<n and k>=0;k--,j++) {
                s=s*10+a[k];
            }
            if (s>m) m=s;
        }
    }
    cout << m << endl;
    return 0;
}
