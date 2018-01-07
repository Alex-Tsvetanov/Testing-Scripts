#include<iostream>
using namespace std;
int main()
{
    int n,m,l,t,a,vzi;
    cin>>n>>m>>t>>l;
    for(int i=0; i<n; i++)
    {
        cin>>a;
    }
    if((double)n/m<=0)
    {
        vzi = (n/m)*t+(n/m)*l;
    }
    else if((double)n/m>0)
    {
        vzi=(n/m+1)*(t+l);
    }
    cout<<vzi<<endl;
    return 0;
}
//vsichkifilmi
