#include<iostream>
using namespace std;
int main(){
long long kpn,kpe,kpd,kpt,kp4,kpp,kp6,s1,s2,s3,ro,re,ri,ra,ru,ry,s4,s5,s6;
cin>>s1>>s2>>s3;
s4=s1-2;
s5=s2-2;
s6=s3-2;
kpt=8;
kp4=0;
kpp=0;
kp6=0;
kpn=(s1-2)*(s2-2)*(s3-2);
ro=(s1-2+s2-2)*2;
re=(s3-2+s2-2)*2;
ri=(s1-2+s3-2)*2;
ra=(s4*s5)*2;
ru=(s6*s5)*2;
ry=(s4*s6)*2;
kpd=ro+re+ri;
kpe=ra+ru+ry;
cout<<kpn<<" "<<kpe<<" "<<kpd<<" "<<kpt<<" "<<kp4<<" "<<kpp<<" "<<kp6;
return 0;
}
