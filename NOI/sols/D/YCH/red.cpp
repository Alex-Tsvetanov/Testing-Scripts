#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int x[n],c[k],br=0,sp;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<k;i++){
        cin>>c[i];
        c[i]--;
    }
    for(int i=0;i<k;i++){
        for(int q=0;q<c[i];q++){
            if(x[q]==x[c[i]]){
                br++;
            }
        }
        cout<<br<<" ";
        sp=br;
        br=0;
        for(int w=0;w<n;w++){
            if(x[w]==x[c[i]]){
                br++;
            }
        }
        br--;
        cout<<br-sp<<endl;
        br=0;
    }
return 0;
}

