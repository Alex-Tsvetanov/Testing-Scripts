#include <iostream>
#include <vector>
#include <string>
using namespace std;
int n, a[(1<<20)];
vector < int > st;
string ans;
void solve () {
    for ( int i = 0 ; i < n ; i ++ ) {
        cin >> a[i];
    }
    st.clear();
    int j = 0;
    for ( int i = 0 ; i < n ; i ++ ) {
        for ( ; j < n && ( st.empty() || st.back() != a[i] ) ; j ++ ) { st.push_back( j+1 ); }
        if ( st.empty() || st.back() != a[i] ) {
            ans += '0';
            return ;
        }
        st.pop_back();
    }
    ans += '1';
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    solve();
    solve();
    solve();
    solve();
    solve();
    cout << ans << "\n";
    return 0;
}
/*
3
1 3 2
2 1 3

*/
