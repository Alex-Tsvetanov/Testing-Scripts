#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

pair<int,int> p[10005],t[100006];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int prav,tochki;
    cin>>prav>>tochki;
    for(int i=0;i<prav;i++){
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0;i<tochki;i++){
        cin>>t[i].first>>t[i].second;
    }
    sort(t,t+tochki);
    int curr=0,x=0,otg=0;
    for(int i=0;i<tochki and curr<prav;i++){
        while(curr<prav and t[i].first>x+p[curr].first){
            x+=p[curr].first;
            curr++;
        }
        if(curr<prav){
            //cout<<t[i].first<<" "<<x+p[curr].first<<"\n";
            if(t[i].first==x+p[curr].first and curr+1<prav and p[curr].second<p[curr+1].second){
                x+=p[curr].first;
                curr++;
            }
            if(t[i].second<=p[curr].second){
                otg++;
            }
        }
    }
    cout<<otg<<"\n";
    return 0;
}
