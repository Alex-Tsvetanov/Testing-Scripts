#include<iostream>
using namespace std;
int main(){
long long a;
long long b;
long long c;
cin>>a;
cin>>b;
cin>>c;
if(b<a<c){
    cout<<c<<a<<b;
}
if(a<b<c){
    cout<<c<<b<<a;
}
if(c<b<a){
    cout<<a<<b<<c;
}
if(b<c<a){
    cout<<a<<c<<b;
}
if(a<c<b){
    cout<<b<<c<<a;
}
if(c<a<b){
    cout<<b<<a<<c;
}
return 0;
}
