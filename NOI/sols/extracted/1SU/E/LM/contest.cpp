#include<iostream>
using namespace std;
int main () {
long long n,t,f,x,ostanaliZad,vremeZaOstZad,i;
cin>>n>>t>>f>>x;
if (n>4){
    n-f==ostanaliZad;
    t-1==vremeZaOstZad;
    i==x*ostanaliZad;
    if(i>vremeZaOstZad){
        cout<<"NO ";
        cout<<i-vremeZaOstZad;
    }
    if(i=vremeZaOstZad){
        cout<<"EXACT! ";
    }
    if(i<vremeZaOstZad){
        cout<<"YES ";
        cout<<vremeZaOstZad-x;
    }
}


return 0;
}
