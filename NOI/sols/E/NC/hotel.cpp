#include<iostream>
using namespace std;
int main() {
long long n;
cin>>n;
if(n%3==0){
    n=n/3;
    cout<<n;
    if(n%3==1){
        n=n-4;
        n=n/3;
        cout<<"2"<<" "<<n;
        if(n%3==2){
        n=n-2;
        n=n/3;
        cout<<"1"<<" "<<n;
        }
    }
}
cout<<"\n"<<endl;
return 0;
}
