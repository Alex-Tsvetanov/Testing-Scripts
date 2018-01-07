#include<iostream>
using namespace std;
int main () {
long long n,t,f,x,ostT,ostN,tcopy,minutiOst,minutiNeStignali,zadNeNapravil,cifri;
cin>>n>>t>>f>>x;
ostT=t-1;
ostN=n-f;
if(5<=n<=100 and 1<=f<n and 2<=t<=24 and  10<=x<=60)
    {
    if(ostT*60-ostN*x==0 )
        {
        cout<<"EXACT!";
        }
    if(ostT*60-ostN*x>0)
        {
        minutiOst=ostT*60-ostN*x;
        cout<<"YES \n";
        cout<<minutiOst;
        }
     if(ostT*60-ostN*x<0)
        {
         zadNeNapravil=n-(f+ostT*60/x);
         minutiNeStignali=ostN*x+60-t*60;
         cout<<"NO \n";
         cout<<minutiNeStignali<<endl;
         cout<<zadNeNapravil;
        }

    }
//cout<<ostT<<" "<<ostN;






return 0;
}
