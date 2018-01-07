#include <iostream>
#include <algorithm>

using namespace std;

long long a[100000], b[10000];

int main() {
    long long n, k;
    cin>>n>>k;
    for(long long i = 0; i < n; i++)
        cin>>a[i];
    for(long long i = 0; i < k; i++) {
        cin>>b[i];
        b[i]--;
        long long ri = b[i], l = 0, r = 0;

        for(long long j = 0; j < n; j++) {
            if(j != ri && a[ri] == a[j])
                if(j < ri)
                    l++;
                else
                    r++;
        }

        cout<<l<<" "<<r<<endl;
    }
}
