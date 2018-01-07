#include<iostream>
using namespace std;
int main(){
long long A,B,C,D,K,i,broiBakterii,ostanaliBakterii,broi;
A>=0;
B>=0;
C>=0;
D<=1000;
A<=D;
1<=K<=1000000000000000000;
cin>>A>>B>>C>>D>>K;
        broiBakterii=A*B;
for(i=0;K=i;i=i+1){
        broiBakterii=ostanaliBakterii*B;
if(broiBakterii>C){
     ostanaliBakterii=broiBakterii-C;
}else{
     cout<<0;
}
if(ostanaliBakterii>D){
    ostanaliBakterii=D;
}else{
ostanaliBakterii=ostanaliBakterii;
}
}
if(broiBakterii<C){
        cout<<0;
}else{
broi=broiBakterii+2;
cout<<broi;
}
return 0;
}
