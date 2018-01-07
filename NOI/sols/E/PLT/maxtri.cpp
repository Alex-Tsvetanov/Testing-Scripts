#include<iostream>
using namespace std;
int main(){
long long a,b,c,acb,abc,bca,bac,cba,cab,aaa,aac,aab;

cin>>a;cin>>b;cin>>c;
abc=a*100+b*10+c;
    acb=a*100+b*10+c;
    bac=b*100+a*10+c;
    bca=b*100+c*10+a;
    cab=c*100+a*10+b;
    cba=c*100+b*10+a;
if(a==0 and b==0 and c==0){
    cout<<"error";
}else{

    if(abc>=acb and abc>=bca and abc>=bac and abc>=cba and abc>=cab){
        cout<<abc;
    }
    if(acb>abc and acb>bca and acb>bac and acb>cba and acb>cab){
cout<<acb;
    }
    if(bca>abc and bca>acb and bca>=bac and  bca>cab and bca>cba){
        cout<<bca;
    }
if(bac>abc and bac>acb and bac>bca and  bac>cab and bac>cba){
        cout<<bac;
    }
    if(cab>abc and cab>acb and cab>bca and  cab>bac and cab>=cba){
        cout<<cab;
    }
    if(cba>abc and cba>acb and cba>bca and  cba>bac and cba>cab){
        cout<<cba;
    }
}
return 0;
}
