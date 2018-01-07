#include<iostream>
using namespace std;
int main(){
long long razmerA,razmerB,razmerC,s1,s2;
cin>>razmerA>>razmerB>>razmerC;
s2=(razmerA-2+razmerB-2)*4+(razmerC-2)*4;
s1=2*(razmerA*razmerB+razmerA*razmerC+razmerB*razmerC)-2*(2*razmerA+2*razmerB+razmerC*2+razmerA*2+razmerB*2+razmerC*2-3*4);
cout<<"0"<<" "<<s1<<" "<<s2<<" "<<"8"<<" "<<"0"<<" "<<"0"<<" "<<"0"<<" ";
return 0;
}
