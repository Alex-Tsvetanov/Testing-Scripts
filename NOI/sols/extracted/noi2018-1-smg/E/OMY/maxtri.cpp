#include <iostream>
using namespace std;
int main () {
long long a,b,c;
do {
cin>>a>>b>>c;
}while(a==0 and b==0 and c==0);
if(a>b and a>c and b>c){
    cout<<100*a+10*b+c;
}
if(a>b and a>c and b<c){
    cout<<100*a+10*c+b;
}
if(b>a and b>c and a>c){
    cout<<100*b+10*a+c;
}
if(b>a and b>c and a<c){
    cout<<100*b+10*c+a;
}
if(c>a and c>b and a>b){
    cout<<100*c+10*a+b;
}
if(c>a and c>b and a<b){
    cout<<100*c+10*b+a;
}
if(a==b and a==c and b==c){
    cout<<100*a+10*b+c;
}
if(a>b and a>c and c==b){
    cout<<100*a+10*b+c;
}
if(b>a and b>c and c==a){
    cout<<100*b+10*a+c;
}
if(c>a and c>b and b==a){
    cout<<100*c+10*b+a;
}
if(a<b and b==c and a<c){
    cout<<100*c+10*b+a;
}
if(a>b and a==c and b<c){
    cout<<100*c+10*a+b;
}
if(c<b and b==a and a>c){
    cout<<100*a+10*b+c;
}

return 0;
}
