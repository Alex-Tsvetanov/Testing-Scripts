#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,d,k,bac,z=1;
    cin>>a>>b>>c>>d>>k;
    bac=a;
    for(int i=1; i<=k; i++)
    {
        bac=bac*b;
        if(bac<c)
        {
            cout<<0;
            z=0;
            break;
        }
        else
        {
            bac=bac-c;
        }
        if(bac>=d)
        {
            bac=d;
        }
        else
        {
            bac=bac;
        }
    }
    if(z==1)
    {
    cout<<bac;
    }
    return 0;
}
