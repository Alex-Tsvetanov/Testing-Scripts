#include<iostream>
using namespace std;
int main(){
    long long hora;
    cin>>hora;
    if(hora%3==0){
        cout<<0<<' '<<hora/3;
        return 0;
    }
    if(hora%3==2){
        cout<<1<<' '<<hora/3;
        return 0;
    }
    if(hora%3==1){
        cout<<2<<' '<<hora/3-1;
        return 0;
    }
    return 0;
}

