#include <iostream>
using namespace std;
int main(){

long long n,t,f,x,vremeZaOstanali,tVMinuti,ostanali,ostatak,nujnoVreme,ostanaliNO;
cin>>n>>t>>f>>x;
tVMinuti=t*60;
ostanali=n-f;
vremeZaOstanali=ostanali*x;
nujnoVreme=vremeZaOstanali+60;
if(nujnoVreme<tVMinuti){
    cout<<"YES"<<"   ";
    ostatak=tVMinuti-nujnoVreme;
    cout<<ostatak;
}
if(nujnoVreme==tVMinuti){
    cout<<"EXACT!";
}
if(nujnoVreme>tVMinuti){
    cout<<"NO"<<"   ";
    ostatak=nujnoVreme-tVMinuti;
    cout<<ostatak<<"   ";
    if(ostatak%x!=0){
        ostanaliNO=ostatak/x+1;
    }else{
    ostanaliNO=ostatak/x;
    }
    cout<<ostanaliNO;
}

return 0;
}
