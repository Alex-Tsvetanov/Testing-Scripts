#include<iostream>
using namespace std;
int main(){
long long a,b,c,d,k,br=1;
cin>>a>>b>>c>>d>>k;
while(true){
a=a*b;
a=a-c;
if(a<=0){
    cout<<0;
    return 0;
}
if(a>d){
    a=d;
}
if(k==br){
    cout<<a;
    return 0;
}
br++;
}
return 0;
}
