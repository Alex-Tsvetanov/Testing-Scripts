#include<iostream>
using namespace std;
int main () {
long long n,t,f,x,a,b,c,d;
cin>>n>>t>>f>>x;
if(60+(n-f)*x==t*60){
cout<<"EXACT!";
}
if(60+(n-f)*x<t*60){
cout<<"YES\n"<<(t*60)-(60+(n-f)*x);
}
if(60+(n-f)*x>t*60){
cout<<"NO\n";
cout<<60+(n-f)*x-t*60;
cout<<"\n";
a=n-f;
cout<<a-(((t-1)*60)/x);
}




return 0;
}
