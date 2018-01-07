#include<iostream>
using namespace std;
int main(){
long long n;
long long troini;
long long dvoini;
long long ostatuk;
cin>>n;
if(2<=n && n<=100){
    troini=n/3;
if(n%2>0){
        ostatuk=n-troini*3;
        troini=ostatuk;
        dvoini=(n-troini*3)/2;
        cout<<dvoini<<" "<<troini;
        return 0;
}
cout<<troini;
}
return 0;
}
