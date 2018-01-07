#include<iostream>
using namespace std;
int br[100005];
int br2[100005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int ch[n],i;
    for(i=0;i<n;i++){
            cin>>ch[i];
            br2[i]=br[ch[i]];
            br[ch[i]]++;
    }
    int j[n],i2;
    for(i=0;i<k;i++){
            cin>>j[i];
            i2=j[i]-1;
            cout<<br2[i2]<<" "<<br[ch[i2]]-br2[i2]-1<<endl;
    }
return 0;
}

