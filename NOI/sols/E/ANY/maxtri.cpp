#include<iostream>
using namespace std;
int main () {
long long chislo1,chislo2,chislo3,chislo4,chislo5,chislo6,naiGolqmoChislo;
int a,b,c;
cin>>a>>b>>c;
chislo1=a*100+b*10+c;
chislo2=a*100+c*10+b;
chislo3=b*100+a*10+c;
chislo4=b*100+c*10+a;
chislo5=c*100+b*10+a;
chislo6=c*100+a*10+b;
naiGolqmoChislo=chislo1;
if(naiGolqmoChislo<chislo2) {
    naiGolqmoChislo=chislo2;
}
if(naiGolqmoChislo<chislo3) {
    naiGolqmoChislo=chislo3;
}
if(naiGolqmoChislo<chislo4) {
    naiGolqmoChislo=chislo4;
}
if(naiGolqmoChislo<chislo5) {
    naiGolqmoChislo=chislo5;
}
if(naiGolqmoChislo<chislo6) {
    naiGolqmoChislo=chislo6;
}
cout<<naiGolqmoChislo;
return 0;
}
