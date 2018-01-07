#include<iostream>
using namespace std;
int main(){
long long n,e,r;
cin>>n;
if(n>1 and n<101){
if(n%3==1){
    cout<<2<<" "<<n/3-1;
}
if(n%3==2){
    cout<<1<<" "<<n/3;
}
if(n%3==0){
cout<<0<<" "<<n/3;
}
}else{
cout<<"error";
}
return 0;
}
