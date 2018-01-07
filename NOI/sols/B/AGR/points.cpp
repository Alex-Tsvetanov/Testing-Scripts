#include<iostream>
#include<algorithm>
using namespace std;
const long long maxn = 10100;
const long long maxm = 100100;
long long n, m;
pair<long long,long long> r[maxn];
pair<long long,long long> p[maxm];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(long long i = 0; i < n; i ++)
    {
        cin >> r[i].first >> r[i].second;
    }
    for(long long i = 0; i < m; i ++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p + m);
    long long cr = 0;
    long long sr = 0;
    long long ans = 0;
    for(long long i = 0; i < m; i ++)
    {
        while(cr + 1 < n && p[i].first > sr + r[cr].first)
        {
            sr += r[cr ++].first;
        }
        if(p[i].first > sr + r[cr].first)
        {
            break;
        }
        if(p[i].second <= r[cr].second || (cr + 1 < n && p[i].first == sr + r[cr].first && p[i].second <= r[cr + 1].second))
        {
            ans ++;
        }
    }
    cout << ans << endl;
}
