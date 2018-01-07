#include<iostream>
using namespace std;
int main (){
long long a,b,c,d,k,kbis,bod,n;
cin>>a>>b>>c>>d>>k;
for(bod=k;bod>0;bod--){
    kbis=a*b;
    if(kbis>c){
       kbis=kbis-c;
    }
     if(c>=kbis){
       bod=0;
       a=0;
       cout<<a;
    }

    if(kbis>d){
       kbis=d;
    }else{
     kbis=kbis-0;
    }
}

if(bod==0){
cout<<a;
}
return 0;
}
