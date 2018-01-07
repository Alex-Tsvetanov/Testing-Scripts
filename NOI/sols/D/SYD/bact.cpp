#include<iostream>
using namespace std;

int main()
{
    unsigned long long k;
    int a,b,c,d,aNew;
    cin>>a>>b>>c>>d>>k;

    for(int i=0;i<k;i++)
    {
        aNew=a*b;
        if(aNew<=c)
        {
            cout<<"0";
            return 0;
        }
        aNew=aNew-c;
        if(aNew>d)
        {
            aNew=d;
        }
        a=aNew;
    }
    cout<<a<<endl;

    return 0;
}
