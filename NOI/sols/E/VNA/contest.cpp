#include<iostream>
using namespace std;

int main(){
long long brZadachiObshto,vremeObshto,brZadachiPurviChas,brMinutiZaOst;
cin>>brZadachiObshto>>vremeObshto>>brZadachiPurviChas>>brMinutiZaOst;
vremeObshto-=1;
brZadachiObshto-=brZadachiPurviChas;
vremeObshto*=60;
    if(vremeObshto>brMinutiZaOst*brZadachiObshto){
        cout<<"YES"<<endl<<vremeObshto-(brMinutiZaOst*brZadachiObshto)<<endl;
    }
    else if(vremeObshto==brMinutiZaOst*brZadachiObshto){
        cout<<"EXACT!"<<endl;
    }
    else if(vremeObshto<brMinutiZaOst*brZadachiObshto){
        cout<<"NO"<<endl<<(brMinutiZaOst*brZadachiObshto)-vremeObshto<<endl<<brZadachiObshto-(vremeObshto/brMinutiZaOst)  <<endl;
    }
return 0;
}
