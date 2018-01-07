#include<iostream>
using namespace std;
int main(){
int n=0;
cin>>n;
if(n%3==0){
cout<<0<<" ";
cout<<n/3<<endl;
}
if(n%3==2){
cout<<1<<" ";
cout<<(n-2)/3<<endl;
}
if(n%3==1){
cout<<2<<" ";
cout<<(n-4)/3<<endl;
}
return 0;
}
