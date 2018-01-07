#include<iostream>
using namespace std;
int main() {
long long n,x,y;
cin>>n;
if (n%3==0) {
    y=0;
    x=n/3;
}
if (n%3==1) {
    y=2;
    x=(n-4)/3;
}
if (n%3==2) {
    y=1;
    x=(n-2)/3;
}
cout<<y<<" "<<x;
return 0;
}
