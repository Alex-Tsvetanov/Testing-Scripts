#include<iostream>
using namespace std;
long long a,b,c,d,k;
int main(){
    cin>>a>>b>>c>>d>>k;
    for(long long i=0;i<k;++i){
        b+=a*b;
        b-=c;
        if(b>d){
            b=d;
        }
        if(b<=0){
            b=0;
            break;
        }
    }
    cout<<b;
    return 0;
}
