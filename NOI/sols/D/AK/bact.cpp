#include<iostream>
using namespace std;
int main(){
    long long nachBroi,putiUgolem,kolkoVz,MaxNaKraiNaDen,naKoiDen,segBroi;
    cin>>nachBroi>>putiUgolem>>kolkoVz>>MaxNaKraiNaDen>>naKoiDen;
    segBroi=nachBroi;
    for(long long i=0;i<naKoiDen;i++){
        segBroi*=putiUgolem;
        if(segBroi<kolkoVz){
            segBroi=0;
            break;
        }
        segBroi-=kolkoVz;
        if(segBroi>MaxNaKraiNaDen){
            segBroi=MaxNaKraiNaDen;
        }
    }
    cout<<segBroi;
    return 0;
}
