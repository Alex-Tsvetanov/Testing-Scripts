#include<iostream>
using namespace std;
int main(){
int long long A,B,C,D,K,nacalo,br,ost,kraj;
cin>>A>>B>>C>>D>>K;
nacalo=A*B;
ost=nacalo-C;
do{
    nacalo=A*B;
ost=nacalo-C;
if(ost<C){  br=0;
    cout<<0;
    break;
}
else{
    if(ost>D)ost=D;
    A=ost;
}
K--;

}
while(K>0);
if(br!=0){
cout<<ost;
}







return 0;
}
