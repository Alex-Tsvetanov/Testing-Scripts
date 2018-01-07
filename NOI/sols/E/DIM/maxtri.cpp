#include<iostream>
using namespace std;
int main(){
    long long a;
    long long b;
    long long c;
    long long ng;
    long long sr;
    long long nm;
cin>>a;
ng=a;
sr=a;
nm=a;
cin>>b;
if(b>ng){
    ng=b;
}else{
sr=b;
}
cin>>c;
if(c>ng){
        sr=ng;
     ng=c;
     c=sr;
}
if(c>sr && c<ng){
        nm=sr;
        sr=c;
}
if(c>sr && c==ng){
        nm=sr;
sr=c;
}
if(c<sr){
nm=c;
}
cout<<ng<<sr<<nm;
return 0;
}
