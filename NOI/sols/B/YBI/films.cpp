#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct mov
{
    long long id;
    long long ppl;
    mov(long long a,long long b){id=a;ppl=b;};
};
bool srt(mov a,mov b)
{
    return a.ppl>b.ppl;
}
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    long long n,m,p,q,a;
    long long maxt=0;
    vector<mov> vh;
    cin>>n>>m>>p>>q;
    for(long long i=0;i<n;i++)
    {
        cin>>a;
        bool b=false;
        for(long long j=0;j<vh.size();j++)
        {
            if(vh[j].id==a)
            {
                b=true;
                vh[j].ppl++;
            }
        }
        if(!b)
        {
            vh.push_back(mov(a,1));
        }
    }
    sort(vh.begin(),vh.end(),srt);
    maxt=0;

    for(long long i=0;true;i++)
    {
        if(i*m>vh.size()-1)
        {
            break;
        }
        for(long long j=i*m;j<i*m+1 and j<vh.size();j++)
        {
            ///cout<<j<<"id="<<vh[j].id<<"ppl="<<vh[j].ppl<<endl;
            ///cout<<i<<endl;
            ///cout<<"t="<<vh[j].ppl*(p+q)+(i)*p<<"\n";
            if(maxt<vh[j].ppl*(p+q)+(i)*p)
            {
                maxt=vh[j].ppl*(p+q)+(i)*p;
            }
        }
    }
    cout<<maxt<<endl;
    return 0;
}
