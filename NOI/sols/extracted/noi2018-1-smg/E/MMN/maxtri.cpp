#include<iostream>
using namespace std;
int main ()
{
    long long a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b and a>c and b>c)
    cout<<a<<b<<c;
    else if(a>b and a>c and c>b)
    cout<<a<<c<<b;
    else if(b>a and b>c and c>a)
    cout<<b<<c<<a;
    else if(b>a and b>c and a>c)
    cout<<b<<a<<c;
    else if(c>b and c>a and a>b)
    cout<<c<<a<<b;
    else if(c>b and c>a and b>a)
    cout<<c<<b<<a;
    else if(a>b and a>c and c>b)
    cout<<a<<c<<b;
    else if(a>b and a>c and b==c)
    cout<<a<<c<<b;
    else if(b>a and b>c and a==c)
    cout<<a<<c<<b;
    else if(c>b and c>a and a==b)
    cout<<a<<c<<b;
    else if(a==b and a==c and c==b)
    cout<<a<<c<<b;


    return 0;
}
