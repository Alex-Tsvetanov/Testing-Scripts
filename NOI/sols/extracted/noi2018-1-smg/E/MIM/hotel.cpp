#include <iostream>
using namespace std;
int main (){
int n,stai2,stai3;
cin>>n;
stai3=n/3;
stai2=n%3;
while(stai3*3+stai2*2!=n){
      stai3=stai3-1;
      stai2=stai2+1;
}
cout<<stai2<<" "<<stai3;
return 0;
}
