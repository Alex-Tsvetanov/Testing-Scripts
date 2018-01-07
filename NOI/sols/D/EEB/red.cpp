#include <iostream>
using namespace std;
int main(){
ios::sync_with_stdio(false);
int  n, k;
cin>>n>>k;
int a[n], b[k], l[k], r[k];
for(int i=0; i<n; i++){
        cin>>a[i];
}
for(int j=0; j<k; j++){
        cin>>b[j];
        l[j]=0;
        r[j]=0;
        for(int i=0; i<b[j]-1; i++){
                if(a[i]==a[b[j]-1]){
                        l[j]++;
                }
        }
        for(int i=b[j]; i<n; i++){
                if(a[i]==a[b[j]-1]){
                        r[j]++;
                }
        }
        cout<<l[j]<<" "<<r[j]<<endl;
}
return 0;
}
