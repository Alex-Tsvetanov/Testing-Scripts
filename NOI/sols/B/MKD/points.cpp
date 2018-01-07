#include<iostream>
using namespace std;
int main()
{
    int n,m,a,b,p=0,f,l,c,t=0;
    cin>>n>>m;
    int e[n+1],h[n+2];
    e[0]=0;
    h[0]=0;
    h[n+1]=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        p+=a;
        e[i+1]=p;
        h[i+1]=b;
    }
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        if(a>e[n]) continue;
        f=1;
        l=n;
        c=(f+l)/2;
        while(true)
        {
            if(a>=e[c-1] and a<=e[c]) break;
            if(a>e[c]) f=c+1;
            else l=c-1;
            c=(f+l)/2;
        }
        if(a==e[c-1] and a>max(h[c-1],h[c])) continue;
        if(a==e[c] and a>max(h[c],h[c+1])) continue;
        if(a>h[c]) continue;
        t++;
    }
    cout<<t;
    return 0;
}
