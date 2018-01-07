#include<iostream>
using namespace std;
int main(){
long long A, B, C, D, K, dni, pati;
cin>>A>>B>>C>>D>>K;
dni=0;
pati=0;
for(B=A*B;dni<K;dni=dni+1){
    if(C<B){
        B=B-C;
    }
    if(B<C){
        if(pati<1){
            cout<<"";
            cout<<"0";
        }
    }
    pati=pati+1;
    if(C<B){
        A=1;
        A=A*B;
        B=A*B;
        }
    if(B>D){
        B=D;
    }
}
if(C<B){
    cout<<B;
}
return 0;
}
