#include<iostream>
using namespace std;
int main(){
    long long n,t,f,x;
    cin>>n>>t>>f>>x;
    t=t*60;
    n=n-f;
    t=t-60;
    if(x*n<t){
        cout<<"YES"<<endl<<t-x*n;
    }
    if(x*n==t){
        cout<<"EXACT!";
    }
    if(x*n>t){
        cout<<"NO"<<endl<<x*n-t<<endl<<n-t/x;
    }


    return 0;
}
