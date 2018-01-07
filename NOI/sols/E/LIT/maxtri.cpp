#include<iostream>
using namespace std;
int main(){
int a=0,b=0,c=0,m=0,g=0;
cin>>a;
cin>>b;
cin>>c;
if(a==b and  b==c){
cout<<a<<b<<c<<endl;
}

g=max(a,max(b,c));
m=min(a,min(b,c));
if(a==b and b!=c and b==g){
cout<<b;
cout<<a;
cout<<c<<endl;
}
if(a==b and b!=c and a==m){
cout<<c;
cout<<b;
cout<<a<<endl;
}
if(a==c and b!=c and a==m){
cout<<b;
cout<<c;
cout<<a<<endl;
}
if(a==c and b!=c and a==g){
cout<<a;
cout<<c;
cout<<b<<endl;
}
if(c==b and b!=a and b==g){
cout<<b;
cout<<c;
cout<<a<<endl;
}
if(c==b and b!=a and c==m){
cout<<a;
cout<<b;
cout<<c<<endl;
}
if(a!=g and a!=m){
cout<<g;
cout<<a;
cout<<m<<endl;
}
if(b!=g and b!=m){
cout<<g;
cout<<b;
cout<<m<<endl;
}

if(c!=m and c!=g){
cout<<g;
cout<<c;
cout<<m<<endl;
}

return 0;
}
