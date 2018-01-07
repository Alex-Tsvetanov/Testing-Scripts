#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
long long n,m;
double dosega=0;
long long seg=0;
double a,b;
pair<double,double>t[10001];
pair<double,double>t2[100002];
long long otg=0;
int main(){
    cin.tie(NULL);
ios::sync_with_stdio(false);
cin>>n>>m;
for(long long i=0;i<n;i++){
    cin>>a>>b;
    t[i].first=a+dosega;
    t[i].second=b;
    dosega=t[i].first;
}
for(long long i=0;i<m;i++){
    cin>>a>>b;
    t2[i].first=a;
    t2[i].second=b;
}
sort(t2+0,t2+m);
for(long long i=0;i<m;i++){
    while(seg<n and t2[i].first>t[seg].first){
        seg++;
    }
    if(seg==n){
        break;
    }
    if(t2[i].first==t[seg].first){
        if(seg==(n-1)){
            if(t[seg].second>=t2[i].second){
                //cout<<i<<" ";
                otg++;
            }
        }else{
            if(t[seg].second>=t2[i].second or t[seg+1].second>=t2[i].second){
                    //cout<<i<<" ";
                otg++;
            }
        }
    }else{
            if(t[seg].second>=t2[i].second){
                    //cout<<i<<" ";
                otg++;
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
12 8
1 2
3 7
4 2
5 8
7 4
9 1
9 5

*/
/*
V slu4aj,4e mi se naloji da kontestiram:

Napisal sym double na nqkolko mesta,zashtoto ne e kazano v uslovieto,4e tezi chisla trqbva da sa celi;Ako trqbva da sa celi,trqbva na vsqko mqsto da se promeni na long long.
Zadadoh vyprosa dali trqbva da sa celi,no uchitelite ne uspqha da se svyrjat s Nacionalnata komisiq.
*/
