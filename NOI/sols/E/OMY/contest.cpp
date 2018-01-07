#include <iostream>
using namespace std;
int main() {
long long n,t,f,x,b;
do{
cin>>n>>t>>f>>x;
}while (n<5 or n>100 or f<1 or f>n or t<2 or t>24 or x<10 or x>60);
t=t*60;
t=t-60;
n=n-f;
if(n*x<t){
    cout<<"YES"<<endl<<t-n*x;
}if(n*x==t){
cout<<"EXACT!";
}if(n*x>t){
    for(b=0;n*x>t;b++){
n=n-b;
if(n*x>t){
    n=n+b;
}
if(n*x<=t){
cout<<"NO"<<endl<<((n+b)*x)-t<<endl<<b;
}
}
}
return 0;
}
