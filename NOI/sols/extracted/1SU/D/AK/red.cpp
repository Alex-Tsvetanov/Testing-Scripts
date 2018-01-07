#include<iostream>
using namespace std;
int main(){
    int kolkochisla,kolkowuprosa,redi[100000],sichvup[10000],Lbroi,Rbroi;
    cin>>kolkochisla>>kolkowuprosa;
    for(int i=0;i<kolkochisla;i++){
        cin>>redi[i];
    }
    for(int i=0;i<kolkowuprosa;i++){
        cin>>sichvup[i];
    }
    for(int i=0;i<kolkowuprosa;i++){
        Lbroi=0;
        Rbroi=0;
        for(int j=(sichvup[i]-1)-1;j>=0;j--){
            if(redi[j]==redi[sichvup[i]-1]){
                Lbroi++;
            }
        }
        for(int j=sichvup[i];j<kolkochisla;j++){
            if(redi[j]==redi[sichvup[i]-1]){
                Rbroi++;
            }
        }
        cout<<Lbroi<<" "<<Rbroi<<"\n";
    }
    return 0;
}
