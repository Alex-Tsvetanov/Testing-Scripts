#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long k,n,j=1,p,i,vhod[100001],vhod2[100001],razlBaloni[50000];
    cin>>n>>k;
    for(i=0; i<n; i++){
       cin>>vhod[i];
    }
    sort(vhod, vhod+n);
    razlBaloni[0]=vhod[0];
    for(i=0; i<n-1 and j<k; i++){
        if(vhod[i]!=vhod[i+1]){
            razlBaloni[j]=vhod[i+1];
            j++;
            vhod2[i+1]=-1;
        }else{
            vhod2[i+1]=vhod[i+1];
        }
    }

    vhod2[0]=-1;

    while(j<k){
        for(i=0;i<n; i++){
            if(vhod2[i]!=-1){
                razlBaloni[j]=vhod2[i];
                vhod2[i]=-1;
                j++;
                i=n;
            }
        }
    }
    sort(razlBaloni, razlBaloni+k);
    for(i=0; i<k; i++){
        cout<<razlBaloni[i]<<" ";
    }
    cout<<endl;
    return 0;
}
