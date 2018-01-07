#include <iostream>
using namespace std;
int main(){
int A,B,C,D,K,checker=0;
cin>>A>>B>>C>>D>>K;
while(K>0){
A=A*B;
if(A<C)
    checker=1;
A=A-C;
if(A>D)
    A=D;
K=K-1;
}
if(checker==1){
A=0;
}
cout<<A;
return 0;}
