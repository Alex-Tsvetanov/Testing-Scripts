#include<iostream>
using namespace std;
int main(){
    long long zadachi, vreme, PurviChas, vremeReshavane;
    bool vsichkoETochno=false;
    while(!vsichkoETochno){
        cin>>zadachi;
        while(5>zadachi || zadachi>100){
            cin>>zadachi;
            cout<<"Z";
        }
        cin>>vreme;
        while(2>vreme || vreme>24){
            cin>>vreme;
            cout<<"V";
        }
        cin>>PurviChas;
        while(1>PurviChas || PurviChas>=zadachi){
            cin>>PurviChas;
            cout<<"PC";
        }
        cin>>vremeReshavane;
        while(10>vremeReshavane || vremeReshavane>60){
            cin>>vremeReshavane;
            cout<<"VR";
        }
        vsichkoETochno=true;
    }
    vreme*=60;
    vreme-=60;
    zadachi-=PurviChas;
    if(zadachi*vremeReshavane<vreme){
        cout<<"YES\n"<<vreme-(zadachi*vremeReshavane);
    }
    if(zadachi*vremeReshavane==vreme){
        cout<<"EXACT!";
    }
    if(zadachi*vremeReshavane>vreme){
        cout<<"NO\n"<<(zadachi*vremeReshavane)-vreme<<"\n"<<((zadachi*vremeReshavane)-vreme)/vremeReshavane;
    }
    return 0;
}
