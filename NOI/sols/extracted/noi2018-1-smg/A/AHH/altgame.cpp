#include <bits/stdc++.h>
#define REP(a,b)for(int i=(a); i<(b); i++)
#define REP2(a,b)for(int j=(a); j<(b); j++)
#define REP3(a,b)for(int k=(a); k<(b); k++)
#define all(x) x.begin(),x.end()
#define SZ(x) x.size()
#define mp make_pair
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;

int dp[1000001][2],a,b,N, mod;
int stringmod(string s){
    int ost = 0;
    REP(0,s.size()){
        ost*=10;
        ost+=(s[i]-'0')%mod;
        ost%=mod;
    }
    return ost;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    if(a>b)swap(a,b);
    int m;
    cin >> m;
    REP(0,a)dp[i][0]=dp[i][1]=0;
    REP(a,1000001){
        dp[i][0] = !dp[i-a][1];
        if(i>=b)dp[i][0] = max(dp[i][0],int(!dp[i-b][1]));

        dp[i][1] = !dp[i-a][0];
        if(i>=b)dp[i][1] = max(dp[i][1],int(!dp[i-b][0]));
    }
    mod = b+a;
    while(m--){
        string s;
        cin >> s;
        if(s.size() < 7){
            N = atoi(s.c_str());
        }else N = 1000000000;
        if(N < 1000000)cout << (dp[N][0]?1:2) << endl;
        else{
            int ost = stringmod(s);
            cout << (dp[ost][0]?1:2) << endl;
        }
    }
}
/*
2 5
4
6
17
29
41
*/
