#include <iostream>
using namespace std;
int main(){
long long number[3];
for(long i=0;i<3;i++){
    cin>>number[i];
}
long long help;
for(long a=0;a<3;a++){
 for(long b=0;b<2;b++){
  if(number[b]<number[b+1]){
    help=number[b];
    number[b]=number[b+1];
    number[b+1]=help;
  }

 }
}
for(long c=0;c<3;c++){
   cout<<number[c];

}
return 0;
}
