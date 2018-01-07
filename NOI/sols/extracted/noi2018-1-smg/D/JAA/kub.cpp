#include<iostream>
using namespace std;
int o[7];
int main ()
{
int a,b,c;
cin>>a>>b>>c;
o[3]=8;
o[2]=(a-2+b-2+c-2)*4;
o[0]=(a-2)*(b-2)*(c-2);
o[1]=(a-2)*(b-2)*2+(c-2)*(b-2)*2+(a-2)*(c-2)*2;
cout<<o[0]<<" "<<o[1]<<" "<<o[2]<<" "<<o[3]<<" "<<o[4]<<" "<<o[5]<<" "<<o[6]<<endl;
return 0;
}
