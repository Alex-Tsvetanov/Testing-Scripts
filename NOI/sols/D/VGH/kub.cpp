#include<iostream>
using namespace std;
int main() {
int A,B,C,kub[7],broi;
cin>>A>>B>>C;
if(A>0 && A<=1000 && B>0 && B<=1000 && C>0 && C<=1000){
  for(int i=0;i<7;i++){
     kub[i]=0;
  }
  broi=A*B*C;
  if(broi==1){
     kub[6]=1;
     broi=broi-1;
  }
  if(broi==2){
     kub[5]=2;
     broi=broi-2;
  }
  if(broi==4){
     kub[4]=4;
     broi=broi-4;
  }
  if(broi!=0){
  kub[0]=(A-2)*(B-2)*(C-2);
  kub[1]=((A-2)*(B-2))*2+((A-2)*(C-2))*2+((C-2)*(B-2))*2;
  kub[2]=(A-2)*4+(B-2)*4+(C-2)*4;
  kub[3]=8;
  }
  cout<<kub[0]<<" "<<kub[1]<<" "<<kub[2]<<" "<<kub[3]<<" "<<kub[4]<<" "<<kub[5]<<" "<<kub[6];
}
return 0;
}
