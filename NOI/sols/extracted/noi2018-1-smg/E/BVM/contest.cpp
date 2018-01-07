#include<iostream>
using namespace std;
int main()
{
    long long broi_zadachi,vreme,zapoznati,minuti_za_nepoznati;
    cin>>broi_zadachi>>vreme>>zapoznati>>minuti_za_nepoznati;
    if(zapoznati>0){
    vreme--;
    }
    broi_zadachi-=zapoznati;
    vreme*=60;
    long long buffer;
    buffer=broi_zadachi;
    broi_zadachi=broi_zadachi-(vreme/minuti_za_nepoznati);
    vreme=vreme-(buffer*minuti_za_nepoznati);
    if(vreme>0){
        cout<<"YES \n";
        cout<<vreme;
    }
    if(vreme==0){
        cout<<"EXACT !";
    }
    if(vreme<0){
    cout<<"NO \n";
    cout<<-vreme<<"\n";
    cout<<broi_zadachi;
    }
    cout<<"\n";
    return 0;
}
