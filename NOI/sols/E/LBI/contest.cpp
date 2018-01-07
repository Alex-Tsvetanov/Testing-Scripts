#include<iostream>
using namespace std ;
int main() {
    long long vreme,zadachi,reseni,ostanalivreme,kolkoostanali,segashno=0,i=0,cqlovreme=0;
    cin>>zadachi>>vreme>>reseni>>ostanalivreme;
    vreme=vreme*60;
    segashno=segashno+60;
    kolkoostanali=zadachi-reseni;
    cqlovreme=kolkoostanali*ostanalivreme;
    segashno=segashno+cqlovreme;
    if(segashno<vreme) {
        cout<<"YES"<<endl<<vreme-segashno<<endl;
    }
    if(segashno==vreme) {
        cout<<"EXACT!"<<endl;
    }
    if(segashno>vreme) {
        cout<<"NO"<<endl<<segashno-vreme<<endl;
        if((segashno-vreme)%ostanalivreme==0) {
            cout<<(segashno-vreme)/ostanalivreme<<endl;
        } else {
            cout<<(segashno-vreme)/ostanalivreme+1<<endl;
        }

    }
    return 0;
    main();
}
