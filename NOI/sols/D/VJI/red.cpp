#include<iostream>
using namespace std;
int main ()
{
    long long n1, k1, n2=1, k2=1, h, n1c, k1c, p=0, s=0, h1 ;
    cin>>n1>>k1;
    long long n[n1-1], k[k1-1] ;
    n[0]=0;
    n1c=n1;
    k1c=k1;
    while(n2<=n1)
    {
        cin>>n[n2];
        n2++;
    }
    while(k2<=k1)
    {
        cin>>k[k2];
        k2++;
    }
    for(int i=1; i!=k1+1; i++)
    {
        h1=k[i];
        h=n[h1];
        for(int j=h1; j>0; j--)
        {
            if(h==n[j])
            {
                p++;
            }
        }
        for(int j1=h1; j1<=n1; j1++)
        {
            if(h==n[j1])
            {
                s++;
            }
        }
        h=0;
        p=p-1;
        s=s-1;
        cout<<p<<' '<<s<<endl;
        p=0;
        s=0;
    }

    return 0;
}

