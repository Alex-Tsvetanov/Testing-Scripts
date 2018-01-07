#include<iostream>
using namespace std;
int main (){
          long long n;
          cin>>n;
          if(n%3==0){
            cout<<"0 "<<n/3;
          }
          if(n%3==2){
            cout<<(n%3)/2<<" "<<n/3;
          }if( n%3==1 and n/3-1==0){
               cout<<n/2<<" 0";
          }if(n%3==1 and n/3-1!=0){
              cout<<"2 "<<n/3-1;
            }
return 0;
}
