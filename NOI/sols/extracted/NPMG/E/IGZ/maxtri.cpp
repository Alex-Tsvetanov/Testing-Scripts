#include<iostream>
using namespace std;
int main() {
long long chislo1,chislo2,chislo3;
cout<<" c1 ";
cin>>chislo1;
cout<<" c2 ";
cin>>chislo2;
cout<<" c3 ";
cin>>chislo3;
if(chislo1>=chislo2){
        if(chislo1>=chislo3){
    cout<<chislo1;
        }
}
if(chislo2>=chislo3){
        if(chislo2>=chislo1){
    cout<<chislo2;
        }
}
if(chislo3>=chislo1){
        if(chislo3>chislo2){
    cout<<chislo3;
        }
}
if(chislo2<chislo1 && chislo2>chislo3 ){
    cout<<chislo2;
}
if(chislo2<chislo3 && chislo2>chislo1){
    cout<<chislo2;
}
if(chislo3<chislo1 && chislo3>chislo2 ){
    cout<<chislo1;
}
if(chislo1<chislo2 && chislo1>chislo3){
    cout<<chislo1;
}
    if(chislo3<chislo1 && chislo3>chislo2 ){
    cout<<chislo3;
}
if(chislo3<=chislo2 && chislo3>=chislo1){
    cout<<chislo3;
}
if(chislo3<chislo2 && chislo3<chislo1){
    cout<<chislo3;
}
if(chislo1<chislo2 && chislo1<chislo3){
    cout<<chislo1;
}
    if(chislo2<chislo1){
if(chislo2<chislo3){
    cout<<chislo2;
}
}

return 0;
}
