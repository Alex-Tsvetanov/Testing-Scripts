#include <iostream>
using namespace std;

int main(){
    long long a,b,c,buf=0,bud=0,bub=0,a0,a1,a2,a3,a4,a5,a6;
    cin >> a >> b >> c;
    ///0
    if(a>2 and b>2 and c>2){
        a0=(a-2)*(b-2)*(c-2);
    }else{
        a0=0;
    }
    ///1
    if(a==1 or b==1 or c==1){
        a1=0;
    }else{
        a1=2*((a-2)*(b-2)+(a-2)*(c-2)+(b-2)*(c-2));
    }
    ///2
    if(a==1 and b!=1 and c!=1){
        a2=(b-2)*(c-2);
        bub++;
    }
    if(a!=1 and b==1 and c!=1){
        a2=(a-2)*(c-2);
        bub++;
    }
    if(a==1 and b!=1 and c==1){
        a2=(b-2)*(a-2);
        bub++;
    }
    if(a!=1 and b!=1 and c!=1){
        a2=4*(a+b+c-6);
        bub++;
    }
    if(bub==0){
        a2=0;
    }
    ///4
    if(a==1 and b==1 and c!=1){
        a4=c-2;
        bud++;
    }
    if(a==1 and c==1 and b!=1){
        a4=b-2;
        bud++;
    }
    if(c==1 and b==1 and a!=1){
        a4=a-2;
        bud++;
    }
    if(bud==0){
        a4=0;
    }
    ///5
    if(a==1 and b==1 and c!=1){
        a5=2;
        buf++;
    }
    if(a==1 and c==1 and b!=1){
        a5=2;
        buf++;
    }
    if(c==1 and b==1 and a!=1){
        a5=2;
        buf++;
    }
    if(buf==0){
        a5=0;
    }
    ///6
    if(a==1 and b==1 and c==1){
        a6=1;
    }else{
        a6=0;
    }
    ///3
    a3=(a*b*c)-(a0+a1+a2+a4+a5+a6);
    cout << a0 << " " << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << endl;
return 0;
}
