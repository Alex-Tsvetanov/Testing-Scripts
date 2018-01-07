#include<iostream>
using namespace std;
int main(){
int A,B,C,D;
long long K;
cin>>A>>B>>C>>D>>K;
int bactNum=A;
const int bactMax=D;
for(int i=0;i<K;i++){
    bactNum=bactNum*B-C;
    if(bactNum>bactMax){
        bactNum=bactMax;
    }
}
if(bactNum<0){
    bactNum=0;
}
cout<<bactNum;
return 0;
}
