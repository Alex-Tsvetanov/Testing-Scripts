#include<iostream>

using namespace std;

int main(){

    long long a, b, c;
    cin >> a >> b >> c;

    if(a>b) swap(a, b);
    if(a>c) swap(a, c);
    if(b>c) swap(b, c);

    if(a==1 && b==1 && c==1){
        cout << 0 << ' ' << 0 << ' ' << 0 << ' ' << 0 << ' ' << 0 << ' ' << 1 << '\n';
        return 0;
    }

    if(a==1 && b==1){
        cout << 0 << ' ' << 0 << ' ' << 0 << ' ' << 0 << ' ' << (c-2) << ' ' << 2 << ' ' << 0 << '\n';
        return 0;
    }

    if(a==1){
        cout << 0 << ' ' << 0 << ' ' << (b-2)*(c-2) << ' ' << 2*(b+c-4) << ' ' << 4 << ' ' << 0 << ' ' << 0 << '\n';
        return 0;
    }

    cout << (a-2)*(b-2)*(c-2) << ' '
         << 2*((a-2)*(b-2)+(a-2)*(c-2)+(b-2)*(c-2)) << ' '
         << 4*(a+b+c-6) << ' '
         << 8 << ' ' << 0 << ' ' << 0 << ' ' << 0 << '\n';


    return 0;
}
