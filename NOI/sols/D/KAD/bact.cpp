#include<iostream>
using namespace std;
int main(){
    long long a,b,c,d,k,i;
    cin>>a>>b>>c>>d>>k;
    if(a==1 and b==1 and d>1 and  c==0){
            cout<<1<<endl;
            return 0;
    }
    for(i=0;i<k;i++){
            a*=b;
            if(a>=c){
                    a-=c;
                    if(a>=d){
                            a=d;
                            break;
                    }
            }else{
                    cout<<0<<endl;
                    return 0;
            }
    }
    cout<<a<<endl;
return 0;
}
