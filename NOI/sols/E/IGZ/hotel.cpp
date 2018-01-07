#include<iostream>
using namespace std;
int main() {
long long hora,stai;
cout<<"hora ";
cin>>hora;
stai=0;
if(hora%2==0){
    cout<<hora/2;
    cout<<" dvoini stai";
}
if(hora%3==0){
    if(hora%2!=0){
        cout<<hora/3;
        cout<<" troini stai";
    }
}
if(hora%2!=0){
    if(hora%3!=0){
cout<<"ne se seshtam :/";
    }
}
return 0;
}
