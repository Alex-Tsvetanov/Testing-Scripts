#include<iostream>;
using namespace std;
int main () {
long long chisVTriug[4],naiGolqamo,naiMalko,sredno,index;
cin>>chisVTriug[0]>>chisVTriug[1]>>chisVTriug[2];
naiGolqamo=0;
naiMalko=0;
sredno=0;
chisVTriug[3]=-1;
for(index=0;index<=2;index=index+1){
  if(chisVTriug[index]>=naiGolqamo){
    naiGolqamo=chisVTriug[index];
  }
}
for(index=0;index<=2;index=index+1){
    if(chisVTriug[index]==naiGolqamo){
        index=index+1;
    }
  if(chisVTriug[index]>=sredno){
    sredno=chisVTriug[index];
  }
}
  for(index=0;index<=2;index=index+1){
    if(chisVTriug[index]==naiGolqamo or  chisVTriug[index]==sredno){
        index=index+1;
    }
    if(chisVTriug[index]==naiGolqamo or  chisVTriug[index]==sredno){

               index=index+1;


    }
if(chisVTriug[index]>=naiMalko){
    naiMalko=chisVTriug[index];
}
  }
  cout<<naiGolqamo<<sredno<<naiMalko;

return 0;
}
