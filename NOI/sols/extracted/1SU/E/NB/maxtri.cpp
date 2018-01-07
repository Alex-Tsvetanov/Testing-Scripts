#include<iostream>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
     if(b>a){
        swap(a,b);
    }if(c>a){
        swap(a,c);
    }if(c>b){
        swap(b,c);
    }
    cout<<a<<b<<c;
return 0;
}
