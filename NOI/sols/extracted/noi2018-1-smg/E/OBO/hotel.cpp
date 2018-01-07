#include<iostream>
using namespace std;
int main(){
long long n ,troini=0,dvoini=0;
cin>>n;
troini=n/3;
while(n!=0){
n=n-(troini*3);
if(n%2==0){
    dvoini=n/2;
    n=n-(dvoini*2);
}else{
troini--;
}
}
cout<<endl<<dvoini<<" "<<troini;
cout<<endl;
return 0;
}
