// 10000000000000000
#include <iostream>

using namespace std;

int main() {
    long long a, b, c, d, k;
    cin>>a>>b>>c>>d>>k;

    long long n = a;
    for(long long i = 0; i < k; i++) {
        n = n * b - c;
        if(n < c) {
            n = 0;
            break;
        }
        if(n > d)
            n = d;
    }

    cout<<n;

    cout<<endl;
}
