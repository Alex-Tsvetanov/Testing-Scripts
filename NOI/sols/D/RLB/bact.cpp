#include<iostream>
using namespace std;
int main(){

    ios::sync_with_stdio(false);

    int a, b, c, d;
    unsigned long long int k;

    cin >> a >> b >> c >> d >> k;

    int t = 0;
    while(a * b < d){
        if(a * b < c){
            cout << 0 << endl;
            return 0;
        }
        a = a * b;
        a = a - c;
        t++;
    }
    if(t == 0 || t <= k){
        cout << d << endl;
        return 0;
    }
    if(t > k)cout << a << endl;

    return 0;
}
