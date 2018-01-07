#include <iostream>
using namespace std;
int main (){
long long n,t,f,x,a,c,b;
cin>>n>>t>>f>>x;
a=0;
    n=n-f;
    t=t-1;
    n=n*x;
    t=t*60;
    c=t-n;
    c=c-c-c;
    if(t-n>0){
            a=t-n;
        cout<<"YES"<<"\n"<<a;
    }
     if(t-n==0){
        cout<<"EXACT";
     }
    if(t-n<0){
            b=c/(c/3);
        cout<<"NO"<<"\n"<<c<<"\n"<<b;
    }
return 0;
}
