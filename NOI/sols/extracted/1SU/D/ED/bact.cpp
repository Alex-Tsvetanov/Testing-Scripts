#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d,k,den=1;
    cin>>a>>b>>c>>d>>k;
    int br=a;
    for(; den<=k; den++)
    {
    br*=b;
    if(br<=c)
    {
    cout<<0;
    br=0;
    break;
    }
    br-=c;
    if(br>d)
    {br=d;}
    }
    if(br!=0)
    {cout<<br;}
    return 0;
}
