#include<iostream>
using namespace std;
int main() {
int N,K;
cin>>N>>K;
int a[N],b[K],u=0,y=0,L[K],R[K];
cout<<endl;
for(int i=0;i<N;i++){
   cin>>a[i];
   if(a[i]>=0 && a[i]<=100000){
      u=u+1;
   }
}
cout<<endl;
for(int t=0;t<K;t++){
   cin>>b[t];
   if(b[t]>=1 && b[t]<=100000 && b[t]<=N){
      y=y+1;
   }
}
if(K>=1 && K<=10000 && u==N && y==K){
  for(int r=0;r<K;r++){
    L[r]=0;
    R[r]=0;
  }
  for(int e=0;e<K;e++){
    for(int j=b[e];j<N;j++){
        if(a[b[e]-1]==a[j]){
            R[e]=R[e]+1;
        }
    }
    for(int t=b[e]-2;t>=0;t=t-1){
        if(a[b[e]-1]==a[t]){
            L[e]=L[e]+1;
        }
    }

  }
   for(int d=0;d<K;d++){
    cout<<L[d]<<" "<<R[d]<<endl;
   }
}
return 0;
}
