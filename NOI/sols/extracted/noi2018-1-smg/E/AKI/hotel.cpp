#include <iostream>
using namespace std;
int main () {

long long ucheniciVuvOtbor,troiniStai,dvoiniStai;
cin >> ucheniciVuvOtbor;

if (ucheniciVuvOtbor%3==0) {
    cout << 0 << " ";
    cout << ucheniciVuvOtbor/3;
}
if (ucheniciVuvOtbor%3==1) {
    cout << ucheniciVuvOtbor/2-1 << " ";
    cout << 1;
    }
if (ucheniciVuvOtbor%3==2) {
    cout << 1 << " ";
    cout << ucheniciVuvOtbor/3;
}


return 0;
}
