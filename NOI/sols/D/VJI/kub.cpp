#include<iostream>
using namespace std;
int main ()
{
    long long a, b, c, x0=0, x1=0, x2=0, x3=0, x4=0, x5=0, x6=0 ;
    cin>>a>>b>>c;
//0
    x0=(a-2)*(b-2)*(c-2);
    if(x0<0)
    {
        x0=0;
    }
//1
    x1=2*((a-2)*(b-2))+2*((c-2)*(b-2))+2*((a-2)*(c-2));
    if(x1<0 or a==b==c==1 or a==b==1 or b==c==1 or a==c==1 or a==1 or b==1 or c==1)
    {
        x1=0;
    }
//2
    x2=(a-2)*4+(b-2)*4+(c-2)*4;
    if(x2<0)
    {
        x2=0;
    }
//3
    if(a<2 or b<2 or c<2)
    {
        x3=0;
    }
    else
    {
        x3=8;
    }
    if(x3<0)
    {
        x3=0;
    }
//4
    if(a==1)
    {
        x4=b*c;
    }
    else if(b==1)
    {
        x4=a*c;
    }
    else if(c==1)
    {
        x4=a*b;
    }
    else
    {
        x4=0;
    }
    if(x4<0 or a==b==c==1)
    {
        x4=0;
    }
//5
    if(a==1 and b==1 and c>1 )
    {
        x5=2;
        x4=x4-2;
    }
    else if(c==1 and b==1 and c>1 )
    {
        x5=2;
        x4=x4-2;
    }
    else if(a==1 and c==1 and c>1 )
    {
        x5=2;
        x4=x4-2;
    }
    else
    {
        x5=0;
    }
    if(x5<0)
    {
        x5=0;
    }
//6
    if(a==1 and b==1 and c==1)
    {
        x6=1;
    }
    else
    {
        x6=0;
    }
    if(x6<0)
    {
        x6=0;
    }
    cout<<x0<<' '<<x1<<' '<<x2<<' '<<x3<<' '<<x4<<' '<<x5<<' '<<x6;
    return 0;
}
