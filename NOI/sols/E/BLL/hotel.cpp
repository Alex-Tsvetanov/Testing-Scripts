#include<iostream>
using namespace std;
int main(){
long long broiUchastnici;
cin>>broiUchastnici;
if(broiUchastnici%3==0){
     cout<<0<<" "<<broiUchastnici/3;
}
if(broiUchastnici%3==1){
     cout<<2<<" "<<broiUchastnici/3-1;
}
if(broiUchastnici%3==2){
     cout<<1<<" "<<broiUchastnici/3;
}
return 0;
}
