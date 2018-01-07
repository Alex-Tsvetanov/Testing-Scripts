#include<iostream>
using namespace std;
int main() {
long long n,t,f,x;
cin>>n>>t>>f>>x;
if((t-1)*60>(n-f)*x){
    cout<<"YES"<<endl;
    cout<<(t-1)*60-(n-f)*x;
}
if((t-1)*60==(n-f)*x){
    cout<<"EXACT!";
}
if((t-1)*60<(n-f)*x){
    cout<<"NO"<<endl;
    cout<<(n-f)*x-(t-1)*60<<endl;
    if(((n-f)*x-(t-1)*60)%x==0){
        cout<<((n-f)*x-(t-1)*60)/x;
    }else{
        cout<<((n-f)*x-(t-1)*60)/x+1;
    }
}
return 0;
}
