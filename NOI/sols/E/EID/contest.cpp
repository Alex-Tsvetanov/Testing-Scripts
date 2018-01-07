#include<iostream>
using namespace std;
int main(){
    long long n, t, f, x, trudniZadachi, ostavashti_minuti_za_trudni_zadachi, neobhodimi_minuti;
    cin>>n>>t>>f>>x;
    trudniZadachi=n-f;
    ostavashti_minuti_za_trudni_zadachi=(t-1)*60;
    neobhodimi_minuti=trudniZadachi*x;
    if(ostavashti_minuti_za_trudni_zadachi-neobhodimi_minuti>0){
        cout<<"YES"<<endl<<ostavashti_minuti_za_trudni_zadachi-neobhodimi_minuti;
    }
      if(ostavashti_minuti_za_trudni_zadachi-neobhodimi_minuti==0){
        cout<<"EXACT!";
    }
      if(ostavashti_minuti_za_trudni_zadachi-neobhodimi_minuti<0){
            cout<<"NO"<<endl<<neobhodimi_minuti-ostavashti_minuti_za_trudni_zadachi;
        if((neobhodimi_minuti-ostavashti_minuti_za_trudni_zadachi)%x!=0){
            cout<<endl<<((neobhodimi_minuti-ostavashti_minuti_za_trudni_zadachi)/x)+1;
        }else{
            cout<<endl<<(neobhodimi_minuti-ostavashti_minuti_za_trudni_zadachi)/x;
        }
    }
return 0;
}
