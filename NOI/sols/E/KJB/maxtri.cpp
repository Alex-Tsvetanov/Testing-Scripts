#include<iostream>
using namespace std;
int main(){
long long a,b,c;
cin>>a>>b>>c;
if(a!=0 or b!=0 or c!=0){
if(a>=b and a>=c){
    cout<<a;
    if(b>c){
        cout<<b<<c;
    }else{
    cout<<c<<b;
    }
}
if(b>=c and b>=a){
    cout<<b;
    if(a>c){
        cout<<a<<c;
    }else{
    cout<<c<<a;
    }
}
if(c>=b and c>=a){
    cout<<c;
    if(b>a){
        cout<<b<<a;
    }else{
    cout<<a<<b;
    }
}
return 0;
}
