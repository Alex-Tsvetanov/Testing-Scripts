#include <iostream>
using namespace std;
int main(){

long long n,stai,troini,dvoini;
cin>>n;
if(n%3==0){
    stai=n/3;
    troini=n/3;
}
if(n%3==1){
    stai=n/3-1+2;
    troini=n/3-1;
}
if(n%3==2){
    stai=n/3+1;
    troini=n/3;
}
dvoini=stai-troini;
cout<<dvoini<<"   "<<troini;

return 0;
}
