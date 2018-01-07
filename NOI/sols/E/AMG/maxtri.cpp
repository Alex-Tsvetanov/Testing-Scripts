#include<iostream>
using namespace std;
int main(){
long long a[3],naigolymo,broyach,broych;
cin>>a[0]>>a[1]>>a[2];
if(!(a[0]==0 and a[1]==0 and a[2]==0)){
     for(broych=0;broych<3;broych=broych+1){
     naigolymo=a[0];
     if(a[1]>naigolymo){
         naigolymo=a[1];
     }
     if(a[2]>naigolymo){
         naigolymo=a[2];
     }
     cout<<naigolymo;
     for(broyach=0;broyach<3;broyach=broyach+1){
         if(a[broyach]==naigolymo){
              a[broyach]=-2;
              naigolymo=-1;
         }
    }
    }
}
return 0;
}
