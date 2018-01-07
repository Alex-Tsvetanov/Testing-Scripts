///CECOBORECO
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
long long n,m,t,l;
vector< pair<long long,long long> > wanted;
map<long long,long long>where;
bool cmp1(pair<long long,long long> x1,pair<long long,long long>y1)
{
    return x1.second>y1.second;
}
int main()
{
    ios::sync_with_stdio(false);
    wanted.push_back(make_pair(0,0));
    cin>>n>>m>>t>>l;
    long long x;
    pair<long long,long long>temp;
    for(long long i=0;i<n;i++)
    {
        cin>>x;
        if(where[x]==0)
        {
            wanted.push_back(make_pair(x,1));
            where[x]=wanted.size()-1;
        }
        else
        {
            temp=wanted[ where[x] ];
            temp.second++;
            wanted[ where[x] ]=temp;
        }
    }
    sort(wanted.begin(),wanted.end(),cmp1);
    long long maxg=0;
    for(long long i=0;i<wanted.size()-1;i++)
    {
        //cout<<i/m*t+wanted[i].second*(t+l)<<endl;
        if(i/m*t+wanted[i].second*(t+l)>maxg)
            maxg=i/m*t+wanted[i].second*(t+l);
    }
    cout<<maxg<<endl;
    return 0;
}
/**
5 3 1 2
2 5 3 2 5
*/
