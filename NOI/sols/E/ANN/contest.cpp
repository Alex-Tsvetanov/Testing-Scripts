#include <iostream>
using namespace std;
int main (){
    long long n,f,t,x,r;
    cin>>n>>f>>t>>x;
    r=n-f;
    if(r*x >(t*x)){
        cout<<"EXACT!";
    }
    if(r*x <(t*x)){
        cout<<"NO"<<endl;
    }
    if(r*x==(t*x)){
        cout<<"YES"<<endl;
    }
return 0;
}
