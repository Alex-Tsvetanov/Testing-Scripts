#include<iostream>
using namespace std;
int main(){
long long n,dvoini=0,troini=0;
cin>>n;
if(n>=2 and n<=100){
     troini=n/3;
     if(n%3==0){
         cout<<troini;
         cout<<" "<<dvoini;
     }
     if(n%3==1 or n%3==2){
         cout<<troini;
         dvoini=dvoini+1;
         cout<<" "<<dvoini;
     }
}
return 0;
}
