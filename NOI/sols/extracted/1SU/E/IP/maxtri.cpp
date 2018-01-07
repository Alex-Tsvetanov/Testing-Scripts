#include <iostream>
using namespace std;
int main (){
long long a;
long long b;
long long c;
long long otkoe;
cout<<"vavedi mi 3 cisla megdy 0 i 10 "<<" ";
cin>>a;
cin>>b;
cin>>c;
cin>>otkoe;
if(otkoe==a){
    if(b>c){
        cout<<a<<b<<c<<" ";
    }
}
if(c>b){
    cout<<a<<c<<b<<" ";
}else
if(otkoe==b){
    if(a>c){
        cout<<b<<a<<c<<" ";
    }
}
if(c>a){
    cout<<b<<c<<a<<" ";
}else
if(otkoe==c){
    if(a>b){
        cout<<c<<a<<b<<" ";
    }
}
if(b>a){
    cout<<c<<b<<a<<" ";
}

cout<<"i 3 cisla sa izvedeni ako zapochva ot a, b ili c";
return 0;
}
