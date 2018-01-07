#include <iostream>
using namespace std;
int main () {

long long n, t, f, x, a;

cin>>n>>t>>f>>x;

n=n-f;
t=t-1;
t=t*60;

if(n*x<t) {

    cout<<"YES"<<endl<<t-n*x;

}

if(n*x>t) {
     a=n*x-t;
    cout<<"NO"<<endl<<a<<endl;
    if(a%x!=0) {

        cout<<a/x+1;
    }else{

    cout<<a/x;
    }

}

if(n*x==t){

    cout<<"EXACT!";

}
return 0;
}
