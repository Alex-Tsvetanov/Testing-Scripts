#include<iostream>
using namespace std;
int main()
{
    long long broi_uchenici,dvoini_stai=0,troini_stai=0,buffer;
    cin>>broi_uchenici;
    for(long long br = 0 ; dvoini_stai*2+troini_stai*3!=broi_uchenici ; br++){
        troini_stai=(broi_uchenici-br)/3;
        buffer=broi_uchenici%3+br*3;
        if(buffer%2==0){
        dvoini_stai=buffer/2;
        }
    }
    cout<<dvoini_stai<<" "<<troini_stai<<"\n";
    return 0;
}
