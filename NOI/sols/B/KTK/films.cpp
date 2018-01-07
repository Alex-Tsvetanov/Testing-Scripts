#include <iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){

int n,m,t,l;

cin>>n>>m>>t>>l;
int uchF[n],table[n+1][n+1];
int sum[n+1],br = 0,del = 0;
int otg = 0;
memset(table,0,sizeof table);
memset(sum,0,sizeof sum);

for(int i=0;i<n;i++){
    cin>>uchF[i];
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            table[i][uchF[i]] = 1;
    }
}

//cout<<endl;
for(int i=0;i<=n;i++){
    for(int j=0;j<n;j++){
        //cout<<table[i][j]<< " ";
        sum[i] += table[j][i];
    }
    //cout<<endl;
}
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        int t;
        if(sum[i]>sum[j]){
            t = sum[j];
            sum[j] = sum[i];
            sum[i] = t;
        }
    }
}
for(int i=0;i<=n;i++){
    if(sum[i]>0){
        br++;
    }
}

del = br/m+1;
otg = br/m+1;
del*=l;
otg*=t;
otg+=del;

cout<<otg<<endl;

return 0;
}
