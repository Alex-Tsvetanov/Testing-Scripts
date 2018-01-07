#include <iostream>
using namespace std;
int main(){
    long long a,b,c,d,k,bact;
    cin>>a>>b>>c>>d>>k;
    bact=a;
    for(long long i=0;i<k;i++){
        bact=bact*b;
        if(bact<c){
            cout<<0;
            return 0;
        }
        bact=bact-c;
        if(bact>d){
            bact=d;
        }
    }
    cout<<bact;
return 0;
}
