#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main () {
long long otg1, otg2, otg3, otg4, otg5, otg6, otg7, a, b, c, i, j;
cin >> a >> b >> c;
if(a<3 or b<3 or c<3)
{
    otg1=0;
}
if(a>=3 and b>=3 and c>=3)
{
    otg1=(a-2)*(b-2)*(c-2);
}
if(a==1 or b==1 or c==1)
{
    otg4=4;
}
if(a>1 and b>1 and c>1)
{
    otg4=8;
}
otg3=4*a+4*c+4*b-16-otg4;
otg2=a*b*c-otg1-4*a-4*c-4*b+16;
otg5=0;
otg6=0;
otg7=0;
cout << otg1 << " " << otg2 << " " << otg3 << " " << otg4 << " " << otg5 << " " << otg6 << " " << otg7;



return 0;
}
