#include<iostream>
using namespace std;
int main  () {
long long n,troiniS,dvoiniS,x,y;
cin>>n;
if(n%3/2==(n%3/2)*2)
    {
    troiniS=n/3;
    dvoiniS=(n%3)/2;
    }
if(n%2/3==(n%2/3)*3)
    {
    dvoiniS=n/2;
    troiniS=n%2/3;
    }
    else
    {
    if((n-2)%2/3==((n-2)%2/3)*3)
        {
        dvoiniS=(n-2)/2;
        troiniS=(n-2)%2/3;
         }
    if((n-3)%3/2==((n-3)%3/2)*2)
        {
        dvoiniS=(n-3)/2;
        troiniS=(n-3)%2/3;
        }
    }

cout<<dvoiniS<<" "<<troiniS;

return 0;
}

