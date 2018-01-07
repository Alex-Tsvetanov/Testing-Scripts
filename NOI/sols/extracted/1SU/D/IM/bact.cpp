#include<iostream>
using namespace std;
int main()
{
long long A,B,C,D,K,k1=0;
cin>>A>>B>>C>>D>>K;
while(k1<=K){

    A=A*B;
    if(A>C){
        A=A-C;
    }else{
         A=0;
        cout<<A;
    }
    if(A>=D){
        A=D;
    }
    k1=k1+1;
}
cout<<A;
return 0;

}
