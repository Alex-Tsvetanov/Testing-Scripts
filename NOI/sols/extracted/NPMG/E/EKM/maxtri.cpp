#include <iostream>
using namespace std;
int main(){

long long cifra1,cifra2,cifra3,chislo1,chislo2,chislo3,chislo4,chislo5,chislo6,NGChislo;
cin>>cifra1>>cifra2>>cifra3;
NGChislo=0;
chislo1=cifra1*100+cifra2*10+cifra3;
if (chislo1>NGChislo){
    NGChislo=chislo1;
}
chislo2=cifra1*100+cifra3*10+cifra2;
if (chislo2>NGChislo){
    NGChislo=chislo2;
}
chislo3=cifra2*100+cifra3*10+cifra1;
if (chislo3>NGChislo){
    NGChislo=chislo3;
}
chislo4=cifra2*100+cifra1*10+cifra3;
if (chislo4>NGChislo){
    NGChislo=chislo4;
}
chislo5=cifra3*100+cifra1*10+cifra2;
if (chislo5>NGChislo){
    NGChislo=chislo5;
}
chislo6=cifra3*100+cifra2*10+cifra1;
if (chislo6>NGChislo){
    NGChislo=chislo6;
}
cout<<NGChislo;

return 0;
}
