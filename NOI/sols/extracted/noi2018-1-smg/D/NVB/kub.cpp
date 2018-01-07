#include <iostream>
using namespace std;

int main(){
  long long A,B,C, steniS0=0,steniS1=0,steniS2=0,steniS3=0,steniS4=0,steniS5=0,steniS6=0;
  cin>>A>>B>>C;
  if(A==1 && B==1 && C==1){
    steniS6=steniS6+1;
    cout<<steniS0<<steniS1<<steniS2<<steniS3<<steniS4<<steniS5<<steniS6;
  }
 if(C=4){
    steniS1=steniS1+4;
    steniS2=2*6;
    steniS3=A*C;
     cout<<steniS0<<" "<<steniS1<<" "<<steniS2<<" "<<steniS3<<" "<<steniS4<<" "<<steniS5<<" "<<steniS6;
 }


return 0;
}
