#include<iostream>
using namespace std;
int main(){
long long A,B,C,D,K,NoviBacterii,Ostanali_Bacterii_Sled_Experimenta,Po_Predishni_Ostanali_Bacterii_Sled_Experimenta,i=0;
cin>>A;
cin>>B;
NoviBacterii=A*B;
cin>>C;
cin>>D;
cin>>K;

if(NoviBacterii<C){
    C=NoviBacterii;
    Po_Predishni_Ostanali_Bacterii_Sled_Experimenta=0;
}

Po_Predishni_Ostanali_Bacterii_Sled_Experimenta=NoviBacterii-C;

if(Po_Predishni_Ostanali_Bacterii_Sled_Experimenta>D){
    Po_Predishni_Ostanali_Bacterii_Sled_Experimenta=D;
}



while(i<K){
i++;
if(Po_Predishni_Ostanali_Bacterii_Sled_Experimenta<C){
   C=Po_Predishni_Ostanali_Bacterii_Sled_Experimenta*B;
   Ostanali_Bacterii_Sled_Experimenta=0;
}
Ostanali_Bacterii_Sled_Experimenta=(Po_Predishni_Ostanali_Bacterii_Sled_Experimenta*B)-C;
if(Ostanali_Bacterii_Sled_Experimenta>D){
    Ostanali_Bacterii_Sled_Experimenta=D;

}

}

cout<<Ostanali_Bacterii_Sled_Experimenta;

return 0;
}
