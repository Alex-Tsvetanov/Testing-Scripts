#include <iostream>
using namespace std;
int main () {
long long n;
do{
cin>>n;
}while(n<2 or n>100);
if(n%3==0 ){
    cout<<n/3;
}
 if(n%3==2 ){
    cout<<"1"<<" "<<n/3;
 }
 if(n%3==1){
    cout<<"2"<<" "<<((n/3)-1);
 }



return 0;
}
