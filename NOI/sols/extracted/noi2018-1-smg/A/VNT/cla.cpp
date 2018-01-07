#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long dx[4] = { 0, 1, 0, -1 };
long long dy[4] = { 1, 0, -1, 0 };
long long crrD = 1, cInd, cx, cy;
string input;
vector < pair < int, long long > > pts;

void op () {
    if ( input[cInd] == '-' ) {
        crrD = (crrD-1+4)%4;
        cInd ++;
    }else if ( input[cInd] == '+' ) {
        crrD = (crrD+1)%4;
        cInd ++;
    }else {
        long long c = 0;
        for ( ; cInd < input.size() && input[cInd] >= '0' && input[cInd] <= '9' ; cInd ++ ) {
            c *= 10;
            c += input[cInd]-'0';
        }
        cx += dx[crrD]*c;
        cy += dy[crrD]*c;
        pts.push_back ( make_pair( cx, cy ) );
    }
}

long long cross ( pair < int, long long > a, pair < int, long long > b ) {
    return a.first*b.second - a.second*b.first;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    pts.push_back( make_pair( 0, 0 ) );

    cin >> input;
    for ( ; cInd < input.size() ; ) {
        op();
    }
    long long ans = 0;
    for ( long long i = 0 ; i+1 < pts.size() ; i ++ ) {
        ans += cross( pts[i], pts[i+1] );
    }
    if ( ans < 0 ){ ans *= -1; }
    ans /= 2;
    cout << ans << "\n";
    return 0;
}
/*
100+40+40+20-20-20+40+40
-100+40+40+20-20-20+40+40
+100+40+40+20-20-20+40+40
*/
