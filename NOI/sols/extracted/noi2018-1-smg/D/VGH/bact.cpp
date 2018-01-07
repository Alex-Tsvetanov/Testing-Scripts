#include<iostream>
using namespace std;
int main(){
int A,B,C,D,K;
cin>>A>>B>>C>>D>>K;
if(A>=0 && D>=A && B>=0 && B<=1000 && D>=0 && D<=1000 && K>=1 && K<=1000000000000000000){
    while(K>0){
        A=A*B;
        if(A<=C){
            A=0;
        }else{
        A=A-C;
        if(A>D){
            A=D;
        }
        }
        K=K-1;
    }
cout<<A;
}

return 0;
}
