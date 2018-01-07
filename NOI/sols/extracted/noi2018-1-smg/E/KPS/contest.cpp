#include <iostream>
using namespace std;
int main () {
long long n,t,f,x;
cin>>n>>t>>f>>x;
n=n-f;
t=t-1;
t=t*60;
while(n>0)
{
    t=t-x;
    n=n-1;
}
if(t==0)
{
    cout<<"EXACT!";
}
else{
    if(t>0)
    {
        cout<<"YES"<<endl<<n;
    }
    else{
        cout<<"NO"<<endl<<t<<endl<<n;
    }
}
return 0;
}
