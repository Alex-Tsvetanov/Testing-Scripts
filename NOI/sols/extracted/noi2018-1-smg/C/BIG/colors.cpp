#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
long long n, k, maxn, izp, v;
long long a[26000], izh[52000];
bool used;
int main(){
            cin.sync_with_stdio(false);
            cin.tie(0);
            memset(a, 0, sizeof(a));
            cin>>n>>k;
            for(int i=0;i<n;i++){
                        cin>>v;
                        a[v]++;
                        if(v>maxn){
                                    maxn=v;
                        }
            }
            for(int i=0;i<=maxn && izp<k;i++){
                        if(a[i]!=0){
                                    izh[izp]=i;
                                    a[i]--;
                                    izp++;
                        }
            }
            for(int i=0;izp<k;i++){
                        while(a[izh[i]]>0){
                                    izh[izp]=izh[i];
                                    a[izh[i]]--;
                                    izp++;
                        }
            }
            sort(izh, izh+k);
            for(int i=0;i<k;i++){
                        cout<<izh[i]<<" ";
            }
            cout<<endl;
return 0;
}
