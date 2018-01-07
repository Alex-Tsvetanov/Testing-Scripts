#include<iostream>
using namespace std;
int main(){
    int A,B,C,D;
    long long K;
    long long brBakterii;
    cin>>A>>B>>C>>D>>K;
    brBakterii=A;
    long long day;
    for(day=1;day<=K;day++){
        brBakterii=brBakterii*B;
        if(brBakterii<C){
            cout<<0<<endl;
            break;
        }
        brBakterii-=C;
        if(brBakterii>D){
            brBakterii=D;
            cout<<D<<endl;
            break;
        }
        if(day==1000){
            cout<<brBakterii<<endl;
            break;
        }
    }
    if(day==K+1){
        cout<<brBakterii<<endl;
    }
return 0;
}
