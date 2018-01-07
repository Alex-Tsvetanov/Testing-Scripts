#include<iostream>
using namespace std;
int d[100000];
int main ()
{
    int n,k;
    cin>>n>>k;
    int l[k],r[k],red[n],br,zap[k],br3;
    for(br=0; br<n; br++)
    {
        cin>>red[br];
        d[red[br]]++;
    }
    for(br=0; br<k; br++)
    {
        l[br]=0;
        r[br]=0;
        cin>>zap[br];
    }
    for(br3=0; br3<k; br3++)
    {
        if(d[red[zap[br3]-1]]==1)
        {
            l[zap[br3]-1]=0;
            r[zap[br3]-1]=0;
        }
        else
        {
            if(zap[br3]-1<=n-zap[br3]+1)
            {
                for(br=0; br<zap[br3]-1; br++)
                {
                    if(red[br]==red[zap[br3]-1])
                    {
                        l[br3]++;
                    }
                }
                r[br3]=d[red[zap[br3]-1]]-l[br3]-1;
            }
            else
            {
                for(br=n-1; br>zap[br3]-1; br--)
                {
                    if(red[br]==red[zap[br3]-1])
                    {
                        r[br3]++;
                    }
                }
                l[br3]=d[red[zap[br3]-1]]-r[br3]-1;
            }
        }
    cout<<l[br3]<<" "<<r[br3]<<endl;
    }
    return 0;
}
