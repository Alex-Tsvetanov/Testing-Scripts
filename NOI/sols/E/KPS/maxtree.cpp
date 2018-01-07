#include <iostream>
using namespace std;
int main () {
long long a,b,c;
cin>>a>>b>>c;
if(a>=b and a>=c)
{
    cout<<a<<" ";
    if(b>c)
    {
        cout<<b<<" "<<c;
    }
    else{
        cout<<c<<" "<<b;
    }
}
else{
    if(b>a)
    {
        cout<<b<<" ";
        if(a>c)
        {
            cout<<a<<" "<<c;
        }
        else{
            cout<<c<<" "<<a;
        }
    }
    else{
        cout<<c<<" "<<a<<" "<<b;
    }
}
return 0;
}
