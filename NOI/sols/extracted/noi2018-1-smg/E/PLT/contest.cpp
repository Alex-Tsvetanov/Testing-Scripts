#include<iostream>
using namespace std;
int main(){
long long n,t,f,x,p,r,ne;
cin>>n>>t>>f>>x;
if((t-1)*60-x*(n-f)==0){
    cout<<"EXACT!";
}
if((t-1)*60-x*(n-f)>0){
    cout<<"YES"<<endl;

cout<<(t-1)*60-x*(n-f);
}
if((t-1)*60-x*(n-f)<0){
    cout<<"NO"<<endl;
    cout<<(t-1)*60-x*(n-f)<<endl;
}
return 0;
}
