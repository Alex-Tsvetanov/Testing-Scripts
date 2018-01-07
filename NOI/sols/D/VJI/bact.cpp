#include<iostream>
using namespace std;
int main ()
{
    long long a, b, c, d, k ;
    cin>>a>>b>>c>>d>>k;
    long long bact=a;
    bact=a*b;
    if(bact<=c)
    {
        cout<<'0';
    }
    else
    {
        bact=bact-c;
        if(bact>d)
        {
            cout<<d;
        }
        else
        {
            while(k>0)
            {
                bact=bact*b;
                k--;
            }
            if(bact>d)
            {
                cout<<d;
            }
            else
            {
                cout<<bact;
            }
        }

    }
    //cout>>;
    return 0;
}
