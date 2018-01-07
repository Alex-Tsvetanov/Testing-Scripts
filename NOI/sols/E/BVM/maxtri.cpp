#include<iostream>
using namespace std;
int main()
{
    long long chislo[3],indeks,nai_golqmo;
    cin>>chislo[0]>>chislo[1]>>chislo[2];
    nai_golqmo=-1;
    indeks=0;
    for(long long broqch = 0 ; broqch < 3 ; broqch++){
        for(long long br2 = 0 ; br2<3 ; br2++)
        {
            if(nai_golqmo<chislo[br2]){
                indeks=br2;
                nai_golqmo=chislo[br2];
            }
        }
    cout<<nai_golqmo;
    chislo[indeks]=-1;
    nai_golqmo=-1;
    indeks=0;
    }
    cout<<"\n";
    return 0;
}
