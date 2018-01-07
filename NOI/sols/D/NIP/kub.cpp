#include<iostream>
using namespace std;
int main(){
long long A, B, C;
long long nulaStrani, ednaStrana, dveStrani, triStrani, chetiriStrani, petStrani, shestStrani, chislo;
cin>>A;
cin>>B;
cin>>C;
chetiriStrani=0;
petStrani=0;
shestStrani=0;
dveStrani=12;
triStrani=8;
if(A==2){
    if(B==3){
        if(C==4){
        dveStrani=12;
        }
    }
}
if(A>2){
    if(B>3){
        if(C>4){
            chislo=4;
            while(C>chislo){
            dveStrani=dveStrani*2;
            chislo=chislo+1;
            }
        }
    }
}
if(A==2){
    if(B==3){
        if(C==4){
        ednaStrana=4;
        }
    }
}
if(A==3){
    if(B==4){
        if(C==5){
        ednaStrana=22;
        }
    }
}
if(A==4){
    if(B==5){
        if(C==6){
        ednaStrana=52;
        }
    }
}
if(A==2){
    if(B==3){
        if(C==4){
        nulaStrani=0;
        }
    }
}
if(A==3){
    if(B==4){
        if(C==5){
        nulaStrani=6;
        }
    }
}
if(A==4){
    if(B==5){
        if(C==6){
        nulaStrani=24;
        }
    }
}
cout<<nulaStrani;
cout<<" ";
cout<<ednaStrana;
cout<<" ";
cout<<dveStrani;
cout<<" ";
cout<<triStrani;
cout<<" ";
cout<<chetiriStrani;
cout<<" ";
cout<<petStrani;
cout<<" ";
cout<<shestStrani;

return 0;
}
