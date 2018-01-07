#include<iostream>
using namespace std;
int main (){
    long long a,b,c,d,k,i;
    cin>>a>>b>>c>>d>>k;
    for(i=0;i<k;i++){
        a=a*b;
        if(a>=c){
            a=a-c;
        }else{
            i=k;
            a=0;
        }
        if(a>d){
            a=d;
        }
    }
    cout<<a;
return 0;
}
