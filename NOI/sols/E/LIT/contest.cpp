#include<iostream>
using namespace std;
int main(){
int n=0,t=0,f=0,x=0;
cin>>n;
cin>>t;
cin>>f;
cin>>x;
if((t-1)*60>x*(n-f)){
cout<<"YES"<<endl;
cout<<(t-1)*60-x*(n-f)<<endl;
}
if((t-1)*60==x*(n-f)){
cout<<"EXACT!"<<endl;
}
if((t-1)*60<x*(n-f)){
cout<<"NO"<<endl;
cout<<x*(n-f)-(t-1)*60<<endl;
cout<<(n-f)-(x*(n-f)-(t-1)*60)/x<<endl;
}
return 0;
}
