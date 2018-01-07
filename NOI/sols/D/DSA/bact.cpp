#include<iostream>
using namespace std;
int main (){
    long long A,B,C,D,K,ostawashtiBakterii;
    cin>>A>>B>>C>>D>>K;
    ostawashtiBakterii=B-C;
    if(ostawashtiBakterii<0){
        cout<<0;
        cout<<endl;
    }
    if(B>C){
        cout<<D;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
