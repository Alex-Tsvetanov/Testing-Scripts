#include<iostream>
using namespace std;
int main(){
    long long a,b,c,kub[7];
    cin>>a>>b>>c;
    for(int d=0;d<7;d++){
        kub[d]=0;
    }
    if(a==1){
        kub[2]=(b-2)*(c-2);
        kub[3]=2*(b-2)+2*(c-2);
        kub[4]=4;
    }
    else if(b==1){
        swap(b,c);
        swap(a,c);
        kub[2]=(b-2)*(c-2);
        kub[3]=2*(b-2)+2*(c-2);
        kub[4]=4;
    }
    else if(a==1){
            swap(a,b);
            swap(a,c);
        kub[2]=(b-2)*(c-2);
        kub[3]=2*(b-2)+2*(c-2);
        kub[4]=4;

    }
    else if(a!=1 and b!=1 and c!=1){
        kub[0]=(a-2)*(b-2)*(c-2);
        kub[1]=2*((b-2)*(c-2)+(a-2)*(b-2)+(a-2)*(c-2));
        kub[2]=4*((b-2)+(c-2))+4*(a-2);
        kub[3]=8;
    }
    for(int m=0;m<7;m++){
        cout<<kub[m]<<" ";
    }
    return 0;
}
