#include <iostream>
using namespace std;
int main(){
    long long a,b,c,d,k,d1;
    cin>>a>>b>>c>>d>>k;
    while(k>0){a=a*b+a;k=k-1;}
    if(a>c){a=a-c;if(a>d){d1=a-d;a=a-d1;}}else{a=0;}cout<<a;return 0;}
