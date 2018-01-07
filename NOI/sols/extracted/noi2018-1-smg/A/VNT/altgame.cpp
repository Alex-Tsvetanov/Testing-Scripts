#include <iostream>
using namespace std;
long long a, b;
bool f[(1<<20)];
string c;

long long getRem ( long long x ) {
    long long ret = 0;
    for ( long long i = 0 ; i < c.size() ; i ++ ) {
        ret *= 10;
        ret += (c[i]-'0');
        ret %= x;
    }
    ret %= x;
    return ret;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;

    for ( long long i = 1 ; i < (1000) ; i ++ ) {
        bool p[3];
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;

        if ( i >= a ) { p[ f[i-a] ] = 1; }
        if ( i >= b ) { p[ f[i-b] ] = 1; }

        if ( p[0] == 0 ) { f[i] = 0; }
        else if ( p[0] == 1 ) { f[i] = 1; }
        else if ( p[0] == 2 ) { f[i] = 2; }
        else { cout << "lel\n"; }

        //cout << i << " : " << f[i] << "\n";

    }

    long long m;
    cin >> m;
    for ( long long i = 0 ; i < m ; i ++ ) {
        cin >> c;
        long long x = getRem( a+b ) ;
        if ( f[x] == 0 ) { cout << "2\n"; }
        else { cout << "1\n"; }
    }

    return 0;
}
