#include<iostream>
using namespace std;
int main(){
long long  n , f , t , x , tCopy , tCopy2 ;
cin>>n>>t>>f>>x;
tCopy=t;
tCopy=tCopy*60;
t=t*60;
n=n-f;
t=t-60;
if(n*x<t){
    tCopy2=t;
    t=n*x;
    tCopy=tCopy-60;
    cout<<endl<<"YES"<<endl<<tCopy-t;
    t=tCopy2;
}
if(n*x==t){
    cout<<"EXACT!";
}
if(n*x>t){
    cout<<"NO"<<endl<<n*x-t<<endl<<((n*x-t)/x)+1;

}
cout<<endl;
return 0;
}
