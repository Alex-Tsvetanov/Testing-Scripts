#include<iostream>
using namespace std;
int main(){
long long n,t,f,x;
cin>>n>>t>>f>>x;

if(5<=n<=100 or  1<=f<n or 2<=t<=24 or 10<=x<=60){
            n=n-f;
    t=t-1;
while(n>0 or t>0){
t=t-x;
n=n-1;
}
}
if(t>0){
    cout<<"Yes";
}else{
cout<<"No";
}
if(t==0){
    cout<<"Exact";
}
return 0;
}
