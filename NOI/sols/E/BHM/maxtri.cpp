#include<iostream>
using namespace std;
int main(){
long long a,b,c;
cin>>a>>b>>c;
if(a>=b and a>=c){
    cout<<a;
    if(b>=c){
        cout<<b<<c;
    }else{
        cout<<c<<b;
    }
}else{
if(b>=a and b>=c){
        cout<<b;
    if(a>=c){
        cout<<a<<c;
    }else{
        cout<<c<<a;
    }
    }else{
        if(c>=a and c>=b){
            cout<<c;
            if(a>=b){
                cout<<a<<b;
            }else{
                cout<<b<<a;
            }
        }
    }
}
cout<<"\n";
return 0;
}
