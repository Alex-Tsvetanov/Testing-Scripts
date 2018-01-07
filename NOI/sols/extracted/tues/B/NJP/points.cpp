#include<iostream>
using namespace std;
int main(){
    long long n,m,w[10000],h[10000],x,y,cx=0,br=0;;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>w[i]>>h[i];
    }
    for(int i=0;i<m;i++){
        cin>>x>>y;
        cx=0;
        for(int j=0;j<n;j++){
            if(x >= cx && x<=cx+h[j]){
                if(y <= h[j]){
                    br++;
                    break;
                }
            }else{
                cx+=w[j];
            }
        }
    }
    cout<<br;

}
