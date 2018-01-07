#include <iostream>
using namespace std;
int main (){
int n,t,f,x;
cin>>n>>t>>f>>x;
n-=f;
t--;
t*=60;
n*=x;
if(t>n)
    cout<<"YES"<<endl<<t-n;
if(t==n)
    cout<<"EXACT!";
if(t<n){
        cout<<"NO"<<endl<<n-t<<endl<<(n-t+x-1)/x;
}
cout <<endl;
return 0;
}
