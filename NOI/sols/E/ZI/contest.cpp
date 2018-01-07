#include<iostream>
using namespace std;
int main () {
long long zadachi, vreme,zad1,vremeZaZad2,vremeObshtoZaZad2,zad2,neresheni,neStiga,resheni;
cin>>zadachi>>vreme>>zad1>>vremeZaZad2;
vreme=vreme*60;
zad2=zadachi-zad1;
vremeObshtoZaZad2=zad2*vremeZaZad2;
if (vreme>vremeObshtoZaZad2+60) {
    cout<<"YES"<<endl;
    cout<<vreme-(vremeObshtoZaZad2+60);
}
if (vreme==vremeObshtoZaZad2+60) {
    cout<<"EXACT!";
}
if (vreme<vremeObshtoZaZad2+60) {
    cout<<"NO"<<endl;
    neStiga=(vreme-(vremeObshtoZaZad2+60))*-1;
    cout<<neStiga<<endl;
    resheni=(vreme-60)/vremeZaZad2;
    neresheni=zad2-resheni;
    cout<<neresheni;
}
return 0;
}
