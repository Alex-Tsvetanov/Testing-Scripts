#include<bits/stdc++.h>
using namespace std;

vector<long long>xnaprnach;
vector<long long>xnaprkrai;
vector<long long>ynapr;

vector<long long>::iterator low;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
long long n=0,m=0,a=0,b=0,ind=0,otg=0;
cin>>n>>m;
for(int i=0;i<n;i++){
    cin>>a>>b;
    if(i==0){

        xnaprnach.push_back(0);
        xnaprkrai.push_back(a);
        ynapr.push_back(b);
    }else{

      xnaprnach.push_back(xnaprkrai[i-1]);
        xnaprkrai.push_back(xnaprkrai[i-1]+a);
   ynapr.push_back(b);
    }
}

for(int i=0;i<m;i++){
    cin>>a>>b;
low=lower_bound(xnaprkrai.begin(),xnaprkrai.end(),a);
ind=low-xnaprkrai.begin();

if(ind<n){
        if(ind==n-1){
           if(b<=ynapr[ind]){
            otg++;
           }
        }else{
                if(b<=ynapr[ind] and xnaprnach[ind+1]!=xnaprkrai[ind]){

                    otg++;
                }else{
                    if(b<=max(ynapr[ind],ynapr[ind+1])){
                    otg++;
                    }
                }
        }
}
}
cout<<otg<<"\n";
return 0;
}
/*
4 8
2 3
3 6
2 4
4 2
1 2
3 7
4 2
5 8
7 4
9 1
9 5
12 8
*/
/*
1 4
2 3
1 2
3 7
1 2
0 3
*/
