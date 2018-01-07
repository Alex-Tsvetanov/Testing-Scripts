#include<iostream>
using namespace std;
int main(){
long long n,t,f,x;
cin>>n>>t>>f>>x;

while(1==1){
if((t-1)*60>x*(n-f)){
    cout<<"YES"<<endl<<(t-1)*60-x*(n-f);
    break;
}
if((t-1)*60<x*(n-f)){
    cout<<"NO"<<endl<<x*(n-f)-(t-1)*60<<endl<<n-f-x/n+1;
    break;
}
if((t-1)*60==x*(n-f)){
    cout<<"EXACT!";
    break;
}
}
return 0;
}
