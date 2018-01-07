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
set<int> blocks[1<<16];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int i = 0;
    int orient = 0, x, y, area = 0;
    vector<ii> points= {mp(0,0)};
    vector<pair<ii,ii>> ots;
    while(i < s.size()) {
        while(s[i]=='+' || s[i] == '-') {
            if(s[i] == '+') {
                orient+=1;
                orient%=4;
            } else {
                orient+=3;
                orient%=4;
            }
            i++;
        }
        int n = 0;
        while(s[i]>='0' && s[i]<='9') {
            n*=10;
            n+=s[i]-'0';
            i++;
        }
        ii temp = points.back();
        switch(orient) {
        case 0:
            REP2(temp.fi,temp.fi+n) {
                blocks[j].insert(temp.se);
            }
            temp.fi+=n;
            break;
        case 1:
            temp.se+=n;
            break;
        case 2:
            temp.fi-=n;
            ots.pb(mp(points.back(),temp));
            break;
        case 3:
            temp.se-=n;
            break;
        }
        points.pb(temp);
    }
    REP(0,ots.size()){
        ii A = ots[i].fi;
        ii B = ots[i].se;
        REP2(B.fi,A.fi) {
            area+=A.se-*(--blocks[j].lower_bound(A.se));
        }
    }
    cout << area << endl;
}
