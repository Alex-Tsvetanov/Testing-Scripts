#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;

    long long stepenuvane(long long chislo,long long stepen){
        long long otg=1;
        for(int i=0;i<stepen;i++){
            otg*=chislo;
        }
        return otg;
    }

    long long n,p;
    long long broinaSistema[255];

int main() {

    cin  >> n >> p;
    long long chislo=0;

    for(broinaSistema[0]=1; broinaSistema[p]!=1; broinaSistema[0]++){

        if(broinaSistema[p]==1){
            cout << stepenuvane(p,p-1);
            break;
        }

        for(int j=0;j<p;j++){
            if(broinaSistema[j]>1){
                broinaSistema[j+1]++;
                broinaSistema[j]=0;
            }
        }
        chislo=0;
        for(int j=0;j<p;j++){
            chislo+=broinaSistema[j]*stepenuvane(p,j);;
        }
        if(chislo<=n){
            cout << chislo << endl;
            for(int m=0;m<p;m++){
            }
        }else{
        break;
        }
    }

    return 0;
}
