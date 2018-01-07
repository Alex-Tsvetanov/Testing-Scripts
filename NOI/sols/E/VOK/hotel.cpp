#include<iostream>
using namespace std;
int main(){
long long n,broitrstai,broidvstai;
cin>>n;
if(n%3==0){
    broitrstai=n/3;
    cout<<broitrstai;
}else{
if(n%2==0){
    broidvstai=n%2;
    cout<<broidvstai;
}else{
if(n%3!=0){
    broidvstai=n/3;
    broitrstai=(n/3)-1;
    cout<<broidvstai<<endl<<broitrstai;
}else{
if(n%2!=0){
  broidvstai=(n/2)-1;
  broitrstai=(n%2)/3;
  cout<<broidvstai<<endl<<broitrstai;
}}}}
return 0;
}
