#include <iostream>
using namespace std;
int main(){
    long long a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    for(int m=0;m<k;m++){
        a=a*b;
        if(a>=c){
            a=a-c;
            if(a>d){
                a=d;
            }
        }
        else{
            a=0;
            m=k+1;
        }

    }
    cout<<a;
    return 0;
}
