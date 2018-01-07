#include<iostream>
using namespace std;
int main()
{
int r1,r2,r3;
cin>>r1>>r2>>r3;
int k1,k2,k3,k4,k5,k6,k0;
if(r1==1 and r2==1 and r3==1)
{
    k6=1;
}
else k6=0;
 if(r1==1 and r2==1 and r3!=1 or r1==1 and r3==1 and r2!=1 or r3==1 and r2==1 and r1!=1 )
{k5=2;k4=r1*r2*r3-2;}
    else {k5=0;k4=0;}
    if(r1==1 and r2!=1 and r3!=1 or r1!=1 and r3==1 and r2!=1 or r3!=1 and r2==1 and r1!=1 )
    {k4=4;}
if(r1>1 and r2>1 and r3>1)
{
    k3=8;
    k2=4*(r1-2+r2-2+r3-2);
    k1=2*((r1-2)*(r2-2)+(r1-2)*(r3-2)+(r3-2)*(r2-2));
       k0=(r1-2)*(r2-2)*(r3-2);
}

else {k3=0; k2=0;k1=0;k0=0;}
cout<<k0<<" "<<k1<<" "<<k2<<" "<<k3<<" "<<k4<<" "<<k5<<" "<<k6;
return 0;

}
