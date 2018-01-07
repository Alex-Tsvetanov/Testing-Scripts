#include <iostream>
using namespace std;

int x,k, y;
long long  prkrai[10005];
int prvis [10005];
int brpr, brt, wx, hy, sbor=0;

int main(){
  cin>>brpr>>brt;
  prkrai[0]=0;
  for( int i=1; i<=brpr; i++){
    cin>>wx>>hy;
    prvis[i]=hy;
    prkrai[i]=prkrai[i-1]+wx;
  }
   //cout<<prkrai[1]<<endl;
   prkrai[0]=0;
  for(int i=0; i<brt; i++){
    cin>>x>>y;
    //binary(x);
    /*int left=1, right=brpr, mid=(left+right)/2;
    if(brpr>1){
      while(mid>=1 && mid<brpr){
        mid=(left+right)/2;
        if(prkrai[mid]>x && prkrai[mid-1]>x && mid>1){
          right=mid;
          cout<<"r"<<endl;
        }
        if(prkrai[mid]<x && prkrai[mid+1]<x && mid<brpr){
          left=mid;
          cout<<"l"<<endl;
        }
        if( (prkrai[mid]>=x && prkrai[mid-1]<=x && mid>1) ||  (prkrai[mid]<=x && prkrai[mid+1]>=x && mid<brpr)  ){
          break;
        }
        cout<<"mid "<<mid<<endl;
      }
    }*/
    bool flag;
    for( k=1; k<=brpr; k++){
        flag=true;
      if( prkrai[k-1]<=x && prkrai[k]>=x ){
        flag=false;
        break;
      }
    }
    //cout<<"prvis["<<k<<"]"<<prvis[k]<<endl;
    if(flag==false && y<=prvis[k]){
      sbor++;
      //cout<<sbor;
    }
    //cout<<"k"<<k<<endl;
  }

cout<<sbor<<endl;





  return 0;
}
