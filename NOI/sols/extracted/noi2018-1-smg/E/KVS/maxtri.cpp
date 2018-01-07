#include<iostream>
using namespace std;
int main(){
    int a,b,c,p,v,t;
    cin>>a>>b>>c;
    p=max(a,b);
    p=max(p,c);
    t=min(a,b);
    t=min(t,c);
    v=(a+b+c)-(p+t);
    cout<<p<<v<<t<<endl;
return 0;
}
