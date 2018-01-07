#include<iostream>
using namespace std;
int main() {
long long a,b,c;
bool d=true;
cin>>a>>b>>c;
if((a>=b && a>=c) && d){
    cout<<a;
    if(b>=c){
        cout<<b<<c;
    }else{
        cout<<c<<b;
    }
    d=false;
}
if((b>=a && b>=c) && d){
    cout<<b;
    if(a>=c){
        cout<<a<<c;
    }else{
        cout<<c<<a;
    }
    d=false;
}
if((c>=b && c>=a) && d){
    cout<<c;
    if(a>=b){
        cout<<a<<b;
    }else{
        cout<<b<<a;
    }
    d=false;
}
return 0;
}
