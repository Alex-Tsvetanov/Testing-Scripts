#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
long long step[31];
long long n, p, log, izh;
char pred[31];
int main(){
            cin.sync_with_stdio(false);
            cin.tie(0);
            memset(pred, 0, sizeof(pred));
            step[0]=1;
            cin>>n>>p;
            step[1]=p;
            int cn=n;
            while(cn>0){
                        cn/=p;
                        log++;
            }
            for(int i=2;i<log;i++){
                        step[i]=step[i-1]*p;
            }
            //cout<<step[log-1];
            while(pred[log]==0){
                        pred[0]++;
                        izh+=step[0];
                        for(int i=0;pred[i]>1;i++){
                                    izh-=step[i]*pred[i];
                                    pred[i]=0;
                                    pred[i+1]++;
                                    izh+=step[i+1];
                        }
                        if(izh<=n && izh!=0)
                        cout<<izh<<endl;
            }
return 0;
}
