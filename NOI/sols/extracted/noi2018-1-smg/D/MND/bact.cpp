#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    bool experimantaSvurshiLi=0;
    long long purvonachalenBroi,kolkoNoviSeObrazuvat,kolkoMahame,doKolkoGiNamaliavame,koiDenTursim;
    cin>> purvonachalenBroi>>kolkoNoviSeObrazuvat>>kolkoMahame>>doKolkoGiNamaliavame>>koiDenTursim;
    for(int i=1; i<=koiDenTursim; i++)
    {
        purvonachalenBroi=purvonachalenBroi*kolkoNoviSeObrazuvat;
        purvonachalenBroi=purvonachalenBroi-kolkoMahame;
        if(purvonachalenBroi<0)
        {
            experimantaSvurshiLi=1;
            break;
        }
        if(purvonachalenBroi>doKolkoGiNamaliavame)
        {
            purvonachalenBroi=doKolkoGiNamaliavame;
        }
    }
    if(experimantaSvurshiLi==0)
    {
        cout<<purvonachalenBroi;
    }
    else
    {
        cout<<"0";
    }
    return 0;
}
