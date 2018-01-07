#include<iostream>
#include<stdio.h>
using namespace std;
const long long maxn = 1000100;
long long inp[maxn];
long long films[maxn];
long long helper[maxn];
int n, m, t, l;
void srt()
{
    for(long long i = 0; i <= n; i ++)
    {
        helper[films[i]] ++;
        films[i] = 0;
    }
    long long cs = 0;
    for(long long i = n; i >= 0; i --)
    {
        for(long long j = 0; j < helper[i]; j ++)
        {
            films[cs++] = i;
        }
    }
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    // cin >> n >> m >> t >> l;
    scanf("%i", &n);
    scanf("%i", &m);
    scanf("%i", &t);
    scanf("%i", &l);
    int a;
    for(long long i = 0; i < n; i ++)
    {
        scanf("%i", &a);
        films[a] ++;
    }
    srt();
    long long ans = -1;
    for(long long i = 0; i < n; i += m)
    {
        for(long long j = i; j < i + m; j ++)
        {
            if(films[i] != 0)
            {
                long long k = (i / m) * t + films[i] * (l + t);
                ans = max(ans, k);
            }
        }
    }
    cout << ans << endl;
}
