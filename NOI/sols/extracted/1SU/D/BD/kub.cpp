#include<iostream>
using namespace std;
int main (){
    long long a,b,c,x,p,s,str[3];
    cin>>a>>b>>c;
    if(a>b){
        x=a;
        a=b;
        b=x;
    }
    if(a>c){
        x=a;
        a=c;
        c=x;
    }
    if(b>c){
        x=b;
        b=c;
        c=x;
    }
    if(a*b*c==1){
        cout<<0<<" "<<0<<" "<<0<<" "<<0<<" "<<0<<" "<<0<<" "<<1;
    }
    if(a==1 && b==1 && c>1){
        cout<<0<<" "<<0<<" "<<0<<" "<<0<<" "<<c-2<<" "<<2<<" "<<0;
    }
    if(a==1 && b>1 && c>1){
        cout<<0<<" "<<0<<" "<<0<<" "<<2*(b+c-4)<<" "<<4<<" "<<0<<" "<<0;
    }
    if(a>1 && b>1 && c>1){
            p=2*(a+b)-4;
            s=a*b;
            str[0]=s-p;

            p=2*(c+b)-4;
            s=c*b;
            str[1]=s-p;

            p=2*(a+c)-4;
            s=a*c;
            str[2]=s-p;

        cout<<(a-2)*(b-2)*(c-2)<<" "<<(str[1]+str[2]+str[0])*2<<" "<<4*(a+b+c-6)<<" "<<8<<" "<<0<<" "<<0<<" "<<0;
    }
return 0;
}
