#include<iostream>
using namespace std;
int main(){
    long long deca, troini=0, dvoini=0, nastanqvane2=true, nastanqvane3=true;
    cin>>deca;
    if(deca<3 || deca==4){
        nastanqvane3=false;
    }
    while(nastanqvane3){
        deca-=3;
        troini++;
        if(deca<3 || deca==4){
            nastanqvane3=false;
        }
    }
    if(deca<2){
        nastanqvane2=false;
    }
    while(nastanqvane2){
        deca-=2;
        dvoini++;
        if(deca<2){
            nastanqvane2=false;
        }
    }
    cout<<dvoini<<" "<<troini;
    return 0;
}
