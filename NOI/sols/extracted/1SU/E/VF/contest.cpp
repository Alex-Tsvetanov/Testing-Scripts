#include<iostream>
using namespace std;
long long n,t,f,x,zadrchas,drchas,neobh;
int main ()
{
    cin>>n>>t>>f>>x;
    zadrchas=n-f;
    drchas=(t-1)*60;
    neobh=zadrchas*x;
    if(drchas==neobh)
    {
        cout<<"EXACT !";
    }
    if(neobh<drchas)
    {
        cout<<"YES\n"<<drchas-neobh;

    }
    if(neobh>drchas)
    {
        cout<<"NO\n"<<neobh-drchas<<"\n";
        if((neobh-drchas)%x==0)
        {
            cout<<(neobh-drchas)/x;
        }else{
            cout<<(neobh-drchas)/x+1;

        }
    }
    return 0;
}

