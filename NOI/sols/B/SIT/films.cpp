#include<bits/stdc++.h>
using namespace std;
long long chisla[2000000];
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(0);
long long n=0,m=0,t=0,l=0,a=0,maxi=0;
cin>>n>>m>>t>>l;
for(int i=0;i<n;i++){
    cin>>a;
chisla[a]++;
}
sort(chisla,chisla+n+1);
for(int i=n;i>=0;i--){
    a=n-i;
    a/=m;
    if(chisla[i]!=0){
    maxi=max(maxi,chisla[i]*(t+l)+a*t);
    }
}

cout<<maxi<<"\n";
return 0;
}
/*
5 3 1 2
2 5 3 2 5
*/
