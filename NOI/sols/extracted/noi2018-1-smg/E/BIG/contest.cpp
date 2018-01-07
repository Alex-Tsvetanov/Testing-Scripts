#include<iostream>;
using namespace std;
int main () {
long long brZadachi,chSus,zad1Ch,x,zdr,ian;
cin>>brZadachi>>chSus>>zad1Ch>>x;
brZadachi=brZadachi-zad1Ch;
chSus=chSus-1;
zdr=brZadachi*x;
chSus=chSus*60;
if(brZadachi*x==chSus){
    cout<<"EXACT";
}
if(brZadachi*x<chSus){
    cout<<"YES"<<endl<<chSus-zdr;

}
if(brZadachi*x>chSus){
   ian=0;
    cout<<"NO"<<endl<<zdr-chSus<<endl;
for(brZadachi=0;brZadachi*x<=chSus;brZadachi=brZadachi+1){
ian=ian+1;
}
cout<<ian;
}

return 0;
}
