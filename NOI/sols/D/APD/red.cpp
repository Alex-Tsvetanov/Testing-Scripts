#include <iostream>
using namespace std;
int main ()
{
    int n,k,brl=0,brr=0;
    cin>>n>>k;
    int red[n],zap[k],l[k],r[k];
    for(int i=0; i<n; i++)
    {
        cin>>red[i];
    }
    for(int i=0; i<k; i++)
    {
        cin>>zap[i];
    }
    for(int i=1; i<=k; i++)
    {
        brl=0;
        brr=0;
        for(int j=0; j<n; j++)
        {

            if(red[j]==red[zap[i-1]-1] and j!=zap[i-1] and j<zap[i-1])
            {
                brl++;
            }
            else if(red[j]==red[zap[i-1]-1] and j!=zap[i-1] and j>zap[i-1])
            {
                brr++;
            }
        }
        l[i-1]=brl;
        r[i-1]=brr;
    }
    for(int i=0; i<k; i++)
    {
        cout<<l[i]<<" "<<r[i]<<endl;
    }
    return 0;
}
