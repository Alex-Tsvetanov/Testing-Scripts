#include<iostream>
using namespace std;
int main() {
long long  purvo,vtoro,treto,purvocopy,vtorocopy,izhod;
cin>>purvo>>vtoro>>treto;
while(purvo<vtoro or vtoro<treto)
    {
     if(purvo<vtoro)
        {
         vtorocopy=vtoro;
         vtoro=purvo;
         purvo=vtorocopy;
         }
     if(vtoro<treto)
         {
          vtorocopy=vtoro;
          vtoro=treto;
          treto=vtorocopy;
         }
    }
izhod=purvo*100+vtoro*10+treto;
cout<<izhod;

return 0;
}
