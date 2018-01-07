#include <iostream>
using namespace std;
int main () {
long long n,t,f,x,tm,xm,ost;
cin>>n>>t>>f>>x;
n=n-f;
t=t-1;
tm=t*60;
xm=x*n;
if (xm==tm) cout<<"EXACT!";
else {
if (xm>tm) {
 ost=((xm-tm)%x==0) ?(xm-tm)/x:((xm-tm)/x)+1;
    cout<<"NO"<<endl<<xm-tm<<endl<<ost;
}
else cout<<"YES"<<endl<<tm-xm;
}
return 0;
}
