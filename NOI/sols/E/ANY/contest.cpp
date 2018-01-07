#include<iostream>
using namespace std;
int main () {
long long ostavashtiZadachiPrezVtoriqChas,ostavashtoVremePrezVtoriqChas;
long long kolkoMinutiPrediKraqNaSustezanietoEPriklqchilPetur,kolkoMinutiNeSaDostignaliNaPeturZaDaRechiVsichkiZadachi;
long long kolkoNerecheniZadachiImaPetur;
int n,t,f,x;
cin>>n>>t>>f>>x;
ostavashtoVremePrezVtoriqChas=t-1;
ostavashtiZadachiPrezVtoriqChas=n-f;
ostavashtoVremePrezVtoriqChas=ostavashtoVremePrezVtoriqChas*60;
if(ostavashtoVremePrezVtoriqChas>ostavashtiZadachiPrezVtoriqChas*x) {
    kolkoMinutiPrediKraqNaSustezanietoEPriklqchilPetur=ostavashtoVremePrezVtoriqChas-ostavashtiZadachiPrezVtoriqChas*x;
    cout<<"YES \n"<<kolkoMinutiPrediKraqNaSustezanietoEPriklqchilPetur<<endl;
}
if(ostavashtoVremePrezVtoriqChas<ostavashtiZadachiPrezVtoriqChas*x) {
    kolkoMinutiNeSaDostignaliNaPeturZaDaRechiVsichkiZadachi=ostavashtoVremePrezVtoriqChas-ostavashtiZadachiPrezVtoriqChas*x;
    kolkoMinutiNeSaDostignaliNaPeturZaDaRechiVsichkiZadachi=kolkoMinutiNeSaDostignaliNaPeturZaDaRechiVsichkiZadachi+(-kolkoMinutiNeSaDostignaliNaPeturZaDaRechiVsichkiZadachi*2);
    if(kolkoMinutiNeSaDostignaliNaPeturZaDaRechiVsichkiZadachi/x!=0) {
    kolkoNerecheniZadachiImaPetur=1+kolkoMinutiNeSaDostignaliNaPeturZaDaRechiVsichkiZadachi/x;
    cout<<"NO \n"<<kolkoMinutiNeSaDostignaliNaPeturZaDaRechiVsichkiZadachi<<"\n";
    cout<<kolkoNerecheniZadachiImaPetur;
    }else{
        kolkoNerecheniZadachiImaPetur=kolkoMinutiNeSaDostignaliNaPeturZaDaRechiVsichkiZadachi/x;
        cout<<"NO \n"<<kolkoMinutiNeSaDostignaliNaPeturZaDaRechiVsichkiZadachi<<"\n";
        cout<<kolkoNerecheniZadachiImaPetur;
    }
}
if(ostavashtoVremePrezVtoriqChas==ostavashtiZadachiPrezVtoriqChas*x) {
    cout<<"EXACT"<<endl;
}


return 0;
}

