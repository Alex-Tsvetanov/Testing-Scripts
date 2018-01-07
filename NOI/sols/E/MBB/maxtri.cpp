#include<iostream>
using namespace std;
int main(){
long long digit0,digit1,digit2;
cin>>digit0>>digit1>>digit2;
while(1==1){

if(digit0>=digit1&&digit1>=digit2){
    cout<<digit0<<digit1<<digit2;
    break;
}
if(digit0>=digit2&&digit2>=digit1){
    cout<<digit0<<digit2<<digit1;
    break;
}
if(digit1>=digit2&&digit2>=digit0){
    cout<<digit1<<digit2<<digit0;
    break;
}
if(digit1>=digit0&&digit0>=digit2){
    cout<<digit1<<digit0<<digit2;
    break;
}
if(digit2>=digit0&&digit0>=digit1){
    cout<<digit2<<digit0<<digit1;
    break;
}
if(digit2>=digit1&&digit1>=digit0){
    cout<<digit2<<digit1<<digit0;
    break;
}
}
return 0;
}
