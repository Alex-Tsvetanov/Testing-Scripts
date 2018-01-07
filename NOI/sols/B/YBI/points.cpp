#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<unsigned short> v;
    int n,m,a,b;
    long long res=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(i!=0)
        {
            int o=v[v.size()-1];
            max(o,b);
            v[v.size()-1]=max(o,b);
        }
        else
        {
            v.push_back(b);
        }
        for(int k=0;k<a;k++)
        {
            v.push_back(b);
        }
    }
    long long x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        if(x<v.size())
        {
            if(v[x]>=y)
            {
                res++;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
