#include<iostream>
using namespace std;
int main(){
long long bactVNachaloto,bactNaMqstotoNaEdna,zaEksperimenti,maksOstanali;
cin>>bactVNachaloto>>bactNaMqstotoNaEdna>>zaEksperimenti;
long long dni,ostanaliBact;
cin>>maksOstanali>>dni;
bactVNachaloto=bactVNachaloto*bactNaMqstotoNaEdna;

    if(bactVNachaloto<zaEksperimenti){
        cout<<"0";
        return 0;
        }else{
            ostanaliBact=bactVNachaloto-zaEksperimenti;
            if(ostanaliBact>maksOstanali){
            ostanaliBact=maksOstanali;
                }
            }

for(int a=1;a<=dni;a++){
ostanaliBact=ostanaliBact*bactNaMqstotoNaEdna;
    if(bactVNachaloto<zaEksperimenti){
        cout<<"0";
        return 0;
        }else{
            ostanaliBact=ostanaliBact-zaEksperimenti;
            if(ostanaliBact>maksOstanali){
            ostanaliBact=maksOstanali;
                }
            }
}
cout<<ostanaliBact;
return 0;
}
