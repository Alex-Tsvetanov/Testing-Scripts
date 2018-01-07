#include<iostream>
using namespace std;
long long n, u[63], v, izh, maxIzh;
int main(){
            cin.sync_with_stdio(false);
            cin.tie(0);
            cin>>n;
            for(int i=0;i<n;i++){
                        cin>>v;
                        u[i]=v;
                        u[i+n]=v;
                        u[i+2*n]=v;
            }
            for(int i=n; i<2*n;i++){
                        izh=u[i];
                        if(u[i-1]>u[i+1]){
                                    for(int j=i-1;j>i-n;j--){
                                                izh=izh*10+u[j];
                                    }
                                    if(izh>maxIzh){
                                                maxIzh=izh;
                                    }
                        }else{
                                    for(int j=i+1;j<i+n;j++){
                                                izh=izh*10+u[j];
                                    }
                                    if(izh>maxIzh){
                                                maxIzh=izh;
                                    }
                        }
            }
            cout<<maxIzh<<endl;
return 0;
}
