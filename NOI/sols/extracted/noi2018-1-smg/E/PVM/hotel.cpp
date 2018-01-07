#include <iostream>
using namespace std;
int main () {
long long n;
cin>>n;
if (n%3==0) cout<<"0 "<<n/3;
else {
if (n%3==2) cout<<"1 "<<n/3;
else cout<<"2 "<<(n/3)-1;
}
return 0;
}
