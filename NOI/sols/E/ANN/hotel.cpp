#include <iostream>
using namespace std;
int main (){
    long long n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<" ";
        cout<<0;
    }
    if(n%2!=0){
        cout<<(n-3)/2<<" ";
        cout<<1;
    }
return 0;
}
