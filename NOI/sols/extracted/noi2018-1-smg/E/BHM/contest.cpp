#include<iostream>
using namespace std;
int main(){
long long n,t,f,x;
cin>>n>>t>>f>>x;
t--;
n-=f;
if(n*x<t*60){
    cout<<"YES\n"<<t*60-n*x;
}
if(n*x==t*60){
    cout<<"EXACT!";
}
if(n*x>t*60){
    cout<<"NO\n"<<n*x-t*60<<"\n";
}
if((n*x-t*60)%x==0){
    cout<<(n*x-t*60)/x;
}else{
    cout<<(n*x-t*60)/x+1;
}
cout<<"\n";
return 0;
}
