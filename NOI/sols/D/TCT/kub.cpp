#include <iostream>
using namespace std;

int main(){
    long long a,b,c;
    long long boia[7]={0,0,0,0,0,0,0};
    cin>>a>>b>>c;
    if(a>b)swap(a,b);
    if(b>c)swap(b,c);
    if(a>b)swap(a,b);
    ///0
    boia[0]=(a-2)*(b-2)*(c-2);
    if(a<=1)boia[0]=0;
    ///1
    boia[1]=(((a-2)*(b-2))+((a-2)*(c-2))+((c-2)*(b-2)))*2;
    if(a<=1)boia[1]=0;
    ///2
    boia[2]=((a-2)+(b-2)+(c-2))*4;
    if(a<=1)boia[2]=(b-2)+(c-2);
    if(b<=1)boia[2]=0;
    ///3
    if(a>1)boia[3]=8;
    if(a<=1)boia[3]=((b-2)+(c-2))*2;
    if(b<=1)boia[3]=0;
    ///4
    if(a>1)boia[4]=0;
    if(a<=1)boia[4]=4;
    if(b<=1)boia[4]=c-2;
    if(c<=1)boia[4]=0;
    ///5
    if(b<=1)boia[5]=2;
    if(c<=1)boia[5]=0;
    ///6
    if(c<=1)boia[6]=1;
    ///output
    cout<<boia[0]<<' '<<boia[1]<<' '<<boia[2]<<' '<<boia[3]<<' '<<boia[4]<<' '<<boia[5]<<' '<<boia[6];
}
