#include<iostream>
using namespace std;
int main() {
long long n,t,f,x;
x*60==t;
cin>>n;
cin>>t;
cin>>f;
cin>>x;
t=t-1;
n=n-f;
if(n*x<t){
    cout<<"YES"<<t-n*x;
    if(n*x>t){
        cout<<"NO"<<n*x-t<<t-t/x;

       if(n*x==t){
           cout<<"EXACT";
        }
    }
}
cout<<"\n"<<endl;
return 0;
}
