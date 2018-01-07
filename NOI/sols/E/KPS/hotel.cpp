#include <iostream>
using namespace std;
int main () {
long long n, dv=0, tr;
cin>>n;
while(n%3!=0)
{
    n=n-2;
    dv=dv+1;
}
tr=n/3;
cout<<dv<<" "<<tr;
return 0;
}

