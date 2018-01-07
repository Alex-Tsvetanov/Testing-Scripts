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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, a, prev;
    string ans;
    cin >> N;
    for(int test = 0; test < 5; test++){
        queue<int> A;
        stack<int> B;
        REP(0,N)A.push(i+1);
        int possible = 1;
        REP(0,N){
            cin >> a;
            if(possible){
                while(A.front() <= a && !A.empty())B.push(A.front()),A.pop();
                if(B.top() != a)possible = 0;
                else B.pop();
            }
        }
        ans.pb('0'+possible);
    }
    cout << ans << endl;
}
