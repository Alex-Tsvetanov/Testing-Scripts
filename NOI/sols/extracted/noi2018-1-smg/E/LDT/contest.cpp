#include <iostream>
using namespace std;
int main(){
long long n, t, f, x;
cin>>n>>t>>f>>x;
n=n-f;
t=t-1;
if(t*60>n*x){
    cout<<"YES\n"<<t*60-n*x;
}else if(t*60==n*x){
    cout<<"EXACT!";
}else if(t*60<n*x){
    cout<<"NO\n"<<n*x-t*60<<endl<<n-t*60/x;
}
return 0;
}
