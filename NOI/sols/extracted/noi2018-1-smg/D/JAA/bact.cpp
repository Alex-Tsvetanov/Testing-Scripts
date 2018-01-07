#include<iostream>
using namespace std;
int main ()
{
int a,b,c,d,br;
long long k;
cin>>a>>b>>c>>d>>k;
for(br=0;br<k;br++)
{
    a=a*b;
    a=a-c;
    if(a<=0)
    {
       cout<<0<<endl;
       break;
    }
    else
    {
       if(a>d)
       {
          a=d;
       }
    }
}
if(br==k)
{
   cout<<a<<endl;
}
return 0;
}
