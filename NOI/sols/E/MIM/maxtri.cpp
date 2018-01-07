#include <iostream>
using namespace std;
int main (){
int a,b,c,a1,b1,c1;
cin>>a>>b>>c;
a1=a;
b1=b;
c1-c;
if(a>=b and b>=c){
    cout<<a*100+b*10+c;
    return 0;
}
if(a>=c and c>=b){
    cout<<a*100+c*10+b;
    return 0;
}
if(b>=c and c>=a){
cout<<b*100+c*10+a;
return 0;
}
if(b>=a and a>=c){
    cout<<b*100+a*10+c;
    return 0;
}
if(c>=a and a>=b){
    cout<<c*100+a*10+b;
    return 0;
}
if(c>=b and b>=a){
    cout<<c*100+b*10+a;
    return 0;
}
return 0;
}
