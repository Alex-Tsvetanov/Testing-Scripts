#include <iostream>
using namespace std;
int main ()
{
int n;
cin>>n;

if(n% 3==0)
    cout<<0<<" "<<n/3;
if(n%3==1)
    cout<<2<<" "<<n/3-1;
if(n%3==2)
    cout<<1<<" "<<n/3;

cout <<endl;
return 0;
}

