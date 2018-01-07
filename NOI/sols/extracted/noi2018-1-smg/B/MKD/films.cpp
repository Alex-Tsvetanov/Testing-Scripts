#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,m,t,l,a,u,mt=0,j,h;
    cin>>n>>m>>t>>l;
    map <int,int> f;
    int b[n+1];
    b[0]=n;
    for(int i=1;i<=n;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>a;
        f[a]++;
        b[f[a]]++;
        b[f[a]-1]--;
    }
    u=m;
    j=n;
    h=0;
    while(true)
    {
        if(b[j]==0)
        {
            j--;
            if(j==0)
            {
                cout<<mt;
                return 0;
            }
            continue;
        }
        if(u==m)
        {
            mt=max(mt,h*t+j*(l+t));
        }
        b[j]-=u;
        if(b[j]<0)
        {
            u=-b[j];
            j--;
            if(j==0)
            {
                cout<<mt;
                return 0;
            }
        }
        else
        {
            h++;
            u=m;
        }
    }
    return 0;
}
