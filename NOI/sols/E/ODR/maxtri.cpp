#include<iostream>
using namespace std;
int main(){
    long long cifra[3]{1,0,0}, indexCifra, naiGolqmo=0, broqch[3]{0,0,0};
    for(indexCifra=0;indexCifra<3;indexCifra++){
        cin>>cifra[indexCifra];
        if(cifra[0]==0 && cifra[1]==0 && cifra[2]==0){
            indexCifra=0;
            cifra[0]=10;
            cifra[1]=10;
            cifra[2]=10;
        }
        if(cifra[0]>9){
            indexCifra--;
            cifra[0]=5;
        }
        if(cifra[1]>9){
            indexCifra--;
            cifra[1]=5;
        }
        if(cifra[2]>9){
            indexCifra--;
            cifra[2]=5;
        }
    }
    if(cifra[0]>=cifra[1] && cifra[0]>=cifra[2] && broqch[0]<1){
        naiGolqmo+=cifra[0]*100;
        cifra[0]=-83;
        broqch[0]++;
    }
    if(cifra[1]>=cifra[0] && cifra[1]>=cifra[2] && broqch[0]<1){
        naiGolqmo+=cifra[1]*100;
        cifra[1]=-83;
        broqch[0]++;
    }
    if(cifra[2]>=cifra[1] && cifra[2]>=cifra[0] && broqch[0]<1){
        naiGolqmo+=cifra[2]*100;
        cifra[2]=-83;
        broqch[0]++;
    }
    if(cifra[0]>=cifra[1] && cifra[0]>=cifra[2] && broqch[1]<1){
        naiGolqmo+=cifra[0]*10;
        cifra[0]=-83;
        broqch[1]++;
    }
    if(cifra[1]>=cifra[0] && cifra[1]>=cifra[2] && broqch[1]<1){
        naiGolqmo+=cifra[1]*10;
        cifra[1]=-83;
        broqch[1]++;
    }
    if(cifra[2]>=cifra[1] && cifra[2]>=cifra[0] && broqch[1]<1){
        naiGolqmo+=cifra[2]*10;
        cifra[2]=-83;
        broqch[1]++;
    }
    if(cifra[0]>=cifra[1] && cifra[0]>=cifra[2] && broqch[2]<1){
        naiGolqmo+=cifra[0];
        cifra[0]=-83;
        broqch[2]++;
    }
    if(cifra[1]>=cifra[0] && cifra[1]>=cifra[2] && broqch[2]<1){
        naiGolqmo+=cifra[1];
        cifra[1]=-83;
        broqch[2]++;
    }
    if(cifra[2]>=cifra[1] && cifra[2]>=cifra[0] && broqch[2]<1){
        naiGolqmo+=cifra[2];
        cifra[2]=-83;
        broqch[2]++;
    }
    cout<<naiGolqmo;
}
