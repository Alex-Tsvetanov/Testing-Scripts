#include<iostream>
using namespace std;
int main(){
long long broiZadachi,produljitelnost,broiZPrezPurviChas,broiMinutiZaVsqkaEdnaOtZadachiste,broiPoSlojniZadachi;
long long VremeZaPoSlojniZad;
cin>>broiZadachi>>produljitelnost>>broiZPrezPurviChas>>broiMinutiZaVsqkaEdnaOtZadachiste;
produljitelnost=produljitelnost*60;
broiPoSlojniZadachi=broiZadachi-broiZPrezPurviChas;
VremeZaPoSlojniZad=broiPoSlojniZadachi*broiMinutiZaVsqkaEdnaOtZadachiste;
if(produljitelnost>60+VremeZaPoSlojniZad){
     cout<<"YES"<<endl;
     cout<<produljitelnost-(60+VremeZaPoSlojniZad);
}
if(produljitelnost<60+VremeZaPoSlojniZad){
     cout<<"NO"<<endl;
     cout<<(60+VremeZaPoSlojniZad)-produljitelnost<<endl;
     if(((60+VremeZaPoSlojniZad)-produljitelnost)%broiMinutiZaVsqkaEdnaOtZadachiste>0){
     cout<<((60+VremeZaPoSlojniZad)-produljitelnost)/broiMinutiZaVsqkaEdnaOtZadachiste+1;
     }
     if(((60+VremeZaPoSlojniZad)-produljitelnost)%broiMinutiZaVsqkaEdnaOtZadachiste==0){
     cout<<((60+VremeZaPoSlojniZad)-produljitelnost)/broiMinutiZaVsqkaEdnaOtZadachiste;
     }
}
if(produljitelnost==60+VremeZaPoSlojniZad){
     cout<<"EXACT!";
}

return 0;
}
