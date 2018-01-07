#include<iostream>
using namespace std;
int main (){
    long long k,n;
    cin>>n>>k;
    long long a[n],b[k],i,y=0,x=0,j,h;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<k;i++){
        cin>>b[i];
    }
    for(i=0;i<k;i++){
        y=0;
        h=b[i]-1;
        x=a[h];
        for(j=0;j<b[i]-1;j++){
            if(x==a[j]){
                y++;
            }
        }
        cout<<y<<" ";
        y=0;
        for(j=b[i];j<n;j++){
            if(x==a[j]){
                y++;
            }
        }
        cout<<y<<"\n";
    }
return 0;
}
