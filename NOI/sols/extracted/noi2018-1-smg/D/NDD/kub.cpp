#include <iostream>
using namespace std;
int main () {
long long a,b,c;
cin >> a >> b >> c;
if (a>b) {
    swap (a,b);
}
if (c<a) {
    swap (a,c);
}
if (b>c) {
    swap (a,b);
}
if (b!=1 and c!=1) {
    cout << (a-2)*(b*c-2*b-2*(b-1)) <<" " <<2*(b*c-2*b-2*(b-1))+(a-2)*(2*b+2*(b-1))<<" " <<2*(2*b+2*(b-1))-8 <<" " << 8 <<" "<< 0 <<" "<< 0 <<" "<< 0;
}
else if (a==1 and b==1 and c==1) {
    cout << 0 <<" "<< 0 <<" "<< 0 <<" "<< 0<<" "<< 0 <<" "<<0 <<" "<<1;
}
else {
    cout <<0<< " " <<0<<" " <<0<<" " << 0 << " "<<a*b*c-2<<" "<< 2 << " "<<0;
}

return 0;
}


