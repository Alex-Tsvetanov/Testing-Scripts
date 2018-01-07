#include<iostream>
using namespace std;
int main (){
    long long a[3],naiGoliamo=0,u;
    for(int i=0;i<3;i++){
        cin>>a[i];
        if(a[i]>naiGoliamo){
            naiGoliamo=a[i];
            u=i;
        }
    }
    cout<<naiGoliamo;
    a[u]=0;
    naiGoliamo=0;
    for(int j=0;j<2;j++){
     for(int i=0;i<3;i++){
             if(a[i]>naiGoliamo){
            naiGoliamo=a[i];
            u=i;
        }
    }
        cout<<naiGoliamo;
    a[u]=0;
    naiGoliamo=0;
    }
return 0;
}
