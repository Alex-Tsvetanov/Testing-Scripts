#include<iostream>
using namespace std;
int main(){
  int n,k,trch[10000],ch[100000],brL=0,brR=0;
  cin >> n >> k ;
  for(int a=0;a<n;a++){
    cin >> ch[a];
  }
  for(int a=0;a<k;a++){
    cin >> trch[a];
  }
  bool ImaLi=true;
  for(int a=0;a<k;a++){
    for(int b=0;b<n;b++){
      if(trch[a]==b+1){
        ImaLi=false;
      }if(ch[b]==ch[trch[a]-1]){
        if(ImaLi){
          brL++;
        }else {
          brR++;
        }
      }
    }
    cout << brL << " " << brR-1 << endl;
    brL=0;
    brR=0;
    ImaLi=true;
  }
return 0;
}
