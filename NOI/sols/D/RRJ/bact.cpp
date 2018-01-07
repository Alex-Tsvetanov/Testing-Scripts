#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    int neshto=a*b-c;
    if(c>a*b){
        cout<<0;
    }
    if(neshto>d){
        neshto=d;
    }
    cout<<(neshto+d)-k;
return 0;
}
