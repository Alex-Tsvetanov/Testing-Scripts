#include <iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int a, b, c, d;
long long k;
cin>>a>>b>>c>>d>>k;
while(a>0 && k>0){
        a=a*b;
        if(a>=c){
                a=a-c;
        }else{
                a=0;
        }
        if(a>d){
                a=d;
        }
        if(a>=d && d*b-c>d){
                cout<<d<<endl;
                return 0;
        }
        k--;
}
cout<<a<<endl;
return 0;
}
