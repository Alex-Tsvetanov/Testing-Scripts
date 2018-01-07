#include <iostream>
using namespace std;

int main () {
    long long a, b, c, broi;
    cin >> a >> b >> c;
    // 0
    if (a>1 and b>1 and c>1) {
        cout << (a-2)*(b-2)*(c-2) << ' ';
    }
    else {
        cout << 0 << ' ';
    }
    // 1
    if (a>1 and b>1 and c>1) {
        cout << (a-2)*(b-2)*2+(a-2)*(c-2)*2+(c-2)*(b-2)*2 << ' ';
    }
    else {
        cout << 0 << ' ';
    }
    // 2
    if (a>1 and b>1 and c>1) {
        cout << (a-2)*4+(c-2)*4+(b-2)*4 << ' ';
    }
    else {
        if ((b==1 and a==1) or (a==1 and c==1) or (b==1 and c==1)) {cout << 0 << ' ';}
        else {
            if (a==1) cout << (c-2)*(b-2) << ' ';
            if (b==1) cout << (c-2)*(a-2) << ' ';
            if (c==1) cout << (a-2)*(b-2) << ' ';
        }
    }
    // 3
    if (a>1 and b>1 and c>1) {
        cout << 8 << ' ';
    }
    else {
        if ((b==1 and a==1) or (a==1 and c==1) or (b==1 and c==1)) {
            cout << 0 << ' ';
        }
        else {
            if (a==1) cout << (c-2)*2+(b-2)*2 << ' ';
            if (b==1) cout << (c-2)*2+(a-2)*2 << ' ';
            if (c==1) cout << (a-2)*2+(b-2)*2 << ' ';
        }
    }
    // 4
    if ((b==1 and a==1) or (a==1 and c==1) or (b==1 and c==1)) {
        if (a*b*c>2) {
            cout << a*b*c-2 << ' ';
        }
        else {
            cout << 0 << ' ';
        }
    }
    else {
        cout << 4 << ' ';
    }
    // 5
    if ((b==1 and a==1) or (a==1 and c==1) or (b==1 and c==1)) {
        if (a==1 and b==1 and c==1) {
            cout << 0 << ' ';
        }
        else {
            cout << 2 << ' ';
        }
    }
    else {
        cout << 0 << ' ';
    }
    // 6
    if (a==1 and b==1 and c==1) {cout << 1 << endl;}
    else {cout << 0 << endl;}
return 0;
}

