#include<iostream>
using namespace std;
int main(){
  int a,b,c,d;
  long long k;
  cin >> a >> b >> c >> d >> k;
  int brb=a;
  while(k>0){
    brb=brb*b;
    if(brb>c){
      brb=brb-c;
    }else {
      brb=0;
      break;
    }
    if(brb>d){
      brb=d;
    }
    k--;
  }
  cout << brb << endl;
return 0;
}
