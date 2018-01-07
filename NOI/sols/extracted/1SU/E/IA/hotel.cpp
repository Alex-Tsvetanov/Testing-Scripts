#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n%3==2){
        cout<<1<<" "<<n/3;
    }
    if(n%3==0){
        cout<<0<<" "<<n/3;
    }
    if(n%3==1){
        cout<<(n-(n/3-1)*3)/2<<" "<<n/3-1;
    }

    return 0;
}
