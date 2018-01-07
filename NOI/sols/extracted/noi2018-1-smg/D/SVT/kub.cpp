#include<iostream>
using namespace std;
int main(){
long long A,B,C,x0,x1,x2,x3,x4,x5,x6;
A<1000;
B<1000;
C<<1000;
cin>>A>>B>>C;
x2=((A-2)*4)+((B-2)*4)+((C-2)*4);
x3=8;
x4=0;
x5=0;
x6=0;
if(A>2 and B>2 and C>2){
        x0=C-2;
}else{
  x0=0;
}
if(A>=2 and B>=2 and A>=B){
    x1=(A-2)*2;
}
if(A>=2 and B>=2 and A<=B){
    x1=(B-2)*2;
}
if(A>=2 and C>=2 and A>=C){
    x1=(A-2)*2;
}
if(A>=2 and C>=2 and A<=C){
    x1=(C-2)*2;
}
if(C>=2 and B>=2 and C>=B){
    x1=(C-2)*2;
}
if(C>=2 and B>=2 and C<=B){
    x1=(B-2)*2;
}
if(A<=2 and B<=2 or A<=2 and C<=2 or B<=2 and C<=2){
  x1=0;
}
cout<<x0<<" "<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<" "<<x6;

return 0;
}
