#include<iostream>
using namespace std;
int main()
{
long long n, troini, dvoini;
cin>>n;
troini=n/3;
if(n%3!=0){
dvoini=1;
}else{
dvoini=0;
}
cout<<troini<<" troini stai i "<<dvoini<<" dvoini stai";
return 0;
}
