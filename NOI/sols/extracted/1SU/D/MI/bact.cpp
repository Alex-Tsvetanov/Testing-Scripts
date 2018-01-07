#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

    if(a+b <= c){
        cout << 0;
    }

    if(a+b > c){
        if(a <= d){
            cout << d;
        }

        if(a > d){
            a = d;
            cout << a;
        }
    }
    return 0;
}
