#include <iostream>
using namespace std;

int main(){

    long long chisla, proverki;
    long long i, j;
    cin>>chisla>>proverki;
    long long chislo[chisla], proverka[proverki];
    long long broi;
    for(i=0;i<chisla;i++){
        cin>>chislo[i];
    }
    for(i=0;i<proverki;i++){
        cin>>proverka[i];
        proverka[i]--;
    }

    for(i=0;i<proverki;i++){
        for(broi=0,j=proverka[i]-1;j>=0;j--){
            if(chislo[j]==chislo[proverka[i]]){
                broi++;
            }
        }
        cout<<broi<<' ';
        for(broi=0,j=proverka[i]+1;j<chisla;j++){
            if(chislo[j]==chislo[proverka[i]]){
                broi++;
            }
        }
        cout<<broi<<endl;
    }

}
/**
10 4
2 1 3 2 2 5 4 2 3 5
1 7 4 10
*/
