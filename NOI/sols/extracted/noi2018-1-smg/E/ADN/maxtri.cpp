#include<iostream>
using namespace std;
int main(){
long long razmerPurvi;
long long razmerVtori;
long long razmerTreti;
cin>>razmerPurvi;
cin>>razmerVtori;
cin>>razmerTreti;
if(razmerPurvi>=razmerVtori,razmerTreti){
    cout<<razmerPurvi;
    if(razmerPurvi<razmerVtori){
        cout<<razmerVtori<<razmerPurvi;
        if(razmerPurvi<razmerTreti){
            cout<<razmerTreti<<razmerPurvi;
            if(razmerPurvi>=razmerTreti){
                cout<<razmerPurvi<<razmerTreti;
                }
            }
            if(razmerVtori>razmerPurvi){
                cout<<razmerVtori<<razmerPurvi;
                if(razmerVtori<razmerPurvi){
                    cout<<razmerPurvi<<razmerVtori;
                    if(razmerVtori>razmerTreti){
                        cout<<razmerVtori<<razmerTreti;
                        if(razmerVtori<razmerTreti){
                            cout<<razmerTreti<<razmerVtori;
                        }
                    }
                }
            }
        }
    }
return 0;
}
