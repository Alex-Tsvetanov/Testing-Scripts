#include<iostream>
using namespace std;
int main(){
long long DadeniNZ,DadeniTCH,IsbraniFZ,NeobxodimiXM,ostM,nedostM,ostZ;
cin>>DadeniNZ;
cin>>DadeniTCH;
cin>>IsbraniFZ;
cin>>NeobxodimiXM;
DadeniTCH=60*DadeniTCH;
DadeniNZ>=5;
DadeniNZ=100;
DadeniTCH>=2;
DadeniTCH<=24;
IsbraniFZ>=1;
IsbraniFZ<DadeniNZ;
NeobxodimiXM>=10;
NeobxodimiXM<=60;
ostM=DadeniTCH-NeobxodimiXM*IsbraniFZ;
nedostM=IsbraniFZ*NeobxodimiXM-DadeniTCH;
ostZ=DadeniNZ-IsbraniFZ*DadeniTCH;
if(DadeniTCH>IsbraniFZ*NeobxodimiXM){
    cout<<"YES"<<"\n"<<ostM;
}
    if(DadeniTCH<IsbraniFZ*NeobxodimiXM){
        cout<<"NO"<<"\n"<<nedostM<<"\n"<<ostZ;
    }
        if(DadeniTCH==IsbraniFZ*NeobxodimiXM){
            cout<<"EXACT!";
        }
return 0;
}
