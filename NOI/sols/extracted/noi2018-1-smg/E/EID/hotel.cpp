#include<iostream>
using namespace std;
int main(){
    long long n, dvojni_stai, trojni_stai;
    cin>>n;
    if(n%3==0){
        dvojni_stai=0;
        trojni_stai=n/3;
    }
    if(n%3==1){
        dvojni_stai=2;
        trojni_stai=(n-2*2)/3;
    }
    if(n%3==2){
        dvojni_stai=1;
        trojni_stai=(n-1*2)/3;
    }
    cout<<dvojni_stai<<" "<<trojni_stai;
return 0;
}

