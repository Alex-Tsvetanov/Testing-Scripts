#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<map>
#include<queue>
using namespace std;
long long n,m,t,l,a,seg=0,kyde=1,vreme=0;
long long otg=0;
vector<long long>v;
map<long long,long long>mp;
priority_queue<long long>p;
int main(){
ios::sync_with_stdio(false);
cin>>n>>m>>t>>l;
for(long long i=0;i<n;i++){
cin>>a;
if(mp[a]==0){
mp[a]++;
v.push_back(a);
}else{
mp[a]++;
}
}
for(long long i=0;i<v.size();i++){
    p.push(mp[v[i]]);
}
//cout<<p.top();
while(p.empty()==0){
        //cout<<((p.top()*l)+(p.top()-1)*t+kyde*t)<<" ";
        vreme=max(vreme,((p.top()*l)+(p.top()-1)*t+kyde*t));
        seg++;
    if(seg==m){
kyde++;
seg=0;
    }
p.pop();
}
cout<<vreme<<"\n";
return 0;
}
/*
5 3 1 2
2 5 3 2 5
*/
/*
V slu4aj,4e mi se naloji da kontestiram:

Ako server-yt ne se broi za computer,trqbva tezi redove(25-38) da se mahnat:
for(long long i=0;i<v.size();i++){
    p.push(mp[v[i]]);
}
//cout<<p.top();
while(p.empty()==0){
        //cout<<((p.top()*l)+(p.top()-1)*t+kyde*t);
        vreme=max(vreme,((p.top()*l)+(p.top()-1)*t+kyde*t));
        seg++;
    if(seg==m){
kyde++;
seg=0;
    }
p.pop();
}
Da se zamenqt s:
for(long long i=0;i<v.size();i++){
    vreme=max(vreme,((mp[v[i]]*l)+(mp[v[i]]-1)*t+kyde*t));
}
Zadadoh vyprosa dali server-yt se broi za computer,no uchitelite ne uspqha da se svyrjat s Nacionalnata komisiq.
*/
